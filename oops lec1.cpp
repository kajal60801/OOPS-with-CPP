#include<bits/stdc++.h>
using namespace std;
class Teacher{
  // properties/ attributes
  private:
  double salary;

  public:
  
  string name;
  string dept;
  string subject;
  //non parameterized constructor
  Teacher(){
    dept="Computer Science";
  }
  // parametarized constructor
  Teacher(string n,string d,string s,double sal){
    name=n;
    dept=d;
    subject=s;
    salary=sal;
  }

  //this pointer is used to refer to the current object of the class


  // Teacher(string name,string dept,string subject,double salary){
  //   this->name=name;// left wala object ka dept h aur right constructor ka dept h isliye this pointer use kiya h
  //   this->dept=dept;
  //   this->subject=subject;
  //   this->salary=salary;
  // }

  //copy constructor
  Teacher(Teacher &orgobj){ // shallow copy constructor is used to copy the values of one object to another object of the same class it only cause problem when we have dynamic memory allocation in the class and we want to copy the values of one object to another object of the same class
    cout<<"custom copy constructor called"<<endl;  
    this->name=orgobj.name;
    this->dept=orgobj.dept;       
  }
  // deep copy constructor is used to copy the values of one object to another object of the same class and also allocate new memory for the new object ,used for dynamic memmory allocation


  
  //methods or member functions
  //by default access specifier is private in cpp
  // if we want to access the private members of the class we can use public access specifier make a function public and then we can access the private members of the class
  void changedept(string newDept){
    dept=newDept;
  }
  //setters use to set private values
  void setsalary(double newSalary){
    salary=newSalary;
  }
  // getters use to get the value of private values
  double getSalary(){
    return salary;
  }
};
class Account{
  private:
    double balance;
    string password;
  public:
    string accountid;
    string username;

};
int main(){
  Teacher t1; //constructor is called when we create an object of the class
  t1.name ="kajal";
  // t1.dept ="Computer Science"; // construtor lagane ke baad vo apne aap hi set kar dega har bar jab object create hoga
  t1.subject ="C++";
  t1.setsalary(700000);
  // t1.salary=600000;    // This line will cause a compilation error because salary is private
  cout<<t1.name<<endl;
  cout<<t1.getSalary()<<endl;
  cout<<t1.dept<<endl;

  Teacher t2;
  cout<<t2.dept<<endl; // This will print "Computer Science" because the constructor sets the default value for dept
  Teacher t3("Rohit","Maths","Algebra",50000); // This will call the parameterized constructor and set the values for name, dept, subject and salary  
    cout << t3.name << endl;
    cout << t3.getSalary() << endl;
    cout << t3.dept << endl;
    cout << t3.subject << endl;
    Teacher t4(t1); // This will call the copy constructor and create a new object t4 with the same values as t1
    cout << t4.name << endl;
    Teacher t5 = t3; // This will also call the copy constructor and create a new object t5 with the same values as t3
    cout << t5.name << endl;
  
  
  return 0;
}