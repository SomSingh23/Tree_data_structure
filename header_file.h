#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
using namespace std;
class node {
    public :
    int data ;
    node * left_child ;
    node * right_child ;
};
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
void post_order_tranversal(node *ptr){
    if(ptr){
        post_order_tranversal(ptr->left_child);
        post_order_tranversal(ptr->right_child);
        cout<<ptr->data<<" ";
    }
}
void level_order_transversal(node *ptr){
    queue<node *> queue;
    queue.push(ptr);
    while(!queue.empty()){
      ptr = queue.front();
      queue.pop();
      cout<<ptr->data<<" ";
      if(ptr->left_child!=nullptr)queue.push(ptr->left_child);
      if(ptr->right_child!=nullptr)queue.push(ptr->right_child);
    }
}
int count_number_of_nodes(node *ptr){
    int x , y ;if(ptr){
x = count_number_of_nodes(ptr->left_child);
y= count_number_of_nodes(ptr->right_child);
return x+y+1;
    }
    return 0 ;
}
void number_of_nodes_iterative_version(node *ptr){
    int ctr = 0;
    queue<node *> queue;
    queue.push(ptr);
    while(!queue.empty()){ctr++;
      ptr = queue.front();
      queue.pop();
    
      if(ptr->left_child!=nullptr)queue.push(ptr->left_child);
      if(ptr->right_child!=nullptr)queue.push(ptr->right_child);
    }
    cout<<"NO of nodes are "<<ctr<<endl;
}