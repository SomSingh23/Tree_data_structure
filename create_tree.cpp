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
node *root = new node ; // global variable
void create_tree(){
cout<<"Enter root value"<<endl;
int x;cin>>x;
queue<node*> queue;
node *ptr = root;
ptr->data = x;
ptr->left_child=nullptr ;
ptr->right_child=nullptr;
queue.push(ptr);
while (!queue.empty())
{
ptr = queue.front();
queue.pop();
cout<<"Enter value of left child for node "<<ptr->data<<endl;
int k  ; cin>>k;
if(k!=-1){
    node *p = new node ;
    p->data = k;
    p->left_child = nullptr ;
    p->right_child=nullptr;
    ptr->left_child = p ;
    queue.push(p);

}
cout<<"Enter value of right child for node "<<ptr->data<<endl;
 cin>>k;
if(k!=-1){
    node *p = new node ;
    p->data = k;
    p->left_child = nullptr ;
    p->right_child=nullptr;
    ptr->right_child = p ;
    queue.push(p);
   
}
}

}
void inorder_transversal(node *ptr){
    if(ptr){
        inorder_transversal(ptr->left_child);
        cout<<ptr->data<<" ";
        inorder_transversal(ptr->right_child);
    }

}
void pre_order_transversal(node *ptr){
    
    if(ptr){
        cout<<ptr->data<<" ";
        pre_order_transversal(ptr->left_child);
        pre_order_transversal(ptr->right_child);
    }
 
}
void iterative_preorder_transversal(node *ptr){
    stack<node *> stack;
 
      while(!stack.empty() or ptr != nullptr) {

       if(ptr!=nullptr){
            cout<<ptr->data<<" "; stack.push(ptr);
            ptr=ptr->left_child;
           
        }
        else {
            ptr = stack.top();
            stack.pop();
            ptr=ptr->right_child;
    
        } 
      } 
    cout<<endl;
}
void iterative_inorder_transversal(node *ptr){
    stack<node *> stack;
 
      while(!stack.empty() or ptr != nullptr) {

       if(ptr!=nullptr){
          stack.push(ptr);
            ptr=ptr->left_child;
           
        }
        else {
            ptr = stack.top();
            stack.pop();
              cout<<ptr->data<<" "; 
            ptr=ptr->right_child;
    
        } 
      } 
    cout<<endl;
}
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

  return 0;}

