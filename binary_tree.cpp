#include<iostream>
#include<vector>
#include<queue>
using namespace std;
  
class Node {
    public:
    int val;
    Node*left;
    Node* right;
    Node(int val){
        this->val=val;
        left=right=NULL;
    }
};
static int idx=-1;
class Binary_tree{
    public:
    Node* binary_tree(vector<int> preorder){
        idx++;
        if (preorder[idx]==-1){return NULL;}
        Node* root= new Node(preorder[idx]);
        root->left=binary_tree(preorder);
        root->right=binary_tree(preorder);
        return root;
    }
// preorder traversal
    void preorder_traversal(Node* root){

        if (root == NULL ){
            // cout<<-1<<",";
            return ;}
        cout<<root->val<<",";
        preorder_traversal(root->left);
        preorder_traversal(root->right);


    }
//In Order traversal
    void InOrder(Node* root){
        if (root==NULL){
            // cout<<-1<<",";
             return;}
        InOrder(root->left);
        cout<<root->val<<",";
        InOrder(root->right);
    }
    //Post Order travesal
    void PostOrder(Node* root){
        if (root==NULL){
            // cout<<-1<<",";
        return;}
        PostOrder(root->left);
        PostOrder(root->right);
        cout<<root->val<<",";
    }
    //Level order traversal
    void LevelOrder(Node* root){
        queue<Node*> q;
        q.push(root);
        q.push(NULL);
        while (q.size()>0){
            Node* curr=q.front();
            q.pop();

            if (curr==NULL){
                if (!q.empty()){
                    cout<<"\n";
                    q.push(NULL);
                    continue;
                }
                else {
                    break;
                }
            }

            cout<<curr->val<<" ";

            if (curr->left!=NULL){
                q.push(curr->left);
            }
            if (curr->right!=NULL){
                q.push(curr->right);
                
            }

        }

    }
};


int main (){
vector<int> preorder{7,5,4,-1,-1,-1,3,-1,2,11,-1,-1,4,-1,-1};
Binary_tree obj;
Node* tree= obj.binary_tree(preorder);

obj.LevelOrder(tree);

return 0;
}