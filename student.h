#include <iostream>
#include <string>
using namespace std;

class student {
private:
    string name;
    int age;

public:
    void set_name(string n = "Yme") { name = n; }
    void set_age(int a) { age = a; }
    int get_age() { return age; }
    
    
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};