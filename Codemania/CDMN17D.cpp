#include <bits/stdc++.h>
using namespace std;


#define forall(i,a,b)                for(int i=a;i<b;i++)
#define forallr(i,a,b)                for(int i=a-1;i>=b;i--)
#define miN(a,b)                     ( (a) < (b) ? (a) : (b))
#define maX(a,b)                     ( (a) > (b) ? (a) : (b))
#define ll long long int
#define llu long long unsigned
#define mod 1000000007


struct frele
{
ll l;
ll r;
ll ele;
};

int main()
{

#ifndef ONLINE_JUDGE
	freopen("CDMN17D_in.txt","r",stdin);
#endif

//        ll t;
//        cin>>t;
////        n=pow(2,50)-1;
//        while(t--)
//        {
            ll n,k;
            cin>>n>>k;
            ll total=0;
            ll a[n];
            forall(i,0,n)
            {
            cin >>a[i];
            total+=a[i];
            }
            forall(i,0,k)
            {
                int t;
            cin >> t;
            if(t==1){ll x,y;
            cin>>x>>y;
            total=total-a[x-1]-a[y-1]+maX(a[x-1],a[y-1]);
            }
            else
                cout<<total<<endl;

            }
        return 0;
}
