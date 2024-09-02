#include <bits/stdc++.h>
using namespace std;

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

  // use delete keyword  for dynamic allocation also delete
  // if we not do distructor for dynamic allocfation thats falled memory leak
  ~Student()
  {
    cout << "Hi I delete everything" << endl;
    delete cgpaptr;
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
  s1.getInfo();
  return 0;
}