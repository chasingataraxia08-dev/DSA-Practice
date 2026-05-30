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
//By position k
void deletebyposition(Node* &head,int k){
        if(head==nullptr || k<1){
            cout<<"Error!"<<endl;
            return;
        }
        else if(k==1){
            cout<<"Not null so we can delete head"<<endl;
            Node*todelete2=head;
            Node*newhead=head->next;
            head=newhead;
            delete todelete2;
            todelete2=nullptr;
            }
            else{
                cout<<"Not null so we can delete"<<endl;
                Node*temp2=head;//we need head to access that position node to delete
                int count=1;
                while(count!=k-1){
                     if(temp2==nullptr){
                        cout<<"Node out of range"<<endl;
                        return;
                     }
                    temp2=temp2->next;
                    count++;
                }
                if(temp2->next==nullptr){
                    cout<<"Error"<<endl;//what if the one you gonna connect to is nullptr
                    return;
                }
                Node*todelete1=temp2->next;//what you've to delete you've to save it first
               Node*temp3=temp2->next->next;//temp2 is the node previous to the deleting one we have to connect it to next of the one gonna deleted 
               temp2->next=temp3;   
               delete todelete1;//delete the variable it was pointing to
               todelete1=nullptr;//freed pointer by deleting address of that variable stored in pointer

        }
    }
        void makethelist(Node* &head,int data){
        if(head==nullptr){
            cout<<"Empty but position 1 so we can add"<<endl;
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
        makethelist(head,1);//passing pointer by refrence
        makethelist(head,2);
        makethelist(head,3);
        makethelist(head,4);
        makethelist(head,5);
        makethelist(head,6);

        Node*temppp=head;
       while(temppp!=nullptr){
        cout<<temppp->data<<endl;
        temppp=temppp->next;
    }
        
       cout<<"Before delete: "<<head->data<<endl;
        deletebyposition(head,0);
        deletebyposition(head,1);
        cout<<"Position 1 now: "<<head->data<<" Position 2 now: "<<head->next->data<<endl;
        deletebyposition(head,3);
        deletebyposition(head,4);
        cout<<"Reached line 85"<<endl;
        deletebyposition(head,7);
        cout<<"After delete: "<<head->data<<endl;
        Node*tempp=head;
       while(tempp!=nullptr){
        cout<<tempp->data<<endl;//After deletion position become k+1
        tempp=tempp->next;
    }
    return 0;
}

