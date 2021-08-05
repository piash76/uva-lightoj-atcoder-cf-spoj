

#include<bits/stdc++.h>
#define ll long long
#define pll  pair<ll,ll>

using namespace std;

const ll inf=1e18;
const int N=500005;

ll a[N];

int main()
{

    ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

    ll i,j;

    ll n,k;cin>>n>>k;

    map<ll,ll> m;

    for(i=1;i<=n;i++)
    {
        ll x,y;cin>>x>>y;
        m[x]+=y;

    }

    ll tot=0;

    for(auto it:m)
    {
        tot+=it.second;
        if(tot>=k)
        {
            cout<<it.first<<endl;
            break;
        }
    }

    return 0;

}




