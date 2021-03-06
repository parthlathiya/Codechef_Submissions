#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b)                for(ll i=a;i<b;i++)
#define re(i,b)                for(ll i=0;i<b;i++)
#define repr(i,n)                for(ll i=n-1;i>=0;i--)
#define ll long long
#define ld long double
#define pll std::pair<ll, ll> 
#define ppll std::pair<ll, pll>
#define vll std::vector<ll> 
#define vpll std::vector<pll> 
#define vppll std::vector<ppll> 
#define mll std::unordered_map<ll, ll> 
#define mpll std::unordered_map<pll, ll>
#define mppll std::unordered_map<ppll, ll>
#define sll std::set<ll>
#define ff first
#define ss second
#define msll std::multiset<ll>
#define all(c) c.begin(), c.end()
#define allr(c) c.rbegin(), c.rend()
#define srt(x) sort(all(x))
#define rsrt(x) sort(allr(x))
#define eb emplace_back
#define pb push_back
#define s(yy) ll yy;cin>>yy
#define len length()
#define sz size()
const ll mod = 1e9 + 7;
const ll INF = 0x7FFFFFFFFFFFFFFF>>1;

/*#################################################### 
#                                                    #
#                     @author                        #
#                  Parth Lathiya                     #
#      https://www.cse.iitb.ac.in/~parthiitb/        #
#                                                    #
####################################################*/


int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifdef PARTH_LATHIYA_HOME

        freopen("CHEFHPAL_in.txt","r",stdin);
    
        ll ttt,bkkk;
        cin>>ttt;
        bkkk=ttt;
        while(ttt--) {
            cout<<"Testcase - "<<bkkk-ttt<<"\n";
    #endif

//--------------------------------------------------------------------------------------

    s(t);
    while(t--)
    {
        ll n,a;
        cin>>n>>a;
        if(a==1){
            cout<<n<<" ";
            re(i,n)
                cout<<'a';
            cout<<endl;
        }
        else if(a==2)
        { 
            if(n==1)
                cout<<"1 a\n";
            else if(n==2)
                cout<<"1 ab\n";
            else if(n==3)
                cout<<"2 aab\n";
            else if(n==4)
                cout<<"2 aabb\n";
            else if(n<=8){
                cout<<"3 ";
                string aa="aaababbb";
                re(i,n)
                    cout<<aa[i];
                    cout<<endl;
            }
            else
            {
                cout<<"4 ";
                re(i,n/6){
                    cout<<"aababb";
                }
                n%=6;
                string aa="aababb";
                re(i,n)
                    cout<<aa[i];
                cout<<endl;
            }
        }
        else{
            cout<<"1 ";
            re(i,n)
                cout<<(char)('a'+(i%a));
            cout<<endl;    
        }
    }

//--------------------------------------------------------------------------------------
    
    #ifdef PARTH_LATHIYA_HOME
        cout<<"\n"; }
    #endif

    return 0;
}