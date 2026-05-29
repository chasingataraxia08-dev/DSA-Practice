#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node(int val){//In c++ any custom data type can have a constructor,it's not only for classes
        data=val;
        next=nullptr;
    }
};
  void insertTheHead(Node* &head,int data){
        if(head==nullptr){
         Node*n2=new Node(data);
          head=n2;
        }
        else{
            cout<<"Not null so we'll add at the start"<<endl;
            Node*temp2=head;
            Node*headn=new Node(data);
            headn->next=temp2;
            head=headn;
            }
        }
    void insertAtk(Node* &head,int data,int k){
       if(head==nullptr && k==1){//if list is empty only insertion at first position is possible else error
        Node*n3=new Node(data);
        head=n3;
        }
        else if(head==nullptr){
           cout<<"ERROR!, List is empty can't insert"<<endl;
        }
       else if(head!=nullptr && k==1){
            cout<<"Not null so we'll add at the start"<<endl;
            Node*temp3=head;
            Node*headnn=new Node(data);
            headnn->next=temp3;
            head=headnn;
        }
        else{
            cout<<"Not null so we'll add at position:  "<<k<<endl;
            Node*temp4=head;
            int count=1;//can't compare pointer to integer so comapre int to int
            while(count!=k-1){//it is handling the case in which k can be next node
                if(temp4==nullptr){//another case what if even k-1 is also not present the next of k-1 will crash the program so first check prev
                    cout<<"Position out of range"<<endl;
                    return;
                }
                temp4=temp4->next;
                count++;
            }
            Node*lastnn=new Node(data);
           Node*storednext=temp4->next;//the next of new node will be same as next of previous node before adding one so store it first then change it to new node
            temp4->next=lastnn;//currently temp is one before k node so next is new node
            lastnn->next=storednext;
        }
    }

  void insertTheTail(Node* &head,int data){
        if(head==nullptr){
            Node*n1=new Node(data);
            head=n1;
        }

        else{
            cout<<"Not null so we'll add at the end"<<endl;
            Node*temp=head;
            while(temp->next!=nullptr){
                temp=temp->next;
            }
            Node*lastn=new Node(data);
            temp->next=lastn;
            lastn->next=nullptr;
        }
    }
    int main(){
        Node*head=nullptr;
        insertAtk(head,5,1);//position 1 ,empty list
        insertAtk(head,9,2);//position 3 ,empty list
        //Building list
        insertTheTail(head,1);//passing pointer by refrence
        insertTheTail(head,2);
        insertTheTail(head,3);
        //non empty list,head insertion
        insertAtk(head,99,1);
        insertAtk(head,77,2);
        //beyond limit
        insertAtk(head,55,100);
        Node*temp1=head;
       while(temp1!=nullptr){
        cout<<temp1->data<<endl;
        temp1=temp1->next;
    }
    return 0;
}