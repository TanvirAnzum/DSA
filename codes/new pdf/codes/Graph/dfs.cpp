#include <iostream>
#include <vector>
#include <queue>

#define MAX 100000

using namespace std;

vector<int> edges[MAX];



void dfs(int source, bool visited[])
{
    visited[source] = true;

    for(int i=0;i<edges[source].size();i++) {
        int v = edges[source][i];
        if(!visited[v]) dfs(v,visited);
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
    bool visited[Nodes];
    for(int i=1;i<=Nodes;i++) visited[i] = "False";


    dfs(source,visited);

    for(int i=1;i<=Nodes;i++) cout<<i<<" = "<<visited[i]<<endl;

    return 0;

}


/// 10 13 1 2 1 4 1 3 2 6 4 7 3 8 6 10 7 9 8 5 3 7 7 8 9 10 5 10


