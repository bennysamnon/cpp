// cpp_play.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <memory>

using namespace std;

#pragma pack(push, 1)
class Person {
public:
    char name[5];
    int age;
    double weight;
};
#pragma pack(pop)


int main()
{
    /*
    https://stackoverflow.com/questions/3318410/pragma-pack-effect
    Padding example --> shuled be 5+4+8=17 but it's will print 24
            1 | 2 | 3 | 4 | 5 | 6 | 7 | 8
    name    x   x   x   x   x   p a d d i n g
    age     x   x   x   x   p a d d d i n g 
    weight  x   x   x   x   x   x   x   x

    when we add pragma pack it's tell the comlier to not add padding 
    */
    cout << "Size of Person is:" << sizeof(Person) << endl;

    /*
    Vector examples
        Iteration
        How the capacity is grown (because it's array inside)
    */
    vector<string> strings;

    strings.push_back("one");
    strings.push_back("two");
    strings.push_back("three");
    strings.push_back("four");

    cout << "Iterate string vector" << endl;
    for (auto item = strings.begin(); item != strings.end(); item++)
        cout << *item << endl;
    
    vector<int> integers;
    int capacity = integers.capacity();
    for (int i = 1; i < 100; i++)
    {
        integers.push_back(i);

        if (capacity != integers.capacity())
        {
            capacity = integers.capacity();
            cout << "Capacity: " << integers.capacity() << " Size: " << integers.size() << endl;
        }
    }

 
    /*
    list example 
    list is differ from vector, it's implemented as linked list so we can add items to the front or any place
    */
    
    list<int> list_items;
    list_items.push_back(1);
    list_items.push_back(2);
    list_items.push_back(4);

    auto it = list_items.begin();
    it++; //1
    it++; //2
    list_items.insert(it, 3);

    for (auto iterator = list_items.begin(); iterator != list_items.end(); iterator++)
    {
        cout << "list " << *iterator << endl;
    }

    cout << endl << endl;

    for (auto iterator = list_items.begin(); iterator != list_items.end(); iterator++)
    {
        cout << "list " << *iterator << endl;

        if (*iterator == 2)
        {
            iterator = list_items.erase(iterator);
        }
    }    
}

