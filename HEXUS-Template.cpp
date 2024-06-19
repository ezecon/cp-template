
///Md. Econozzaman Econ
///Department of CSE
///BAIUST


///-----------------Lib------------------------------------
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace std;
using namespace __gnu_pbds;

///-------------Define-----------------------------------------------
#define H3XU5 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define int long long int
#define pii pair<int, int>
#define pll pair<long long, long long>
#define MOD 1000000007
#define ff first
#define ss second
#define pb push_back
#define eb emplace_back
#define endl "\n"
#define PI acos(-1.0)
#define IN freopen("input.txt",'r',stdin)
#define cin1(x) cin >> x
#define cin2(x,y) cin >> x >> y
#define cin3(x, y, z) cin >> x >> y >> z
#define min3(a,b,c) min(a,min(b,c))
#define min4(a,b,c,d) min(d,min(a,min(b,c)))
#define max3(a,b,c) max(a,max(b,c))
#define max4(a,b,c,d) max(d,max(a,max(b,c)))
#define no cout << "NO" << endl ;
#define yes cout << "YES" << endl ;
#define Count(C, x) count(C.begin(), C.end(), x)

///----------------------------Read-Write-------------------------------------
#define READ freopen("input.txt","r",stdin)
#define WRITE freopen("output.txt","w",stdout)

///----------------------------loop------------------------------------------

#define fo(i,a,m) for(long long i = a ; i < m ; i++)
#define refor(i,a,m) for(long long i = a ; i > m ; i--)
#define foreq(i,a,m) for(long long i = a ; i <= m ; i++)
#define revforeq(i,a,m) for(long long i = a ; i >= m ; i--)

///----------------------------print--------------------------------------------
#define cout1(x) cout << x << endl
#define cout2(x,y) cout << x << " " << y << endl
#define cout3(x,y,z) cout << x << " " << y << " " << z << endl

///-----------------------array input & output function------------------------------------------------------
void arrayin(int a[],int len)
{
    for(int i=0; i<len; i++)
    {
        cin>>a[i];
    }
}

void arrayout(int a[],int len)
{
    for(int i=0; i<len; i++)
    {
        if(i==len-1) cout<<a[i]<<endl;
        else cout<<a[i]<<" ";
    }
}
///---------------------------------prime number-------------------------------------------------------------
void primenum(vector<bool> &prime)
{
    prime[0]=prime[1]=0;

    for(int i=2; i<=N/2 ; i++)
    {
        if(prime[i]==1) {
            for(int j=i+i; j<=N; j+=i) {
                prime[j]=0;
            }
        }
    }
}
///---------------------------------------factorial---------------------------------------------------
int factorial(int n)
{
    if(n==0)
    {
       return 1;
    }
    return n*factorial(n-1);
}
///-----------------------------------------distance between two point=------------------------------------------------

double distance(double a,double b,double x,double y)
{
    return sqrt((a-x)*(a-x)+(b-y)*(b-y));
}

///-----------------------------solve function(main code in it)---------------------------

void solve() {
int t;
cin>>t;
while(t--)
    {
        cout1("Hello World");
    }

}

///-------------------------------main function-------------------------
int32_t main()
{
    H3XU5;

    solve();
    return 0;
}
