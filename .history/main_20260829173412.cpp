#include <iostream>
#include <string>
using namespace std;

// Assignment 1 — Cesar Flores
// Week 1

int main()
{
  string name;
  string story;
  int years;

  cout << "First name: ";
  cin >> name;
  cout << "Years coding goal: ";
  cin >> years;
  cout << name << ", " << "Sounds good. Your coding goal is " << "(" << years << ")\n";
  cout << "Anything else you want to add? ";
  cin >> story;
  cout << "Ok, so your name is " << name << ", your coding goal is " << years << "and your story is: " << story << endl;

  return 0;
}
