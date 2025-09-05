#include <iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        next=NULL;
}};

class List{
Node* head;
Node* tail;
public:
List(){
    head=tail=NULL;
}

void push_front(int val){
Node* new_node=new Node(val);

if (head==NULL){
   head=tail=new_node;
}
else{
new_node->next=head;
head=new_node;
}
}

void show(){
   if (head!=NULL){
      Node* temp=head;
   while(temp!=NULL){
      cout<<temp->val<<" ";
      temp=temp->next;
   }
}}
void push_back(int val){

   Node* new_node=new Node(val);
   if(head==NULL){
      head= tail=new_node;
   }
   else{
      tail->next=new_node;
      tail=new_node;
   }
}

void pop_front(){
   Node* temp=head;
   head=head->next;
   temp->next=NULL;
   delete temp;
}

void pop_back(){
   if (head==NULL){
      return;
   }
   if (head->next==NULL)
   {
     delete head;
     head=tail=NULL;
     return;
   }

   Node* temp=head;

   while(temp->next!=tail){
      temp=temp->next;}
      delete tail;
      temp->next=NULL;
      
      tail=temp;
}

void insert(int pos,int val){
   if(pos<0){
      cout<< "invalid";
      return;
   }
   if(head==NULL){
      cout<<"Size is 0 of ll";
      return;
   }
   if(pos==0){
      push_front(val);
   }
Node* temp=head;

for(int i=0;i<=pos-1;i++){
   if(temp==NULL){
      cout<<"invalid pos";
      return;
   }
   temp=temp->next;
}
Node* new_node=new Node(val);
new_node->next=temp->next;
temp->next=new_node;
}

int search(int val){
   Node*temp=head;
   int i=0;
   while(temp!=NULL){
      if (val==temp->val){
         return i;
      }
      temp=temp->next;
      i++;
   }
   return -1;

}
};
int main (){
List obj;
 
obj.push_back(4);
obj.push_back(3);
obj.push_back(2);
obj.push_back(1);
obj.pop_back();
obj.show();
    return 0;
}