

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

    ll a,b,c,d;cin>>a>>b>>c>>d;

    ll x=min(b,d);
    ll y=max(a,c);

    cout<<max(0ll,x-y)<<endl;

    return 0;

}




