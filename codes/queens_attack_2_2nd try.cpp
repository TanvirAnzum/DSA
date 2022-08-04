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

int arr[10001][10001] = {0};

int up(pos queen,int m)
{
    int count = 0;
    bool status = true;
    int a = queen.x + 1;
    int b = queen.y;
    while(status) {
        if(arr[a][b]) return count;
        else if (a > m || b > m) return count;
        else if( a < 1 || b < 1) return count;
        else {
            count++;
            a++;
        }
    }
    return count;
}

int down(pos queen,int m)
{
    int count = 0;
    bool status = true;
    int a = queen.x - 1;
    int b = queen.y;
    while(status) {
        if(arr[a][b]) return count;
        else if (a > m || b > m) return count;
        else if( a < 1 || b < 1) return count;
        else {
            count++;
            a--;
        }
    }
    return count;
}

int righty(pos queen,int m)
{
    int count = 0;
    bool status = true;
    int a = queen.x;
    int b = queen.y + 1;
    while(status) {
        if(arr[a][b]) return count;
        else if (a > m || b > m) return count;
        else if( a < 1 || b < 1) return count;
        else {
            count++;
            b++;
        }
    }
    return count;
}

int luc(pos queen,int m)
{
    int count = 0;
    bool status = true;
    int a = queen.x - 1;
    int b = queen.y - 1;
    while(status) {
        if(arr[a][b]) return count;
        else if (a > m || b > m) return count;
        else if( a < 1 || b < 1) return count;
        else {
            count++;
            b--;
            a--;
        }
    }
    return count;
}

int ldc(pos queen,int m)
{
    int count = 0;
    bool status = true;
    int a = queen.x + 1;
    int b = queen.y - 1;
    while(status) {
        if(arr[a][b]) return count;
        else if (a > m || b > m) return count;
        else if( a < 1 || b < 1) return count;
        else {
            count++;
            b--;
            a++;
        }
    }
    return count;
}


int lefty(pos queen,int m)
{
    int count = 0;
    bool status = true;
    int a = queen.x;
    int b = queen.y - 1;
    while(status) {
        if(arr[a][b]) return count;
        else if (a > m || b > m) return count;
        else if( a < 1 || b < 1) return count;
        else {
            count++;
            b--;
        }
    }
    return count;
}

int ruc(pos queen,int m)
{
    int count = 0;
    bool status = true;
    int a = queen.x - 1;
    int b = queen.y + 1;
    while(status) {
        if(arr[a][b]) return count;
        else if (a > m || b > m) return count;
        else if( a < 1 || b < 1) return count;
        else {
            count++;
            b++;
            a--;
        }
    }
    return count;
}

int rdc(pos queen,int m)
{
    int count = 0;
    bool status = true;
    int a = queen.x + 1;
    int b = queen.y + 1;
    while(status) {
        if(arr[a][b]) return count;
        else if (a > m || b > m) return count;
        else if( a < 1 || b < 1) return count;
        else {
            count++;
            b++;
            a++;
        }
    }
    return count;
}


int main()
{
    pos queen,board;

    int m,n,p,q,r,s;
    cin>>m>>n>>p>>q;
    arr[p][q] = 2;
    queen.x = p;
    queen.y = q;
    board.x = board.y = m;
    for(int i=0; i<n; i++)
    {
        cin>>r>>s;
        arr[r][s] = 1;
    }

    int count;
    count = luc(queen,m) + down(queen,m) + righty(queen,m) + lefty(queen,m) + up(queen,m) + ldc(queen,m) + ruc(queen,m) + rdc(queen,m);
    cout<<count<<endl;

}

