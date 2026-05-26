#include <iostream>
using namespace std;
int main(){
    int arr[]={10,20,30};
    int*ptr=arr;
    cout<<ptr+1<<endl;
    cout<<(*ptr+1)<<endl;//first derefrencing p than adding one
    cout<<*(ptr+1)<<endl;//next address than derefrencing
    int x=10;
    int*p=&x;
    int**pp=&p;
    cout<<p<<endl;//address of x stored in pointer
    cout<<pp<<endl;//address of pointer storing address of x ,being stored 
    cout<<*p<<endl;//derefrencing x
    cout<<*pp<<endl;//derefrencing pp means getting p, so same as p (address of x)
    cout<<**pp<<endl;//derefrencing the derefrenced pointer
    cout<<p++<<endl;//giving next address
    cout<<p--<<endl;//giving previous address
    int*ptrr=nullptr;
    if(ptrr!=nullptr){
        cout<<*p;
    }
    else{
        cout<<"It's null pointer"<<endl;
    }


    return 0;
}