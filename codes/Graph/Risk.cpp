#include <bits/stdc++.h>
#define MAX 25

using namespace std;



void bfs(vector<int>edges[],int source,int destination)
{
    queue<int> q;
    q.push(source);
    int level[21];
    for(int i=1; i<=20; i++) level[i] = -1;

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
                q.push(v);
            }
        }
    }

    printf("%2d to %2d: %d\n", source, destination, level[destination]);

}


int main()
{

    int n, test_case;
    test_case = 1;
    while(cin>>n)
    {
        vector<int> edges[MAX];
        for(int j=0; j<n; j++)
        {
            int w;
            cin>>w;
            edges[1].push_back(w);
            edges[w].push_back(1);
        }

        for(int i=2; i<=19; i++)
        {
            int w;
            cin>>w;
            for(int j=0; j<w; j++)
            {
                int x;
                cin>>x;
                edges[i].push_back(x);
                edges[x].push_back(i);
            }
        }
        int t;
        cin>>t;

        printf("Test Set #%d\n",test_case++);

        for(int i=0; i<t; i++)
        {
            int s,d;
            cin>>s>>d;
            bfs(edges,s,d);
        }
        cout<<endl;
    }
    return 0;
}

