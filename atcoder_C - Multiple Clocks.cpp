

#include<bits/stdc++.h>
#define ll long long
#define pll  pair<ll,ll>

using namespace std;

const ll inf=1e18;
const int N=105;

ll a[N];


ll lcm(ll x,ll y)
{
    return ((x)/(__gcd(x,y)))*y;  ///to eschew from overflow

}

int main()
{

    ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

    ll i,j;

    ll n;cin>>n;
    ll s=1;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
        s=lcm(a[i],s);
    }

    cout<<s<<endl;




    return 0;

}




