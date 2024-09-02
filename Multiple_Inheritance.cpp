#include <bits/stdc++.h>
using namespace std;

// Multiple Inheritance
class Student
{
public:
  string name;
  int rollno;

  // constructor
  Student(string name, int rollno)
  {
    this->name = name;
    this->rollno = rollno;
  }
};

class Teacher
{
public:
  string subject;
  double salary;

  // constructor
  Teacher(string subject, double salary)
  {
    this->subject = subject;
    this->salary = salary;
  }
};

class TeachingAssistant : public Student, public Teacher
{
public:
  TeachingAssistant(string name, int rollno, string subject, double salary)
      : Student(name, rollno), Teacher(subject, salary) {}

  void getInfo()
  {
    cout << "Name : " << name << endl;
    cout << "rollno : " << rollno << endl;
    cout << "subject : " << subject << endl;
    cout << "salary : " << salary << endl;
  }
};
int main()
{
  TeachingAssistant t1("John", 101, "Mathematics", 50000.0);
  t1.getInfo();

  return 0;
}