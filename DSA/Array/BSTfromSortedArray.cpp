// Given an integer array nums where the elements are sorted in ascending order, convert it to a height-balanced binary search tree.


// ------------------not solved-------------------

#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class node{
      public:
      int data;
      node* left;
      node* right;
      node(int val){
            this->data=val;
            this->left=nullptr;
            this->right=nullptr;
      }
};

class BST
{
      private:
      node* root=nullptr;
      vector<int> ans;
       
      void insertInAns(){
            node* temp=root;
            node* prev=nullptr;
            while(temp){
                  if(prev){
                    temp=prev;
                    prev=temp->left;
                    temp=temp->right;
                  }
                  if(temp->data){
                        ans.push_back(temp->data);
                  }
                  prev=temp;
                  temp=temp->left;
                  ans.push_back(temp->data);
            }
      }
       void InsertInBst(int data,node*& root){
       if(root==nullptr)
       {
        node* temp=new node(data);
        root=temp;

        return ;
       }

     if(data<root->data)
     {
        InsertInBst(data,root->left);
        
     }
     else{
        InsertInBst(data,root->right);
        
     }
   }
    public:
      vector<int> print(){
            insertInAns();
            return ans;
      }
      void input(int data){
            InsertInBst(data,root);
      }
};

int main(){
      int arr[5]={-10,-3,0,5,9};
      int mid=(0+4)/2;
      BST b;
      b.input(arr[mid]);

      for(int i=0;i<5;i++)
      {
            if(i!=mid){
                  b.input(arr[i]);
            }
      }

      vector<int> ans=b.print();
      for (int i = 0; i < ans.size(); i++)
      {
            cout<<ans[i]<<",";
      }
      
}


