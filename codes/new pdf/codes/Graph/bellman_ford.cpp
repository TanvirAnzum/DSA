#include <bits/stdc++.h>

#define infinity 1<<30

using namespace std;


struct Edge {
    int u; /// start of edges
    int v; /// end of edges
    int w; /// weight
};

struct Graph {
    int V;  /// total number of nodes
    int E;  /// total number of edges
    struct Edge* edge; /// array of edges
};

struct Graph* createGraph(int v, int e) {
    struct Graph* graph = new Graph;
    graph->V = v;
    graph->E = e;
    graph->edge =new Edge[e];
    return graph;
};


void bellman(struct Graph* graph, int u)
{
    int V = graph->V;
    int E = graph->E;

    int dist[V+1];

    for(int i=1;i<=V;i++) dist[i] = infinity;

    dist[u] = 0;

    for(int i=1;i<V;i++) {
        for(int j=0;j<E;j++) {
            int u = graph->edge[j].u;
            int v = graph->edge[j].v;
            int w = graph->edge[j].w;

            if(dist[u] != infinity && dist[u] + w < dist[v]) dist[v] = dist[u] + w;
        }
    }

    ///finding negative cycle

    for(int i=0;i<E;i++) {
        int u = graph->edge[i].u;
        int v = graph->edge[i].v;
        int w = graph->edge[i].w;

        if(dist[u] != infinity && dist[u] + w < dist[v]) {
            cout<<"Negative Cycle Found!!"<<endl;
            return;
        }
    }

    for(int i=1;i<=V;i++) cout<<i<<" -> "<<dist[i]<<endl;

}



int main()
{
    int V,E;

    cin>>V>>E;


    struct Graph* graph = createGraph(V,E);

    for(int i=0;i<E;i++) {
        int u,v,w;
        cin>>u>>v>>w;
        graph->edge[i].u = u;
        graph->edge[i].v = v;
        graph->edge[i].w = w;
    }

    bellman(graph, 1);
}


/// 9 13  1 2 10 1 8 8 2 6 2 3 2 1 3 4 1 4 5 3 5 6 -1 6 3 -2 7 6 -1 7 2 -4 8 7 1 9 4 7 9 5 -10
