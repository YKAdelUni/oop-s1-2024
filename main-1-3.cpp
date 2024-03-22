// main-1-3.cpp
#include <iostream>
#include "Person.h"

extern PersonList deepCopyPersonList(PersonList pl);

using namespace std;

int main(void){
    PersonList original_list;
    original_list.numPeople = 2;
    original_list.people = new Person[original_list.numPeople];
    original_list.people[0].name = "Alice";
    original_list.people[0].age = 35;
    original_list.people[1].name = "Bob";
    original_list.people[1].age = 42;
    PersonList copied_list = deepCopyPersonList(original_list);
    for (int i = 0; i < copied_list.numPeople; ++i) {
        cout << "Name: " << copied_list.people[i].name << ", Age: " << copied_list.people[i].age << endl;
    }
    delete [] original_list.people;
    delete [] copied_list.people;
}
