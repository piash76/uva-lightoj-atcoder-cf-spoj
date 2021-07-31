

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

const int N=100005;
ll dp[10][N];


int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    ll t,i,j;


    string s;cin>>s;

    string s2="chokudai";

    ll n=s2.size();

    ll m=s.size();

    for(i=0;i<=m;i++) dp[0][i]=1;

    for(i=1;i<=n;i++) dp[i][0]=0;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(s2[i-1]!=s[j-1])
            {
                dp[i][j]=dp[i][j-1];
            }
            else
            {
                dp[i][j]=(dp[i][j-1]+dp[i-1][j-1])%mod;
            }
        }

    }

    cout<<dp[n][m]%mod<<endl;

    return 0;

}



