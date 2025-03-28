#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define mod 1000000007
#define modd 998244353
#define pb push_back
#define Yes cout<<"YES\n"
#define No cout<<"NO\n"
#define ff first
#define ss second
#define vi vector<int>
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define vvi vector<vector<int>>
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
const int inf = 2e18;
vector<pii> directions{ {0,1}, {1,0}, {0,-1}, {-1,0}, {1,1}, {1,-1}, {-1,1}, {-1,-1} };
void print(int arr[],int n,string label="") {cout<<label;for(int i=0;i<n;i++) cout<<arr[i]<<" ";cout<<"\n";}
void print(vector<int> v,string label="") {cout<<label;for(int i=0;i<v.size();i++) cout<<v[i]<<" ";cout<<"\n";}
int modPow(int a,int b,int p) {int ans=1;while(b>0){if((b&1)==1)ans=ans*a%p;a=a*a%p;b>>=1;}return ans;}
int modDiv(int a,int b,int p) {return a * modPow(b,p-2,p) % p;}
int modAdd(int a,int b,int p) {return ((a%p)+(b%p))%p;}
int modMul(int a,int b,int p) {return ((a%p)*(b%p))%p;}
int modSub(int a,int b,int p) {return ((a-b)%p+p)%p;}
bool isPow2(int n) {return (n>0 && (n&(n-1)) == 0);}
int power(int a,int b) {int ans=1;while(b>0){if((b&1)==1)ans=ans*a;a=a*a;b>>=1;}return ans;}
int squareroot(int n) {if(n<=0)return 0;int s=1,e=n;int ans;while(s<=e){int m=(s + e)/2;if(m<=LLONG_MAX/m && m*m<=n){s=m+1;ans=m;}else{e=m-1;}}return ans;}

void solve(int testcase)
{
    #define TESTCASES
    
}
signed main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int t=1;
    #ifdef TESTCASES
    cin>>t;
    #endif
    for(int i=1;i<=t;i++)
    {
        solve(i);
    }
    return 0;
}
