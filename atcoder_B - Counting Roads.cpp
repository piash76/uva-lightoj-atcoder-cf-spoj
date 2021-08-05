

#include<bits/stdc++.h>
#define ll long long
#define pll  pair<ll,ll>

using namespace std;
const int N=500005;

ll a[N];

int main()
{

    ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

    ll i,j;
    ll n,m;cin>>n>>m;

    for(i=1;i<=m;i++)
    {
        ll x,y;cin>>x>>y;

        a[x]++;a[y]++;
    }

    for(i=1;i<=n;i++) cout<<a[i]<<endl;

    return 0;

}




