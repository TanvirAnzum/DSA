#include <iostream>
#define max 1000

using namespace std;

int matrix[max][max];

class queue {
    int arr[max];
    int front_value,rear_value;
public:
    queue() {
        front_value = 0;
        rear_value = -1;
    }
    void push(int val);
    int pop();
    bool empty();
    int front();
};

void queue::push(int val) {
    if(rear_value > max - 1) {
        cout<<"OverFlow"<<endl;
        return;
    }
    arr[++rear_value] = val;
}

int queue::pop() {
    if(front_value > rear_value) return false;
    return arr[front_value++];
}

bool queue::empty() {
    return (rear_value < 0);
}

int queue::front() {
    return arr[front_value];
}

void bfs(int source, int Nodes)
{
    queue q;
    q.push(source);

    int level[Nodes + 1];
    int visited[Nodes + 1];
    for(int i=1;i<=Nodes;i++) level[i] = -1;
    level[source] = 0;
    visited[source] = 0;
    while(!q.empty()) {
        int u = q.front();
        int z = q.pop();
        for(int i=1;i<=Nodes;i++) {
            if(matrix[u][i]) {
                /**
                int v = matrix[u][i];
                cout<<i<<endl;
                */
                if(level[i] == -1) {
                    level[i] = level[u] + 1;
                    q.push(i);
                }
                cout<<i<<" "<<level[i]<<endl;
            }
        }
    }

    for(int i=1; i<=Nodes; i++)
    {
        cout<<i<<" -> "<<level[i]<<endl;
    }
}


int main()
{
    int Nodes,Edges;
    cin>>Nodes>>Edges;
    for(int i=0;i<Edges;i++) {
        int x,y;
        cin>>x>>y;
        matrix[x][y] = 1;
        matrix[y][x] = 1;
    }

    for(int i=1;i<=Nodes;i++) {
        for(int j=1;j<=Nodes;j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    int source;
    cout<<"Enter Source: ";
    cin>>source;
    bfs(source,Nodes);
}
