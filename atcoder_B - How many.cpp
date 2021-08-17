
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


    ll t,i,j,k;

    ll x,y; cin>>x>>y;

    ll s = 0;

    for(i=0;i<=x;i++)
    {
        for(j=0;i+j<=x;j++)
        {
            for(k=0;i+j+k<=x;k++)
            {
                if(i*j*k<=y) s++;
            }
        }
    }

    cout<<s<<endl;
    return 0;

}




