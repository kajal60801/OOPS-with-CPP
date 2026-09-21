// static object: A static object is an object that is created only once and retains its value between function calls. It is initialized only once and its value persists throughout the lifetime of the program. Static objects can be declared inside a function or outside a function. When declared inside a function, the object is local to that function but retains its value between calls to that function. When declared outside a function, the object has global scope but is only accessible within the file in which it is declared.
#include<bits/stdc++.h>
using namespace std;
class ABC{
  public:
  ABC(){
    cout<<"Constructor called"<<endl;
  }
  ~ABC(){
    cout<<"destructor called"<<endl;
  }

};
int main(){
  if(true){
    ABC a1;
  }
  cout<<"end of main function"<<endl;
  return 0;
}
