#include <bits/stdc++.h>

using namespace std;

class pos
{
public:
    int x,y;
};

/**
0  R
1  L
2  U
3  D
4  LUC
5  LDC
6  RUC
7  RDC
*/

int dist(pos a,pos b)
{
    return sqrt(pow((a.x - b.x),2) + pow((a.y-b.y),2));
}

int find_direction(pos temp,pos queen)
{
    if(temp.x == queen.x)
    {
        if(temp.y > queen.y) return 0;
        else return 1;
    }
    else if(temp.y == queen.y)
    {
        if(temp.x<queen.x) return 2;
        else return 3;
    }
    else if(abs(queen.x - temp.x) == abs(queen.y - temp.y))
    {
        if(temp.x<queen.x && temp.y<queen.y) return 4;
        else if(temp.x>queen.x && temp.y<queen.y) return 5;
        else if(temp.x<queen.x && temp.y>queen.y) return 6;
        else if(temp.x>queen.x && temp.y>queen.y) return 7;
    }

    return -1;
}

int main()
{
    pos queen,board;
    pos direction[8];
    int distance[8];

    for(int i=0; i<=8; i++)
    {
        direction[i].x = INT_MAX;
        direction[i].y = INT_MAX;
    }

    for(int i=0; i<=8; i++) distance[i] = INT_MAX;

    int m,n,p,q;
    cin>>m>>n>>p>>q;

    queen.x = p;
    queen.y = q;
    board.x = board.y = m;
    for(int i=0; i<n; i++)
    {
        pos temp;
        cin>>temp.x>>temp.y;
        int d,e;
        d = find_direction(temp,queen);
        e = dist(queen,temp);
        if(d!= -1 && distance[d]>e)
        {
            direction[d] = temp;
            distance[d] = e;
        }
    }

    int count = 0;

    if(direction[0].x<m && direction[0].y<m ) count+= direction[0].y - queen.y - 1;   ///right side
    else count+= m - queen.y;

    if(direction[1].x<m && direction[1].y<m ) count+= queen.y - direction[1].y - 1;   ///left side
    else count+= queen.y - 1;

    if(direction[2].x<m && direction[2].y<m ) count+= queen.x - direction[2].x - 1;   ///up side
    else count+= queen.x - 1;

    if(direction[3].x<m && direction[3].y<m ) count+=direction[3].x - queen.x -  1;   ///down side
    else count+= m - queen.x;

    if(direction[4].x<m && direction[4].y<m ) count+= abs(queen.x - direction[4].x) - 1;   ///LUC side
    else count+= min(queen.x,queen.y) - 1;

    if(direction[5].x<m && direction[5].y<m ) count+= abs(queen.x - direction[5].x) - 1;   ///LDC side
    else count+= min(m - queen.x,queen.y - 1);

    if(direction[6].x<m && direction[6].y<m ) count+= abs(direction[6].x - queen.x) - 1;   ///RUC side
    else count+= min(queen.x - 1,m - queen.y);

    if(direction[7].x<m && direction[7].y<m ) count+= abs(direction[7].x - queen.x) - 1;   ///RDC side
    else count+= min(m - queen.x,m - queen.y);

    cout<<count<<endl;

    return 0;

}


