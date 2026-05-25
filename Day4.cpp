#include <iostream>
using namespace std;
int main(){
    int num = 5;
	int *iptr;
	iptr = &num;
	
	cout << "num " << num << endl;
	cout << "&num " << &num << endl;
	cout << "iptr " << iptr << endl;
	cout << "*iptr " << *iptr << endl;  // de-referencing

	*iptr = 1009;//assigning value indirectly through derefrencing
	cout << "num " << num << endl;
	//Stack vs heap
    //Dangling pointer, memory leakage, Null pointer
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