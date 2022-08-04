#include <iostream>
#define max 1000
using namespace std;

int matrix[max][max];


int main()
{
    int Edges,Nodes;
    cin>>Edges>>Nodes;
    for(int i=0;i<Edges;i++) {
        int x,y,w;
        cin>>x>>y>>w;
        matrix[x][y] = w;
        matrix[y][x] = w;
    }

    for(int i=1;i<=Nodes;i++) {
        for(int j=1;j<=Nodes;j++) cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
}
