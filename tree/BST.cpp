#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int val;
    Node*left;
    Node*right;
    Node(int val){
        this->val=val;
        this->right=NULL;
        this->left=NULL;
    }
};
class BST{
        public:

    Node* root;

    BST(){
        this->root=NULL;
    }  


    // void insert(int val,Node* &root){
    // if (root==NULL){
    //     Node* newnode=new Node(val);
    //     root=newnode;
    //     return ;   
    // }
    // else{
    //     if(root->val>val){
    //         insert(val,root->left);
    //         if (root->left==NULL){
    //             Node* newnode=new Node(val);    
    //             root->left=newnode;
    //         return ;}       
    //     }
    //     else{
    //         insert(val,root->right);
    //         if (root->right==NULL){
    //             Node* newnode=new Node(val);    
    //             root->right=newnode;
    //             return ;}}}}

Node* buildBst(vector<int> n){
    for (int val:n){
        root=insert(val,root);
    }
    return root;

}

Node* insert(int val,Node* root){

    if (root==NULL){return new Node(val);}

    if (val<root->val){
        root->left=insert(val,root->left);
    }
    else if (val > root->val){
        root->right=insert(val,root->right);
    }
return root;
}

void InOrder(Node* root){
    if (root==NULL){return ;}
    InOrder(root->left);
    cout<<root->val<<" ";
    InOrder(root->right);
}


bool search(Node* root,int tar){
    if (root==NULL){return 0;}
    if (root->val==tar){
        return 1;
    }
    if (tar<root->val){
        return search(root->left,tar);
    }
    else{
        return search(root->right,tar);
    }
}
Node* get_Inoder_successor(Node* root){
    while(root!=NULL && root->left!=NULL){/* well root is guaranteed not null in the 2-child case. 
         If get_Inorder_successor is reuse in a different will chash if root is NULL so we check root!=NULL in loop*/
        root=root->left;
    }
return root;
}


Node* delete_node(Node* root ,int tar){
    if(root==NULL){return NULL;}//no node case
    else if (root->val>tar){
        root->left=delete_node(root->left,tar);
    }
    else if (root->val<tar){
        root->right=delete_node(root->right,tar);
    }
    else{//if root->val == tar. 0,1 child case
        if (root->left==NULL){
            Node* temp=root->right;
            delete(root);
            return(temp);
        }
        else if(root->right==NULL){
            Node* temp=root->left;
            delete(root);
            return temp;
        }
        else{//2 child case 
            Node* IS =get_Inoder_successor(root->right);
            root->val=IS->val;
            root->right=delete_node(root->right,IS->val);
        }
    }
    return root;
}


};

int main (){
BST bst;
// b.root=b.insert(3,b.root);
// b.insert(2,b.root);
// b.insert(1,b.root);
// b.insert(4,b.root);
// b.insert(5,b.root);
// b.insert(7,b.root);
// b.insert(8,b.root);
// b.insert(9,b.root);
// b.insert(0,b.root);
// b.insert(10,b.root);

// if(b.root==NULL){
//     cout<<"root is null because not initilaize";
// }
vector<int> arr={3,2,1,6,5,4};
bst.root=bst.buildBst(arr);
// cout<<bst.search(bst.root,3);
bst.InOrder(bst.root);

bst.root=bst.delete_node(bst.root,6);
cout<<endl;
bst.InOrder(bst.root);


return 0;
}