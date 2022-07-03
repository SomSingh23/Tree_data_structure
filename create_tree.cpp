#include <bits/stdc++.h>
#include "header_file.h"
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#define Mod 10000000007
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;

#define f(i,e) for(ll i = 0; i < e; i++)
#define fs(i,s,e) for(ll i = s; i < e; i++)
#define fr(i,s) for(ll i = s; i >= 0; i--)
#define frs(i,s,e) for(ll i = s; i >= e; i--)
#define nl "\n"
#define Y cout<<"YES"<<nl
#define N cout<<"NO"<<nl
#define dbg(x) cout<<#x<<" = "<<x<<nl
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())


int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
 create_tree();
pre_order_transversal(root);
cout<<endl;
iterative_preorder_transversal(root);
cout<<nl;
inorder_transversal(root); cout<<nl;
iterative_inorder_transversal(root);
cout<<nl;
post_order_tranversal(root);
cout<<nl;
level_order_transversal(root);
cout<<nl;
cout<<"Number of node are "<<count_number_of_nodes(root);
cout<<nl;
number_of_nodes_iterative_version(root);

  return 0;}

