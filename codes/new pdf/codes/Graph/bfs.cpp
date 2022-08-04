#include <iostream>
#include <vector>
#include <queue>

#define MAX 100000

using namespace std;

vector<int> edges[MAX];

void bfs(int source, int n)
{
    queue<int> q;
    q.push(source);

    int level[n];
    for(int i=1; i<=n; i++) level[i] = -1;

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

    for(int i=1; i<=n; i++)
    {
        cout<<i<<" -> "<<level[i]<<endl;
    }

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

    /**
    for(int i=1;i<Nodes;i++) {
        cout<<i<<" : ";
        for(int j=0;j<edges[i].size();j++) cout<<edges[i][j];
        cout<<endl;
    }
    */

    bfs(source,Nodes);

    return 0;

}


/// 10 13 1 2 1 4 1 3 2 6 4 7 3 8 6 10 7 9 8 5 3 7 7 8 9 10 5 10

