
///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>

#define ll long long
#define pll  pair<ll,ll>

#define ff    first
#define ss    second

#define  mp  make_pair
#define  pb  push_back

#define cy  cout<<"YES"<<endl
#define cn   cout<<"NO"<<endl


using namespace std;

const ll inf=1e18;
const int mod=1e9+7;
const int mod2=2147483647; ///2^31-1

const int N=500005;
ll vis[N],lvl[N],ways[N];
vector<ll> g[N];

ll n,m;

void bfs()
{
    queue<ll> q;
    q.push(1);
    lvl[1]=0;
    ways[1]=1;
    vis[1]=1;

    while(!q.empty())
    {
        ll par=q.front();
        q.pop();

        for(auto child :g[par])
        {
            if(vis[child]==0)
            {
                q.push(child);
                lvl[child]=lvl[par]+1;
                ways[child]=(ways[child]+ways[par])%mod;

                vis[child]=1;


            }
            else
            {
                if(lvl[child]==lvl[par]+1)
                {
                   /// cout<<"PAR "<<par<<" CHIKD "<<child<<endl;

                   ways[child]=(ways[child]+ways[par])%mod;
                }
            }
        }
    }
}


int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    ll t,i,j;

    cin>>n>>m;

    for(i=1;i<=m;i++)
    {
        ll u,v;cin>>u>>v;
        g[u].pb(v);
        g[v].pb(u);

    }

    bfs();

  /// for(i=1;i<=n;i++) cout<<ways[i]<<" ";
  ///  cout<<endl;

    cout<<ways[n]%mod<<endl;


    return 0;

}




