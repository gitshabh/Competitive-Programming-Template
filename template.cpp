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
#define vi vector<long long>
#define pii pair<long long, long long>
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
const int inf = 2e18;
vector<pii> directions{ {0,1}, {1,0}, {0,-1}, {-1,0}, {1,1}, {1,-1}, {-1,1}, {-1,-1} };
void print(int arr[],int n,string label="") {cout<<label;for(int i=0;i<n;i++) cout<<arr[i]<<" ";cout<<"\n";}
void print(vector<int> v,string label="") {cout<<label;for(int i=0;i<v.size();i++) cout<<v[i]<<" ";cout<<"\n";}
int modPow(int a,int b,int p) {int ans=1;while(b>0){if((b&1)==1)ans=ans*a%p;a=a*a%p;b>>=1;}return ans;}
int modDiv(int a,int b,int p) {return a * modPow(b,p-2,p) % p;}
bool isPow2(int n) {return (n>0 && (n&(n-1)) == 0);}

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
