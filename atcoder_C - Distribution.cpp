
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


int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    ll t,i,j;

    ll n;cin>>n;

    vector<ll> a(n),b(n);

    for(i=0;i<n;i++) cin>>a[i];
    for(i=0;i<n;i++) cin>>b[i];

    vector<ll> c = b;

    for(i=0;i<2*n;i++)  c[(i+1)%n]=min(c[(i+1)%n],c[i%n]+a[i%n]);

    for(auto it: c) cout <<it<< endl;

    return 0;

}




