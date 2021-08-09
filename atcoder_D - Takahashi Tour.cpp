
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

const ll inf=1e15;
const int mod=1e9+7;


const int N=500005;
ll a[N];

vector<ll> g[N];
ll vis[N];

void dfs(ll par)
{

    ///cout<<"PAR "<<par<<endl;
    cout<<par<<" ";

    for(auto child:g[par])
    {
        if(vis[child]==0)
        {
            vis[child]=1;
            dfs(child);
            cout<<par<<" ";
        }

    }
}

int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    ll t,i,j;


    ll n;cin>>n;

    for(i=1;i<n;i++)
    {
        ll u,v;cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    for(i=1;i<=n;i++)
    {
        sort(g[i].begin(),g[i].end());
    }

    vis[1]=1;
    dfs(1);

    cout<<endl;

    return 0;

}




