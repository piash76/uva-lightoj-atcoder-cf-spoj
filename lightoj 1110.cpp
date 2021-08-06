

#include<bits/stdc++.h>
#define ll long long
#define pll  pair<ll,ll>

using namespace std;

const ll inf=1e18;
const int N=500005;

string a,b;
string lcs[105][105]; ///for saving lcs if a is of length i abd b is of length j
ll dp[105][105];
ll n,m;



int main()
{


    ll i,j,cas=0;

    ll t;scanf("%lld",&t);
    while(t--)
    {

        ///getchar();

      /// scanf("%s",a);
       /// scanf("%s",b);
       cin>>a;
       cin>>b;

       /// cout<<"A "<<a<<" B "<<b<<endl;

        n=a.size();
        m=b.size();

        for(i=0;i<=m;i++)
        {
            dp[0][i]=0;
            lcs[0][i]="";
        }

        for(i=0;i<=n;i++)
        {
            dp[i][0]=0;
            lcs[i][0]="";
        }


        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                if(a[i-1]==b[j-1])
                {
                    dp[i][j]=dp[i-1][j-1]+1;
                    lcs[i][j]=lcs[i-1][j-1]+a[i-1];

                }
                else
                {
                    if(dp[i-1][j]>dp[i][j-1])
                    {
                        dp[i][j]=dp[i-1][j];
                        lcs[i][j]=lcs[i-1][j];
                    }
                    else if(dp[i][j-1]>dp[i-1][j])
                    {
                        dp[i][j]=dp[i][j-1];
                        lcs[i][j]=lcs[i][j-1];
                    }
                    else
                    {
                        ///getting the same ammount of lcs length but take the min string

                        dp[i][j]=dp[i-1][j];
                        lcs[i][j]=min(lcs[i-1][j],lcs[i][j-1]);
                    }

                }

            }
        }

       /* for(i=0;i<=n;i++)
        {
            for(j=0;j<=m;j++)
            {
                cout<<"LCS "<<lcs[i][j]<<" ";
            }
            cout<<endl;
        }
        */




       /// cout<<"LCS "<<lcs[n][m]<<endl;

        string ans=lcs[n][m];

        printf("Case %lld: ",++cas);

        if(dp[n][m]!=0) cout<<ans<<"\n";
        else printf(":(\n");





    }

    return 0;

}

/*

1

zazbc
zabczc

*/

