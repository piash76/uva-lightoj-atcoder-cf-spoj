
///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>

#define ll long long
#define pll  pair<ll,ll>

#define ff    first
#define ss    second

#define  mp  make_pair
#define  pb  push_back

#define cy  cout<<"Yes"<<endl
#define cn   cout<<"No"<<endl


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
   vector<string>s(4);
    for(int i=0;i<=3;i++) cin>>s[i];

    for(int i=0;i<=3;i++)
    {
        for(int j=0;j<=3;j++)
        {
            if(i!=j && s[i]==s[j])
            {
                cn;
                return 0;
            }
        }
    }

    cy;
    return 0;

}




