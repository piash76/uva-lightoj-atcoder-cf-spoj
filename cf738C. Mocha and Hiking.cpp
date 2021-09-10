
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
    cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        ll idx=n+1;
        for(i=1;i<=n;i++)
        {
            if(a[i]==1)
            {
                idx=i;
                break;
            }

        }

        if(idx==n+1)
        {
             for(i=1;i<=n;i++)
              {
                  cout<<i<<" ";
              }
              cout<<n+1<<" ";

        }
        else
        {

        for(i=1;i<=n;i++)
        {
            if(i==idx) cout<<n+1<<" ";
            cout<<i<<" ";
        }

        }

        cout<<endl;


    }

    return 0;

}




