
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

        string s;cin>>s;

        string temp1=s,ans,temp2=s;

        for(i=0;i<n;i++)
        {
            if(s[i]=='?')
            {
                ///cout<<"I "<<i<<endl;

                ///brbrbr

                ll par=0,idx=i;
                while(temp1[idx]=='?')
                {
                    if(par%2==0) temp1[idx]='B';
                    else temp1[idx]='R';
                    par++;
                    idx++;

                }

                cout<<"TEMP1 "<<temp1<<endl;

                ll cnt_b=0;
                for(j=1;j<n;j++)
                {
                   if(temp1[j]==temp1[j-1] and temp1[j]!='?') cnt_b++;
                }

                cout<<"CNTB "<<cnt_b<<endl;


                ///rbrbr

                ll par2=0,idx2=i;

                while(temp2[idx2]=='?')
                {

                    if(par2%2==0) temp2[idx2]='R';
                    else temp2[idx2]='B';
                    par2++;
                    idx2++;

                }

                cout<<"TEMP 2 "<<temp2<<endl;

                ll cnt_r=0;
                for(j=1;j<n;j++)
                {
                   if(temp2[j]==temp2[j-1] and temp2[j]!='?') cnt_r++;
                }

                cout<<"CNTR "<<cnt_r<<endl;


                if(cnt_b<=cnt_r)
                {
                    temp2=temp1;

                }
                else
                {
                    temp1=temp2;
                }


                i=idx;



            }

        }


        ///cout<<temp1<<endl<<temp2<<endl;

        cout<<temp1<<endl;






    }

    return 0;

}




