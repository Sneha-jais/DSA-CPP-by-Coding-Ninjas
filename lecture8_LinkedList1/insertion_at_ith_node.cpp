
#include<bits/stdc++.h>
using namespace std;

class Node{
public:
int data;
Node *next;
Node(int data){
    this->data=data;
    this->next=NULL;

} 
};

Node* takeInput(){
    int data;
cin>>data;
Node *head=NULL;
Node *tail=NULL;
//-1 is terminating condition

while(data!=-1){
    Node *new_node=new Node(data);
    if(head==NULL){
head=new_node;
tail=new_node;
    }
    else{
        tail->next=new_node;
        tail=tail->next;
    }
    cin>>data;
   
}
return head;
}

void print(Node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;

}

Node* insertNode(Node *head,int i,int data){
Node *newNode=new Node(data);
int count=0;
Node *temp=head;

//For insertion at 0th index

if(i==0){
    newNode->next=head;
    head=newNode;
    return head;
}

while(temp!=NULL && count<i-1){
    temp=temp->next;
    count++;
}
if(temp!=NULL){
    newNode->next=temp->next;
    temp->next=newNode;
}
return head;

}

int main(){

Node *head=takeInput();

print(head);
int i,data;
cin>>i>>data;

head=insertNode(head,i,data);
print(head);


    return 0;
}
