#include<bits/stdc++.h>
using namespace std;\

class Person{
  public:
    string name;
    int age;
    //constructor
    Person(string name,int age){
      this->name=name;
      this->age=age;
    }
    Person(){ // running 2
      cout<<"Parent constructor called"<<endl;
  
    }
  };
  class Student:public Person{ // single inheritance                  // idhar aayega pr parent ke pass chala jayega phir wha se aane ke baad chalega running 3
    //name age pehle se define h parent main bas rollno ki need h

   
    public:
    int rollno;

     // constructor in inheritance in child class

    Student(string name, int age,int rollno):Person( name, age){ // running 4
      this->rollno=rollno;
      cout<<"Child constructor called"<<endl;
    }


    Student(){
      cout<<"Child constructor called jsdjvnsdj,vn"<<endl;
    }
    void getinfo(){
      cout<<"Name: "<<name<<endl;
      cout<<"Age: "<<age<<endl;
      cout<<"Roll No: "<<rollno<<endl;  
    }

};
int main(){
  Student s1; // running 1
  Student s2("mon",28,399);
  s1.name="John";
  s1.age=20;
  s1.rollno=123;
 
  s1.getinfo();
  s2.getinfo();
  return 0;
}
// type of inheritance: single inheritance, multiple inheritance, multilevel inheritance, hierarchical inheritance, hybrid inheritance  