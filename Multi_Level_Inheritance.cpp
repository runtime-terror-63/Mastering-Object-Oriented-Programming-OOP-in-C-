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
};

class GrandStudent : public Student
{
public:
  string research_paper;

  GrandStudent(string name, int age, int rollno, string research_paper) : Student(name, age, rollno)
  {
    this->research_paper = research_paper;
  }

  void getInfo()
  {
    cout << "name : " << name << endl;
    cout << "agen : " << age << endl;
    cout << "rollno : " << rollno << endl;
    cout << "research_paper : " << research_paper << endl;
  }
};

int main()
{
  GrandStudent s1("Soumyadip", 23, 121, "AI_Intregation");
  s1.getInfo();
}