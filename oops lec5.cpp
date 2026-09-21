// abstraction in c++: abstraction is the process of hiding the implementation details and showing only functionality to the user.
//use to provide abstraction a base class from which other claseescan be derived.
//the can not be instantiated(object) and are used to provide an interface for derived classes to implement.
//it is like blueprint for other classes 
//typiclly use to define an interfaace for derived class 
// access specifier: public, private, protected are used to control the access of class members. public members can be accessed from anywhere, private members can only be accessed within the class, and protected members can be accessed within the class and its derived classes.

#include<bits/stdc++.h>
using namespace std; 
class Shape{ // abstract class
  public:
  virtual void draw()=0; // pure virtual function
};
class Circle:public Shape{
  public:
  void draw(){
    cout<<"Drawing Circle"<<endl;
  }
};

int main(){
  Circle c;
  c.draw();
  return 0;
}