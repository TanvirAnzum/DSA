#include <iostream>

using namespace std;

int main()
{
    int matrix[100][100];

    int Nodes,Edges,Cost;

    ///direct input to matrix
    /**
    cin>>Nodes;

    for(int i=0;i<Nodes;i++) {
        for(int j=0;j<Nodes;j++) cin>>matrix[i][j];
    }
    */
    /// from nodes edges cost input format
    cin>>Nodes>>Edges;
    for(int i=0;i<Edges;i++) {
       int n1,n2,cost;
       cin>>n1>>n2>>cost;
       matrix[n1][n2] = cost;
       //matrix[n2][n1] = cost;
    }

    cout<<"Output: "<<endl;
    for(int i=1;i<=Nodes;i++) {
        for(int j=1;j<=Nodes;j++) cout<<matrix[i][j]<<" ";
        cout<<endl;
    }


}




