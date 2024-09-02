#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
  string name;
  int age;

  Person(string name, int age)
  {
    this->name = name;
    this->age = age;
  }
};

class Student : public Person
{
public:
  int rollno;

  Student(string name, int age, int rollno) : Person(name, age)
  {
    this->rollno = rollno;
  }

  void getInfo()
  {
    cout << "name : " << name << endl;
    cout << "age : " << age << endl;
    cout << "rollno : " << rollno << endl;
  }
};

class TA : public Person
{
public:
  string subject;
  TA(string name, int age, string subject) : Person(name, age)
  {
    this->subject = subject;
  }
  void getInfo()
  {
    cout << "name : " << name << endl;
    cout << "age : " << age << endl;
    cout << "Subject : " << subject << endl;
  }
};

int main()
{
  TA s1("John Das", 22, "Math");
  s1.getInfo();

  return 0;
}
