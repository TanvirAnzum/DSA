#include <iostream>
#include <vector>
#include <queue>

#define MAX 100000

using namespace std;

vector<int> edges[MAX];

void bfs(int source, int n, int dest)
{
    queue<int> q;
    q.push(source);

    int level[n+1];
    int pred[n+1];
    for(int i=1; i<=n; i++) {
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
            if(v == dest) {
                check = true;
                break;
            }
        }
    }

    int crawl = dest;
    vector<int>path;
    path.push_back(crawl);
    while(pred[crawl] != -1) {
        path.push_back(pred[crawl]);
        crawl = pred[crawl];
    }

    for(int i=0;i<path.size();i++) cout<<path[i]<<" ";
}




int main()
{
    int Nodes,Edges,source,dest;
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
    cout<<"Enter Source: ";
    cin>>dest;
    /**
    for(int i=1;i<Nodes;i++) {
        cout<<i<<" : ";
        for(int j=0;j<edges[i].size();j++) cout<<edges[i][j];
        cout<<endl;
    }
    */

    bfs(source,Nodes,dest);

    return 0;

}


/// 10 13 1 2 1 4 1 3 2 6 4 7 3 8 6 10 7 9 8 5 3 7 7 8 9 10 5 10

