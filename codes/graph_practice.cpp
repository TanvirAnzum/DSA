#include <bits/stdc++.h>
#define MAX 100000

using namespace std;

vector <int> edges[MAX];
vector <int> cost[MAX];

void bfs(int source,int node,int dest)
{
    int level[node+1];
    int pred[node+1];
    for(int i=1; i<=node; i++) {
      level[i] = -1;
      pred[i] = -1;
    }

    queue<int>q;
    q.push(source);
    level[source] = 0;
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(int i=0; i<edges[u].size(); i++)
        {
            int v = edges[u][i];
            if(level[v]==-1)
            {
                level[v] = level[u] + 1;
                pred[v] = u;
                q.push(v);
            }
        }
    }

    cout<<"Printing levels of all nodes: ";
    for(int i=1; i<=node; i++) cout<<level[i]<<" ";
    cout<<endl;

    int crawl = dest;
    vector<int> path;
    path.push_back(crawl);
}


int main()
{
    int Nodes,Edges,source;
    cin>>Nodes>>Edges;

    ///taking inputs

    for(int i=0; i<Edges; i++)
    {
        int x,y;
        cin>>x>>y;
        edges[x].push_back(y);
        edges[y].push_back(x);
    }

    cout<<"Enter Source: ";
    cin>>source;
    bfs(source,Nodes);
}

