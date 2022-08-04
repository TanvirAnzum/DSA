#include <bits/stdc++.h>
#define MAX 10000


using namespace std;


int index(vector<string> arr,string key,int n)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i] == key) return i;
    }
    return -1;
}

string vertex(vector<string> arr,int index,int n)
{
    for(int i=0; i<n; i++)
    {
        if(i == index) return arr[i];
    }
    return NULL;
}



void bfs(vector<int>edges[],int source,int dest,vector<string> value)
{
    queue<int> q;
    q.push(source);
    int n = value.size();
    int level[n+1];
    int pred[n+1];
    for(int i=0; i<n; i++)
    {
        level[i] = -1;
        pred[i] = -1;
    }
    bool check = false;
    level[source] = 0;

    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(int i=0; i<edges[u].size(); i++)
        {
            int v = edges[u][i];
            if(level[v] == -1)
            {
                level[v] = level[u] + 1;
                pred[v] = u;
                q.push(v);
            }
            if(v == dest)
            {
                check = true;
                break;
            }
        }
    }

    if(check)
    {
        int crawl = dest;
        vector<int>path;
        path.push_back(crawl);
        while(pred[crawl] != -1)
        {
            path.push_back(pred[crawl]);
            crawl = pred[crawl];
        }

        for(int i=path.size()-1; i>0; i--) {
            cout<<vertex(value,path[i],n)<<" "<<vertex(value,path[i-1],n)<<endl;
        }
    }
    else {
        cout<<"No route"<<endl;
    }

}



int main()
{
    int n;
    while(cin>>n)
    {
        vector<string> value;
        vector<int>edges[MAX];
        while(n--)
        {
            string u;
            cin>>u;
            string v;
            cin>>v;
            int index_u = index(value,u,value.size());
            int index_v = index(value,v,value.size());

            if(index_u == -1)
            {
                value.push_back(u);
                index_u = value.size() - 1;
            }
            if(index_v == -1)
            {
                value.push_back(v);
                index_v = value.size() - 1;
            }
            edges[index_u].push_back(index_v);
            edges[index_v].push_back(index_u);
        }
        string s,d;
        cin>>s>>d;
        int u = index(value,s,value.size());
        int v = index(value,d,value.size());
        if(u == -1 || v == -1)
        {
            cout<<"No route"<<endl;
        }
        else bfs(edges,u,v,value);

    }
    return 0;

}
