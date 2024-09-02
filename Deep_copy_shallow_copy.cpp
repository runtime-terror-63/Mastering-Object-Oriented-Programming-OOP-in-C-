#include <bits/stdc++.h>
using namespace std;

// copy constructor there 2 types coppy - 1: Shallow Coppy
// 2: Deepp Coppy
class Student
{
public:
  string name;
  double *cgpaptr;

  Student(string name, double cgpa)
  {
    this->name = name;
    cgpaptr = new double;
    *cgpaptr = cgpa;
  }

  // Example of Deep-coppy
  Student(Student &obj)
  {
    this->name = obj.name;
    cgpaptr = new double;
    *cgpaptr = *obj.cgpaptr;
  }

  void getInfo()
  {
    cout << name << endl;
    cout << *cgpaptr << endl;
  }
};

int main()
{
  Student s1("Raj", 8.9);
  Student s2(s1);

  // Example of Shallow copy
  s1.getInfo();
  cout << "---------" << endl;
  // de-reference
  *(s2.cgpaptr) = 9.8;
  s2.getInfo();
  cout << "---------" << endl;
  s1.getInfo();
}