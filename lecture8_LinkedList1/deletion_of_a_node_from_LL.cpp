/* :)
You have been given a linked list of integers. Your task is to write a function that deletes a node from a given position, 'pos'.
Note :
Assume that the Indexing for the linked list always starts from 0.

If the position is greater than or equal to the length of the linked list, you should return the same linked list without any change.
Sample Input 1 :
1 
3 4 5 2 6 1 9 -1
3


Sample Input 2 :
2
3 4 5 2 6 1 9 -1
0
10 20 30 40 50 60 -1
7

Sample Output 2 :
4 5 2 6 1 9
10 20 30 40 50 60

*/


#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node *takeInput()
{

    int data;
    cin >> data;

    Node *head = NULL;
    Node *tail = NULL;

    while (data != -1)
    {

        Node *newNode = new Node(data);

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = tail->next;
        }
        cin >> data;
    }
    return head;
}

Node *deletNode(Node *head, int pos)
{
    Node *temp = head;
    Node *prev = NULL;

    // if u want to delet a head node
    if (pos == 0)
    {

        head = head->next;
        return head;
    }

    else
    {
        for (int i = 0; i < pos; i++)
        {
            prev = temp;
            temp = temp->next;
            // if the index is greater than the length of linkedList
            if (temp == NULL)
            {
                return head;
            }
        }

        prev->next = temp->next;

        free(temp);
    }

    return head;
}
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    int t;
    cin>>t;

while(t--){
    Node *head = takeInput();

    int i;
    cin >> i;

    head = deletNode(head, i);
    print(head);
}
    return 0;
}