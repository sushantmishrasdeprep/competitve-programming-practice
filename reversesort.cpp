// AUTHOR: SUSHANT MISHRA
// CODEFORCES IDE: smsdeprep
#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
#define FOREACH(i, c) for(__typeof((c).begin()) i = (c).begin(); i != (c).end(); ++i)
#define FOR(i, a, n) for (register int i = (a); i < (int)(n); ++i)
#define FORE(i, a, n) for (i = (a); i < (int)(n); ++i)
#define Size(n) ((int)(n).size())
#define all(n) (n).begin(), (n).end()
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
ll gcd(ll x, ll y){ return y ? gcd(y, x % y) : x;}
ll lcm(ll x, ll y){ return x / gcd(x, y) * y;}
bool isprime(int n){for(int i=2;i*i<=n;i++){if(n%i==0){return false;}}return true;}
#define mod 1000000007
ll power(ll a, ll b){ if (b == 0) return 1; ll res = power(a, b / 2); if (b % 2) return res * res * a; else return res * res;}
vector<ll> sieve(int n) {int* arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++) if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i) arr[j] = 1;} return vect;}
#define pb push_back
void kaam_shuru_karo() {
    int n;
    cin>>n;
    string s,s1;
    cin>>s;
    s1=s;
    sort(all(s1));
    vector<int>ans;
    FOR(i,0,n){
        if(s[i]!=s1[i]){
            ans.pb(i+1);
        }
    }
    if(ans.size()==0){
        cout<<"0\n";
    }else{
        cout<<"1\n";
        cout<<ans.size()<<" ";
        FOR(i,0,ans.size()){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   ll t=1;
   cin>>t;
   while (t--) {
       kaam_shuru_karo();
   }
   return 0;
}