#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    Node(int value)
    {
        data=value;
        next=NULL;
    }
};

int main(){
    
      Node *head, *tail;
    head=tail=NULL;

    int arr[5]= {2, 4,  6, 8,10};

    //insert the value at end

    for(int i=0; i<5; i++)
    {
    //Linked list is empty
    if(head==NULL){
        head = new Node(arr[i]);
        tail=head;
    }

    //Linked list is exist
    else{
        tail->next = new Node(arr[i]);
        tail = tail->next;
    }
}

    Node *temp;
    temp = head;

    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

}