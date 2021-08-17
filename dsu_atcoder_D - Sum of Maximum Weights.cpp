

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


const int N=100005;
ll par[N],sz[N];

ll Find(ll u)
{
    if(par[u]==u) return u;
    else
    {
        return par[u]=Find(par[u]); ///path compresssion
    }
}


void Union(ll u,ll v)
{
    ll p1=Find(u); ///find parent of u
    ll p2=Find(v); ///find parent of v

    if(p1==p2) return;

    if(p1!=p2)
    {
        if(sz[p1]>=sz[p2])
        {
            par[p2]=p1;
            sz[p1]+=sz[p2];

        }
        else
        {
            par[p1]=p2;
            sz[p2]+=sz[p1];
        }

    }

}

ll Size(ll u)
{
    ll p=Find(u);

    return sz[p];
}

int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    ll t,i,j;
    ll n;cin>>n;
    vector<pair<ll,pll>> v;

    for(i=0;i<n-1;i++)
    {
        ll x,y,w;cin>>x>>y>>w;
       /// cout<<"X "<<x<<" Y "<<y<<" W "<<w<<endl;

        v.push_back({w,{x,y}});

    }



    sort(v.begin(),v.end());

    for(i=1;i<=n;i++) { par[i]=i;sz[i]=1; }

    ll s=0;
    for(auto it:v)
    {

        ll cst=it.ff;
        ll U=it.ss.ff;
        ll V=it.ss.ss;

        ll sz1=Size(U);
        ll sz2=Size(V);

       /// cout<<"SZ1 "<<sz1<<" SZ2 "<<sz2<<endl;

        Union(U,V);

        ///cout<<"AFTER U "<<Find(U)<<" V "<<Find(V)<<endl;


        s+=(cst*sz1*sz2);

    }

    cout<<s<<"\n";



    return 0;

}



