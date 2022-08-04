#include <iostream>
#include <vector>

#define max 100000

using namespace std;

vector<int>edges[max];
vector<int>cost[max];

int main()
{
    int Nodes,Edges;
    cin>>Nodes>>Edges;

    for(int i=0;i<Edges;i++) {
        int x,y,w;
        cin>>x>>y>>w;
        edges[x].push_back(y);
        edges[y].push_back(x);

        cost[x].push_back(w);
        cost[y].push_back(w);
    }

    for(int i=1;i<=Nodes;i++) {
        cout<<i<<" : ";
        for(int j=0;j<edges[i].size();j++) cout<<edges[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}
