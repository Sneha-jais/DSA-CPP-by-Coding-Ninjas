/* :)
For a given singly linked list of integers, find and return its length. Do it using an iterative method.
Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

First and the only line of each test case or query contains elements of the singly linked list separated by a single space.

Remember/Consider :
While specifying the list elements for input, -1 indicates the end of the singly linked list and hence, would never be a list element.

Output format :
For each test case, print the length of the linked list.

Output for every test case will be printed in a seperate line.

Constraints :
1 <= t <= 10^2
0 <= N <= 10^5
Time Limit: 1sec

Sample Input 1 :
1
3 4 5 2 6 1 9 -1

Sample Output 1 :
7


*/

#include <bits/stdc++.h>
using namespace std;

class Node{
public:
Node *next;
int data;
    Node(int data){
   
    this-> data =data;
    this-> next=NULL;
    }
};

int main()
{
int t;
cin>>t;
int data;
//t is test cases
while(t--){
 //first creating the singly linkedList or taking inputs
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

int count=0;
    Node *temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
   cout<<count<<endl;

   }
      return 0;
}

