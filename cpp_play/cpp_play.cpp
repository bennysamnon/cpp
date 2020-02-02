// cpp_play.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
#include <vector>

#include "Person.h"
#include "Employee.h"

using namespace std;

namespace life {
    int meaning = 42;
    //pointer to meaning
    int* pm = &meaning;
    //reference to meaning
    int& rm = meaning;
}

inline void enc(int &a) { a++; }

int main()
{
    cout << "Hello World!\n";

    using namespace life;
    cout << "meaning value is " << meaning << endl;
    *pm = 50;
    cout << "meaning value is " << meaning << endl;
    rm = 42;
    cout << "meaning value is " << meaning << endl;

    enc(meaning);
    cout << "meaning value is " << meaning << endl;


    int a[]{ 1, 2, 3, 4, 5, 6 };

    for (int i = 0; i < 6; i++)
        cout << a[i] << "\t";
    cout << endl;

    int *p = a;
    int *e = p + 6;
    for(p, e; p != e; p++)
        cout << *p << "\t";
    cout << endl;


    auto ba = begin(a);
    auto ea = end(a);
    for (; ba!=ea; ba++)
        cout << *ba << "\t";
    cout << endl;

    for (; ba != ea; ba++)
        cout << *ba << "\t";
    cout << endl;

    vector<int> v{ 5, 6, 7, 8, 9, 10 };
    auto bv = v.begin();
    auto ev = v.end();

    for(; bv != ev; bv++)
        cout << *bv << "\t";
    cout << endl;

    Person *p1 = new Person(40, "benny", 4, "hin dor");
    p1->great();

    Person *p2 = new Person(*p1);
    p2->address->street = "zfat";

    p1->great();
    p2->great();
    
    cout << endl << endl;
  
    Employee emp = Employee(32, "benny", 4, "hin dor", "checkpoint");
    Employee&emp2 = static_cast<Employee&>(emp);

    emp2.great();

    

    getchar();
    
    delete p1;
    delete p2;
}

