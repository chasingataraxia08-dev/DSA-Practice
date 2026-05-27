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
        insertTheHead(head,0);
        insertTheTail(head,1);//passing pointer by refrence
        insertTheTail(head,2);
        insertTheTail(head,3);
        insertTheHead(head,4);
        Node*temp1=head;
       while(temp1!=nullptr){
        cout<<temp1->data<<endl;
        temp1=temp1->next;
    }
    return 0;
}