#include <bits/stdc++.h>

#define MAX 100000

using namespace std;

vector<int>arr[MAX];


int main()
{
    int n,q;
    cin>>n>>q;
    int last_ans = 0;
    for(int i=0;i<q;i++) {
        int x,y,z;
        cin>>z>>x>>y;
        if(z==1) {
            int idx = (x ^ last_ans)%n;
            arr[idx].push_back(y);
        }
        else {
            int idx = (x ^ last_ans)%n;
            int k = y % arr[idx].size();
            last_ans = arr[idx][k];
            cout<<last_ans<<endl;
        }
    }
    return 0;
}
