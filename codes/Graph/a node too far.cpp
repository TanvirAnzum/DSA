#include <bits/stdc++.h>

using namespace std;

ofstream Myfile("filename.txt");


int bfs( vector<int>edges[50],int source, int n, int l)
{
    if(n==1) return 0;
    queue<int> q;
    q.push(source);

    int level[n];
    for(int i=0; i<=n; i++) level[i] = -1;

    level[source] = 0;

    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(int i=0; i<edges[u].size(); i++)
        {
            int v = edges[u][i];
            if(level[v] == -1)
            {
                level[v] = level[u] + 1;
                q.push(v);
            }
        }
    }
    int level_count = 0;
    for(int i=0; i<n; i++)
    {
        if(level[i]>l || level[i] == -1) level_count++;
    }
    return level_count;
}




int main()
{
    int n;
    int kase = 0;
    while(cin>>n)
    {
        if(n == 0) return 0;
        else
        {
            vector<int>edges[50];

            vector< pair<int,int> >value;
            int mapping_node = 0;

            for(int i=0; i<n; i++)
            {
                int u,v;
                cin>>u>>v;

                ///


                if(value.empty())
                {
                    if(u!=v)
                    {
                        value.push_back(make_pair(mapping_node,u));
                        mapping_node++;
                        value.push_back(make_pair(mapping_node,v));

                        int w = value[0].first;
                        int x = value[1].first;
                        ///cout<<w<<x<<endl;
                        edges[w].push_back(x);
                        edges[x].push_back(w);
                    }
                    else
                    {
                        value.push_back(make_pair(mapping_node,u));
                        int w = value[0].first;
                        edges[w].push_back(w);
                    }

                }
                else
                {
                    bool find_u =false,find_v = false;
                    int index_u,index_v;
                    for(int i=0; i<value.size(); i++)
                    {
                        if(value[i].second == u)
                        {
                            find_u = true;
                            index_u = i;
                        }
                        if(value[i].second == v)
                        {
                            find_v = true;
                            index_v = i;
                        }
                    }
                    if(u!=v)
                    {
                        if(!find_u)
                        {
                            mapping_node++;
                            index_u = mapping_node;
                            value.push_back(make_pair(mapping_node,u));
                        }
                        if(!find_v)
                        {
                            mapping_node++;
                            index_v = mapping_node;
                            value.push_back(make_pair(mapping_node,v));
                        }
                        int w = value[index_u].first;
                        int x = value[index_v].first;
                        ///cout<<w<<x<<endl;
                        edges[w].push_back(x);
                        edges[x].push_back(w);
                    }
                    else {
                       if(!find_u)
                        {
                            mapping_node++;
                            index_u = mapping_node;
                            value.push_back(make_pair(mapping_node,u));
                        }
                        int w = value[index_u].first;
                        edges[w].push_back(w);
                    }

                }


            }
            int node,ttl;
            while(cin>>node>>ttl)
            {
                if(!node && !ttl) break;
                else
                {
                    int s= value.size();
                    ///cout<<s<<endl;
                    int src;
                    bool flag = false;
                    for(int i=0; i<value.size(); i++)
                    {
                        if(node == value[i].second)
                        {
                            src = value[i].first;
                            flag = true;
                        }
                    }
                    int level_count;
                    if(!flag) level_count = value.size();
                    else level_count = bfs(edges,src,s,ttl);

                    cout<<"Case "<<++kase<<": "<<level_count<<" nodes not reachable from node "<<node<<" with TTL = "<<ttl<<"."<<endl;
                    ///Myfile<<"Case "<<kase<<": "<<level_count<<" nodes not reachable from node "<<node<<" with TTL = "<<ttl<<"."<<endl;
                }
            }

        }
    }
    return 0;
}

