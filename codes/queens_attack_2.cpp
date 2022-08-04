#include <bits/stdc++.h>

using namespace std;

class pos
{
public:
    int x,y;
    void print()
    {
        cout<<x<<" "<<y<<endl;
    }
};

int arr[101][101] = {0};

pos up,down,lefty,righty,luc,ldc,ruc,rdc;

int make_position(pos queen,pos board)
{
    bool a,b,c,d,e,f,g,h;
    a = b = c = d = e = f = g = h = true;
    int count = 0;
    if(a)
    {
        up.x = queen.x;
        up.y = queen.y + 1;
        if(up.x > board.x || up.y>board.y || arr[up.x][up.y] == 1) a = false;
        else count++;
        while(a) {
            up.y++;
            if(up.x > board.x || up.y>board.y || arr[up.x][up.y] == 1) a = false;
            else count++;
        }
    }
    cout<<count;
    if(b)
    {
        down.x = queen.x;
        down.y = queen.y - 1;
        if(down.x > board.x || down.y>board.y || arr[down.x][down.y] == 1) b = false;
        else count++;
        while(b) {
            down.y--;
            if(down.x > board.x || down.y>board.y || arr[down.x][down.y] == 1) b = false;
            else count++;
        }
    }
    cout<<count;
    if(c)
    {
        lefty.x = queen.x - 1;
        lefty.y = queen.y;
        if(lefty.x > board.x || lefty.y>board.y || arr[lefty.x][lefty.y] == 1) c = false;
        else count++;
        while(c) {
            lefty.x--;
            if(lefty.x > board.x || lefty.y>board.y || arr[lefty.x][lefty.y] == 1) c = false;
            else count++;
        }
    }
    cout<<count;
    if(d)
    {
        righty.x = queen.x + 1;
        righty.y = queen.y;
        if(righty.x > board.x || righty.y>board.y || arr[righty.x][righty.y] == 1) d = false;
        else count++;
        while(d) {
            righty.x++;
            if(righty.x > board.x || righty.y>board.y || arr[righty.x][righty.y] == 1) d = false;
            else count++;
        }
    }
    cout<<count;
    if(e)
    {
        luc.x = queen.x - 1;
        luc.y = queen.y - 1;
        if(luc.x > board.x || luc.y>board.y || arr[luc.x][luc.y]==1) e = false;
        else count++;
        while(e) {
            luc.x--;
            luc.y--;
            if(luc.x > board.x || luc.y>board.y || arr[luc.x][luc.y]==1) e = false;
            else count++;
        }
    }
    cout<<count;
    if(f)
    {
        ldc.x = queen.x - 1;
        ldc.y = queen.y + 1;
        if(ldc.x > board.x || ldc.y>board.y || arr[ldc.x][ldc.y]==1) f = false;
        else count++;
        while(f) {
            ldc.x--;
            ldc.y++;
            if(ldc.x > board.x || ldc.y>board.y || arr[ldc.x][ldc.y]==1) f = false;
            else count++;
        }
    }
    cout<<count;
    if(g)
    {
        ruc.x = queen.x + 1;
        ruc.y = queen.y - 1;
        if(ruc.x > board.x || ruc.y>board.y || arr[ruc.x][ruc.y] ==1) g = false;
        else count++;
        while(g) {
            ruc.x++;
            ruc.y--;
            if(ruc.x > board.x || ruc.y>board.y || arr[ruc.x][ruc.y] ==1) g = false;
            else count++;
        }
    }
    cout<<count;
    if(h)
    {
        rdc.x = queen.x + 1;
        rdc.y = queen.y + 1;
        if(rdc.x > board.x || rdc.y>board.y || arr[rdc.x][rdc.y] ==1) h = false;
        else count++;
        while(h) {
            rdc.x++;
            rdc.y++;
            if(rdc.x > board.x || rdc.y>board.y || arr[rdc.x][rdc.y] ==1) h = false;
            else count++;
        }
    }
    return count;
}

int main()
{
    pos queen,board;

    int m,n,p,q,r,s;
    cin>>m>>n>>p>>q;
    arr[p][q] = 1;
    queen.x = p;
    queen.y = q;
    board.x = board.y = m;
    for(int i=0; i<n; i++)
    {
        cin>>r>>s;
        arr[r][s] = 1;
    }
    for(int i=1;i<m+1;i++) {
        for(int j=1;j<m+1;j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    queen.print();
    board.print();
    cout<<make_position(queen,board)<<endl;

}
