#include <bits/stdc++.h>
#include <string>
using namespace std;

class Teacher
{
private:
  double salary;

public:
  // Properties/ attributes
  string name;
  string dept;
  string subject;

  // Methods / member functions
  void changeDept(string newDept)
  {
    dept = newDept;
  }

  void setSalary(double s)
  {
    salary = s;
  }
  double getSalary()
  {
    return salary;
  }
};

int main()
{
  Teacher t1;
  Teacher t2;

  // Value assignment with dot (.) operator
  t1.name = "Sayan";
  t1.subject = "Data Structure & Algorithms";
  t1.dept = "Information Technology";
  t1.setSalary(15.980);

  cout << t1.name << endl;
  cout << t1.getSalary() << endl;

  return 0;
}
