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
void print(node *head){
    node*temp=head;
    while(temp!='\0'){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    delete temp;
}
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
void print_particular(node *head, int i) {
    node *temp=head;
  int len=size(temp);
  if(i>len)
  {
    return;
  }
  int x=0;
  while(head!=NULL)
  {
    if(x==i)
    {
      cout<<head->data;

    }
    x++;
    head=head->next;
  }
}
node* delete_particular(node *head, int i) {
    node *temp=head;
  int len=size(temp);
  if(i>=len)
  {
    return head;
  }
  else if(i==0)
  {
    node *x=head;
    head=head->next;
    delete x;
    return head;
  }
  else {
   node *temp=head;
    int j=0;
    while(j<i-1&&temp!=NULL)
    {
      temp=temp->next;
      j++;
    }
    node *y=temp->next;

    temp->next=y->next;
    delete y;
    return head;
  }
}
node* insert_particular(node *head, int i, int data) {
  if(head==NULL)
  {
    return head;
  }

  if(i==0)
  {
    node *x=new node(data);
    x->next=head;
    head=x;
    return head;
  }
 node*p=insert_particular(head->next,i-1,data);
 head->next=p;
  return head;
}
-----------------------------------------------------------------------------------------------------------------------------------------
int main()
{
  cout<<"Enter data, last data should be -1"<<endl;
  node *head=take_input();
  cout<<"Output :"<<endl;
  print(head);
  cout<<endl;
  cout<<"Menu"<<endl;
  cout<<"1.Length Of LL"<<endl<<"2.Print ith node"<<endl<<"3.Delete ith node"<<endl<<"4.insert at ith position"<<endl<<"5.exit"<<endl;
  int choice;

    do
    {
        cout<<"Enter Choice:"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:  {
                cout<<"Length of LL is : "<<size(head)<<endl;

                break;
            }
            case 2:   {
                int i;
                cout<<"Enter the position to print"<<endl;
                cin>>i;
                print_particular(head,i);
                cout<<endl;
                break;
            }
            case 3:   {
                int i;
                cout<<"Enter the position to delete"<<endl;
                cin>>i;
                delete_particular(head,i);
                print(head);
                cout<<endl;
                break;
            }
            case 4:   {
                int i;
                cout<<"Enter the position to insert the new node"<<endl;
                cin>>i;
                cout<<"enter data"<<endl;
                int data;
                cin>>data;
                insert_particular(head,i,data);
                print(head);
                cout<<endl;
                break;
            }
     case 5:   {
                cout<<"Program Finished "<<endl;
                break;
            }
            default:   {
                cout<<"INVALID CHOICE"<<endl;
            }
        }
    }
    while(choice!=5);
    return 0;
}
-----------------------------------------------------------------------------------------------------------------------------------------

**Output Terminal**

Enter data, last data should be -1
2 4 6 8 10 5 6 -1
Output :
2 4 6 8 10 5 6
Menu
1.Length Of LL
2.Print ith node
3.Delete ith node
4.insert at ith position
5.exit
Enter Choice:
1
Length of LL is : 7
Enter Choice:
2
Enter the position to print
4
10
Enter Choice:
3
Enter the position to delete
2
2 4 8 10 5 6
Enter Choice:
4
Enter the position to insert the new node
2
enter data
3
2 4 3 8 10 5 6
Enter Choice:
5
Program Finished

Process returned 0 (0x0)   execution time : 40.587 s
Press any key to continue.
------------------------------------------------------------------------------------------------------------------------------------------
    
