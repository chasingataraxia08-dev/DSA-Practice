#include <iostream>
using namespace std;
int main(){
    int x=5;//variable on stack
    int*p=new int(10);//variable on heap
    cout<<"x= "<<x<<endl;
    cout<<"p= "<<*p<<endl;
    delete p;//deletes the heap variable pointers were pointing at but point and address of existing varible still here (dangling pointer)
    cout<<*p<<endl;
    int*q=nullptr;
    cout<<*q<<endl;
    return 0;
}