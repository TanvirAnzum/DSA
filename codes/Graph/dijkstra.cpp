#include <iostream>
#include <vector>
#include <queue>

#define MAX 100000

using namespace std;

vector<int> edges[MAX];
vector<int> cost[MAX];

struct node{
    int u;
    int cost;
    node(int _u, int _cost){
        u = _u;
        cost = _cost;
    }
    bool operator < ( const node& p ) const {      return cost > p.cost;   } //Operator overloading

};


void dijkstra(int source,int n)
{
    priority_queue<node>q;
    int distance[n+1];
    for(int i=1;i<=n;i++) distance[i] = MAX;

    q.push(node(source,0));
    distance[source] = 0;


    while(!q.empty())
    {
        node top = q.top();
        q.pop();
        int u = top.u;
        for(int i=0;i<edges[u].size();i++) {
            int v = edges[u][i];

            if(distance[u] + cost[u][i] < distance[v]){
              distance[v] = distance[u] + cost[u][i];
              q.push(node(v,distance[v]));

            }
        }
    }

    for(int i=1;i<=n;i++) cout<<i<<" -> "<<distance[i]<<endl;

}



int main()
{
    int Nodes,Edges,source;
    cin>>Nodes>>Edges;

    ///taking inputs

    for(int i=0; i<Edges; i++)
    {
        int x,y,Cost;
        cin>>x>>y>>Cost;
        edges[x].push_back(y);
        edges[y].push_back(x);
        cost[x].push_back(Cost);
        cost[y].push_back(Cost);
    }

    cout<<"Enter Source: ";
    cin>>source;

    dijkstra(source,Nodes);

    return 0;

}


/// 10 13 1 2 1 4 1 3 2 6 4 7 3 8 6 10 7 9 8 5 3 7 7 8 9 10 5 10
/// 4 6 1 2 5 1 3 10 2 3 4 2 4 11 3 4 5 1 3 12


