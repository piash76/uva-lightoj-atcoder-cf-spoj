

#include<bits/stdc++.h>
#define ll long long
#define pll  pair<ll,ll>

using namespace std;

const ll inf=1e18;
const int N=100005;

vector<ll> g[N];
ll vis[N],dis[N],lvl[N];

int main()
{

    ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

    ll i,j;


    ll n;cin>>n;
    map<pll,ll> cst;

    for(i=1;i<n;i++)
    {
        ll u,v,w;cin>>u>>v>>w;
        g[u].push_back(v);
        g[v].push_back(u);

        cst[{u,v}]=w;
        cst[{v,u}]=w;



    }

    ll Q,k;cin>>Q>>k;

    dis[k]=0;
    vis[k]=1;
    lvl[k]=0;

    queue<ll> q;
    q.push(k);

    while(!q.empty())
    {
        ll par=q.front();
        q.pop();

        for(auto child : g[par])
        {
            if(vis[child]==0)
            {

                vis[child]=1;
                dis[child]=dis[par]+cst[{par,child}];

                lvl[child]=lvl[par]+1;

                q.push(child);
            }
        }
    }

  /*  cout<<"DIS"<<endl;
    for(i=1;i<=n;i++) cout<<dis[i]<<" ";
    cout<<endl;*/

    while(Q--)
    {
        ll u,v;cin>>u>>v;

        ll mn,mx;
        if(lvl[u]<lvl[v])
        {
            mn=u;
            mx=v;
        }
        else
        {
            mn=v;
            mx=u;

        }

        cout<<dis[mx]+dis[mn]<<endl;


    }


    return 0;

}



