#include<bits/stdc++.h>
using namespace std; 
//static keyword: static keyword is used to declare a static variable.
// A static variable is a variable that retains its value between function calls. It is initialized only once and its value persists throughout the lifetime of the program. Static variables can be declared inside a function or outside a function. When declared inside a function, the variable is local to that function but retains its value between calls to that function. When declared outside a function, the variable has global scope but is only accessible within the file in which it is declared.

class A{
  
  public:
  int x;
  void increment(){
    x++;
  }

};



// --------------------void fun(){
//   static int x=0; // static variable INITIALLY EK BAAR HOGA LEKIN BAKI CHIJE BAAR BAAR CHALENGI
//   x++;
//   cout<<x<<endl;
// ---------------}

int main(){

  //-------------- fun();
  // fun();
  // fun();------------------
  A a1;
  A a2;
  a1.x=5;
  a2.x=10;
  cout<<"a1.x: "<<a1.x<<endl;
  cout<<"a2.x: "<<a2.x<<endl;

  return 0;
}