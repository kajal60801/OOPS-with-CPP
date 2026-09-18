#include<bits/stdc++.h>
using namespace std;
class Student{
  public:
  string name;
  int age;  
  // // //int cgpa;
  double *cgpaptr; // pointer to double to store the cgpa of the student

  Student(string name,int age,double cgpa){
    this->name=name;
    this->age=age;  
    // // // this->cgpa=cgpa;
    cgpaptr = new double; // allocate memory for the cgpa
    *cgpaptr=cgpa; // assign the value of cgpa to the pointer
    
  }

//  destructor

  ~Student(){
    cout<<"Destructor called hii, i delete everything its my woking"<<endl;
    // it can automatically free the memory allocated for the pointer when the object is destroyed, but we can also do it manually

    delete cgpaptr; // free the memory allocated for the pointer
  }




  // we can write our copy constructor to copy the values of one object to another object of the same class
  Student(Student &obj){
     cout<<"custom copy constructor called"<<endl;
     this->name=obj.name;
     this->age=obj.age; 
    //  // //this->cgpa=obj.cgpa;
     cgpaptr = new double;
    *cgpaptr = *obj.cgpaptr;//obj ke pointer ke andar jo CGPA value hai, usko current object (s2) ke pointer ke andar store kar rahe hai
    
  }
  

}; 
int main(){
  Student s1("John",20,8.5);
  Student s2(s1); // This will call the copy constructor and create a new object s2 with the same values as s1
  s2.getinfo(); // This will print the values of s2
  *s2.cgpaptr=9.0; // change the value of cgpa of s2
  cout<<"After changing the cgpa of s2"<<endl;
  s2.getinfo(); // This will print the values of s2
  return 0;
}