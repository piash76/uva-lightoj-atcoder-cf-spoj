
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


ll n,k;
set< vector<string> > used;
vector<string> s;
ll ans;

ll dx[4]={1,0,-1,0};
ll dy[4]={0,1,0,-1};

void dfs(ll num)
{
    if(used.find(s)!=used.end())
    {
        return;  ///it has been calculated previously
    }
    used.insert(s);


    if(num==0)
    {
        ans++;
        return;
    }

    vector<pll> nxt;


    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            bool f=false;
            if(s[i][j]=='.')
            {
                ///checking adjacent if @ then it will be connected
                for(ll k=0;k<4;k++)
                {
                    ll ii=dx[k]+i;
                    ll jj=dy[k]+j;

                    if(ii>=0 and ii<n and jj>=0 and jj<n and s[ii][jj]=='@')
                    {
                        f=true;
                    }
                }
            }

            if(f)
            {
                nxt.push_back({i,j});
            }
        }
    }


    for(auto it:nxt)
    {
        ll ii=it.ff;
        ll jj=it.ss;

        s[ii][jj]='@';
        dfs(num-1);
        s[ii][jj]='.';
    }

    return;
}

int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    ll t,i,j;
    cin>>n;
    cin>>k;

    for(i=0;i<n;i++)
    {
        string st;cin>>st;
        s.push_back(st);
    }

   for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(s[i][j]=='.')
            {
                s[i][j]='@';
                dfs(k-1);
                s[i][j]='.';
            }
        }
    }



    cout<<ans<<"\n";






    return 0;

}




