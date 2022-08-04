#include <iostream>
#include <vector>
#define infinity 1<<30

using namespace std;

void floyd(int mat[][100],int n)
{
    for(int k=1;k<=n;k++) {
        for(int i=1;i<=n;i++) {
            for(int j=1;j<=n;j++) {
                if(mat[i][j] > mat[i][k] + mat[k][j]) {
                    mat[i][j] = mat[i][k] + mat[k][j];
                }
            }
        }
    }
}




int main()
{
    int matrix[100][100];
    int Nodes,Edges;
    cin>>Nodes>>Edges;
    for(int i=1;i<=Nodes;i++) {
        for(int j=1;j<=Nodes;j++) {
            if(i==j) matrix[i][j] = 0;
            else matrix[i][j] = infinity;
        }
    }

    for(int i=0;i<Edges;i++) {
       int n1,n2,cost;
       cin>>n1>>n2>>cost;
       matrix[n1][n2] = cost;
       //matrix[n2][n1] = cost;
    }

    floyd(matrix,Nodes);

    cout<<"Output: "<<endl;
    for(int i=1;i<=Nodes;i++) {
        for(int j=1;j<=Nodes;j++) cout<<matrix[i][j]<<" ";
        cout<<endl;
    }


}

/**
4 7
1 2 3
1 4 7
2 3 2
2 1 8
3 4 1
3 1 5
4 1 2
*/


