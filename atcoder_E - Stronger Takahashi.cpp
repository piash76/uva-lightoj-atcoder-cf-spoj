
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


const int N=505;
char mat[N][N];
ll dis[N][N];

ll X[4]={-1,0,1,0};
ll Y[4]={0,-1,0,1};

ll X1[25]={-2,-2,-2,-1,-1,-1,-1,-1,0,0,0,0,1,1,1,1,1,2,2,2};
ll Y1[25]={-1,0,1,-2,-1,0,1,2,-2,-1,1,2,-2,-1,0,1,2,-1,0,1};


int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    ll t,i,j;

    ll n,m;cin>>n>>m;

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>mat[i][j];
            dis[i][j]=inf;
        }
    }


    deque<pll> q;
    q.push_front({0,0});
    dis[0][0]=0;

    while(!q.empty())
    {
        ll ux=q.front().first;
        ll uy=q.front().second;
        q.pop_front();

      ///  cout<<"UX "<<ux<<" UY "<<uy<<endl;

        for(i=0;i<4;i++)
        {
            ll vx=X[i]+ux;
            ll vy=Y[i]+uy;

            if(vx>=0 and vx<n and vy>=0 and vy<m and mat[vx][vy]=='.' and dis[vx][vy]>dis[ux][uy]+0)
            {
                dis[vx][vy]=dis[ux][uy]+0;
                q.push_front({vx,vy});
            }
        }

        for(i=0;i<20;i++)
        {
            ll vx=X1[i]+ux;
            ll vy=Y1[i]+uy;

            if(vx>=0 and vx<n and vy>=0 and vy<m and dis[vx][vy]>dis[ux][uy]+1)
            {
                dis[vx][vy]=dis[ux][uy]+1;
                q.push_back({vx,vy});
            }

        }



    }

   /* for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++) cout<<dis[i][j]<<" ";

        cout<<endl;
    }*/



    cout<<dis[n-1][m-1]<<"\n";




    return 0;

}




