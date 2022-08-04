#include <bits/stdc++.h>

using namespace std;

ofstream Myfile("filename.txt");
int main()
{
    int n;
    while(cin>>n)
    {
        if(n == 0) return 0;
        else
        {
            vector<int>edges[210];
            int color[n];
            for(int i=0; i<n; i++) color[i] = -1;
            set<int>s;
            int l;
            cin>>l;
            for(int i=0; i<l; i++)
            {
                int u,v;
                cin>>u>>v;
                edges[u].push_back(v);
                edges[v].push_back(u);
            }

            int source = 0;


            queue<int>q;
            q.push(source);
            bool flag = true;
            while(!q.empty())
            {
                int u = q.front();
                q.pop();
                if(color[u] == -1) color[u] = 0;
                for(int i=0; i<edges[u].size(); i++)
                {
                    int v = edges[u][i];
                    if(color[v] == color[u])
                    {
                        flag = false;
                        break;
                    }
                    if(color[v] == -1)
                    {
                        color[v] = !color[u];
                        q.push(v);
                    }
                }
            }

           if(flag) cout<<"BICOLORABLE."<<endl;
           else cout<<"NOT BICOLORABLE."<<endl;
        }
    }
    return 0;
}
