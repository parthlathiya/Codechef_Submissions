#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b)                for(ll i=a;i<b;i++)
#define repr(i,n)                for(ll i=n-1;i>=0;i--)
#define ll long long int
#define ld long double
#define llu long long unsigned
#define pb push_back
#define mod 1e9+7

/*
                    ** author **
                ** Parth Lathiya **
    ** https://www.cse.iitb.ac.in/~parthiitb/ **
*/

int main()
{

ios::sync_with_stdio(false);

#ifndef ONLINE_JUDGE
	freopen("DISHLIFE_in.txt","r",stdin);
#endif

//  --------------------------------------------------------------------------------------

    ll T;
    cin>>T;
    while(T--)
    {

        ll n,k;
        cin>>n>>k;
        int ans=-1;
        std::vector<int> tt[n];
        int h[k]={0};
        int p[n];
        rep(i,0,n)
        {
            cin>>p[i];
            rep(j,0,p[i])
            {
                ll t;
                cin >> t;
                tt[i].pb(t);
                h[t-1]++;
            }
        }

        int f=0;
        rep(i,0,k)
        {
            if(h[i]==0){ans=0;f=1;break;}
        }
        if(f)
            {cout<<"sad"<<endl;continue;}
        int req=0;
        rep(i,0,n)
        {
            rep(j,0,p[i])
            {
                if(h[tt[i][j]-1]==1){req++;break;}
            }
        }
            if(req==n)
                cout<<"all"<<endl;
            else
                cout<<"some"<<endl;
    }

//  --------------------------------------------------------------------------------------

return 0;
}
