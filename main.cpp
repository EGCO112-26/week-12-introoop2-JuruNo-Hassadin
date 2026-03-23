#include <iostream>
#include <string>
#include <cstdlib>
#include "student.h"

int main(int argc, char* argv[]) {
    
    int n_people = (argc - 1) / 2;

    if (n_people == 0) {
        cout << "No data provided." << endl;
        return 1;
    }

    student* a = new student[n_people];

    
    for (int i = 0; i < n_people; i++) {
        a[i].set_name(argv[i * 2 + 1]);
        a[i].set_age(atoi(argv[i * 2 + 2]));
    }

    
    int min_age = a[0].get_age();
    for (int i = 1; i < n_people; i++) {
        if (a[i].get_age() < min_age) {
            min_age = a[i].get_age();
        }
    }

    
    cout << "The youngest person/people (Age " << min_age << "):" << endl;
    for (int i = 0; i < n_people; i++) {
        if (a[i].get_age() == min_age) {
            a[i].display(); 
        }
    }

    delete[] a; 
    return 0;
}