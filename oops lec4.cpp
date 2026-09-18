// polymorphism: compile time polymorphism and runtime polymorphism

#include<bits/stdc++.h>
using namespace std;

  class Student{
    public:
    string name;
    Student(){
      cout<<"Constructor called which is non parameterized "<<endl;
    } 
    Student(string name){
      cout<<"Constructor called which is parameterized "<<endl;
      this->name=name;
      cout<<"Name: "<<this->name<<endl;
  }
  


};
int main(){

  Student s1; // non parameterized constructor called BEACUSE no argument is passed
  Student s2("Alice");// parameterized constructor called BEACUSE argument is passed
  
  return 0;
}