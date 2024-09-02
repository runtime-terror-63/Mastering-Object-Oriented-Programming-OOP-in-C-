#include <bits/stdc++.h>
using namespace std;

// inheritance
class Person
{
public:
  string name;
  int age;

  // parameterized constructor
  Person(string name, int age)
  {
    cout << "I am now in parent" << endl;
    this->name = name;
    this->age = age;
  }

  // non - parameterized
  Person()
  {
    cout << "I am now in parent" << endl;
  }

  // Destructor
  ~Person()
  {
    cout << "I am now in parent destructor" << endl;
  }
};

// inheritance
class Student : public Person
{
  // name, age, rollno
public:
  int rollno;
  Student(string name, int age, int rollno) : Person(name, age)
  {
    cout << "I am now in child" << endl;
    this->rollno = rollno;
  }

  ~Student()
  {
    cout << "I am now in child destructor" << endl;
  }

  void getInfo()
  {
    cout << "name : " << name << endl;
    cout << "age : " << age << endl;
    cout << "rollno : " << rollno << endl;
  }
};

int main()
{
  Student s1("Sayan Dutta", 22, 00001);
  s1.getInfo();
}