#include "Person.h"

PersonList createPersonList(int n) {
    Person* people = new Person[n];
    int numPeople = n;
    for (int i = 0; i < n; i++) {
        people[i].name = "Jane Doe";
        people[i].age = 1;
    }
    PersonList list;
    list.people = people;
    list.numPeople = numPeople;
    return list;
}
