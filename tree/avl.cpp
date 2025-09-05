#include<iostream>
using namespace std;

class Node{
    int val;
    Node*right;
    Node* left;
    public:
    Node(int v){
        val=v;
        right=left=NULL;
    }
    friend class avl;
};

class avl{
    public:

        Node* root;
        avl(){
        root=NULL;
    }  



    Node* insert(int val,Node* root){
        
        if (root==NULL){return new Node(val);}
        else if (val<root->val){
        root->left=insert(val,root->left);}
        else if (val>root->val){
        root->right=insert(val,root->right);}
        
        return root;
    }
    void InOrder(Node* root){
        if (root==NULL){return ;}
        InOrder(root->left);
        cout<<root->val<<'\n';
        InOrder(root->right);
    }
    Node* getInOrderSuccessor(Node* root){
        while (root!=NULL && root->left!=NULL)
        {
            root=root->left;
        }
        return root;
    }

    Node* deleteNode(int val,Node* root){
        if (root==NULL){return root;}

        else if (val<root->val){
            root->left=deleteNode(val,root->left);}
        else if (val>root->val){
            root->right=deleteNode(val,root->right);}
        else{
            if (root->left==NULL){
                Node* temp=root->right;
                delete root;
                return temp;
            }
            else if (root->right==NULL){
                Node* temp=root->left;
                delete root;
                return temp;
            }
            else{
                Node* IS=getInOrderSuccessor(root->right);
                root->val=IS->val;
                root->right=deleteNode(IS->val,IS);}}
        return root;}
    int height(Node* root){
        if (root==NULL){return 0;}
        int left ,right;
        left=height(root->left);
        right=height(root->right);
        return max(left,right)+1;
    }
    int count(Node* root){
        if (root==NULL){return 0;}
        int left,right;
        left=count(root->left);
        right=count(root->right);
        return left+right+1;
    }

    int sumOfNode(Node* root){
        if (root==NULL){return 0;}
        int left,right;
        left=sumOfNode(root->left);
        right=sumOfNode(root->right);
        return root->val+left+right;
    }
};

int main(){
avl a1;
a1.root=a1.insert(4,a1.root);
a1.root=a1.insert(1,a1.root);
a1.root=a1.insert(3,a1.root);
a1.root=a1.insert(2,a1.root);
a1.root=a1.insert(5,a1.root);
a1.root=a1.insert(6,a1.root);
a1.InOrder(a1.root);
cout<<a1.sumOfNode(a1.root);
    return 0;
}