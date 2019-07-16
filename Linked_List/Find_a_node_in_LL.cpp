//Given a linked list and an integer n you need to find and return index where n is present in the LL. Do this iteratively.
//Return -1 if n is not present in the LL.
//Indexing of nodes starts from 0.
----------------------------------------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;

    node (int data){
    this->data=data;
    next='\0';
    }

};
----------------------------------------------------------------------------------------------------------------------------------------
node * take_input(){
     int data;
     cin>>data;
     node*head='\0';
     node*tail='\0';
     while(data!=-1){
        node *newnode=new node(data);
        if(head=='\0'){
            head=newnode;
            tail=newnode;
        }else{
            tail->next=newnode;
            tail=tail->next;
        }
        cin>>data;
     }
     return head;
}
int size(node *head) {
    int count=0;
  while(head!=NULL){
    head=head->next;
    count++;
  }
  return count;
}
----------------------------------------------------------------------------------------------------------------------------------------
int indexOfNIter(node *head, int n) {
    int count=0;
  while(head!=	NULL)
  {
    if(head->data==n)
    {
      return count;
    }
    head=head->next;
    count++;
  }
  return -1;
}
----------------------------------------------------------------------------------------------------------------------------------------
int main()
{
  cout<<"Enter data, last data should be -1"<<endl;
  node *head=take_input();
  cout<<"Enter the integer you need to find"<<endl;
  int data;
  cin>>data;
  cout<<indexOfNIter(head,data)<<endl;
}
----------------------------------------------------------------------------------------------------------------------------------------
**Output Terminal**

----------------------------------------------------------------------------------------------------------------------------------------

