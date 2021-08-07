

#include<bits/stdc++.h>
#define ll long long
#define pll  pair<ll,ll>

using namespace std;

const ll inf=1e15;
const int N=500005;

ll dis[N],vis[N],path[N];

vector<ll> g[N],cost[N];



void dijkstra(ll src)
{
    dis[src]=0;
    priority_queue< pair<ll,ll>,vector<pair<ll,ll> >, greater<pair<ll,ll> > > q;

    q.push({0,src});  ///distance from src, node


    while(!q.empty())
    {
        ll par =q.top().second;
        ll prev_cst=q.top().first;
        q.pop();

        if(dis[par]<prev_cst) continue; ///if multiple roads coming to u

        for(ll i=0;i<g[par].size();i++)
        {
            ll child = g[par][i];
            ll cst= cost[par][i];

            if(dis[child]>dis[par]+cst)
            {
                dis[child]=dis[par]+cst;
                path[child]=par;
                q.push({dis[child],child});
            }
        }
    }


}


int main()
{

    ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

    ll i,j;


    ll n,m;cin>>n>>m;

    for(i=1;i<=n;i++) dis[i]=inf;

    for(i=1;i<=m;i++)
    {
        ll u,v,w;cin>>u>>v>>w;
        g[u].push_back(v);
        g[v].push_back(u);

        cost[u].push_back(w);
        cost[v].push_back(w);
    }

    dijkstra(1);


    if(dis[n]==inf) cout<<-1<<"\n";
    else
    {
        vector<ll> v;
        v.push_back(n);

        ll par=path[n];
        while(par!=1)
        {

        v.push_back(par);
            par=path[par];

        }
        v.push_back(1);

        reverse(v.begin(),v.end());

        for(auto it:v) cout<<it<<" ";
        cout<<"\n";
    }


    return 0;

}




