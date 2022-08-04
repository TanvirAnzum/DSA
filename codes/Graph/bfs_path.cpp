#include <iostream>
#include <vector>
#include <queue>

#define MAX 100000

using namespace std;

vector<int> edges[MAX];

void printpath(vector<int>& path)
{
    int size = path.size();
    cout<<size<<endl;

    for (int i = 0; i < size; i++)
        cout << path[i] << " ";
    cout << endl;
}

int isNotVisited(int x, vector<int>& path)
{
    int size = path.size();
    for (int i = 0; i < size; i++)
        if (path[i] == x)
            return 0;
    return 1;
}




void bfs(int source, int dest)
{
    queue< vector<int> > q;
    vector<int>path;
    path.push_back(source);
    q.push(path);

    bool check = false;
    while(!q.empty())
    {
        path = q.front();
        q.pop();
        int last = path[path.size()-1];
        if(check) break;
        if(last==dest) {
            printpath(path);
            check = true;
        }
        for(int i=0; i<edges[last].size(); i++)
        {
            if(isNotVisited(edges[last][i],path)) {
                vector<int> newpath(path);
                newpath.push_back(edges[last][i]);
                q.push(newpath);
            }
        }
    }

    if(!check) cout<<"No path found"<<endl;

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
    cout<<"Enter Destination: ";
    cin>>dest;
    /**
    for(int i=1;i<Nodes;i++) {
        cout<<i<<" : ";
        for(int j=0;j<edges[i].size();j++) cout<<edges[i][j];
        cout<<endl;
    }
    */

    bfs(source,dest);

    return 0;

}


/// 10 13 1 2 1 4 1 3 2 6 4 7 3 8 6 10 7 9 8 5 3 7 7 8 9 10 5 10

