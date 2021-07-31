

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
ll a[N];


int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    ll t,i,j;

    ll n,k,x;cin>>n>>k>>x;

    for(i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);

    vector<ll> v;


    for(i=1;i<n;i++)
    {
        if(a[i]-a[i-1]>x)
        {
            v.push_back(a[i]-a[i-1]);
        }
    }
    sort(v.begin(),v.end());

    ll s=0;

    ///cout<<"ANS "<<ans<<endl;

    for(auto it:v)
    {
        ///cout<<"IT "<<it<<endl;

        ll dif=it;

        ll no=((dif+x-1)/x ) +1;
        ll req=no-2;

        ///cout<<"REq "<<req<<endl;
        ///cout<<"K "<<k<<endl;

        if(req<=k)
        {
            k-=req;
            s++;
        }

    }

    cout<<(v.size()-s)+1<<endl;



    return 0;

}



