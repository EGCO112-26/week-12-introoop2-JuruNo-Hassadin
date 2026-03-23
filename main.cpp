#include <iostream>
#include <string>
#include <cstdlib>
#include "student.h"

int main(int argc, char* argv[]) {
    // หาจำนวนคนจาก argument
    int n_people = (argc - 1) / 2;

    if (n_people == 0) {
        return 1; // ไม่ต้องพิมพ์อะไรถ้าระบบไม่ส่งข้อมูลมา
    }

    student* a = new student[n_people];

    // เก็บข้อมูลลง Array
    for (int i = 0; i < n_people; i++) {
        a[i].set_name(argv[i * 2 + 1]);
        a[i].set_age(atoi(argv[i * 2 + 2]));
    }

    // หาอายุที่น้อยที่สุด
    int min_age = a[0].get_age();
    for (int i = 1; i < n_people; i++) {
        if (a[i].get_age() < min_age) {
            min_age = a[i].get_age();
        }
    }

    // พิมพ์หัวข้อให้ตรงกับที่ระบบต้องการเป๊ะๆ
    cout << "Youngest student" << endl;
    
    // พิมพ์ข้อมูลคนที่อายุน้อยที่สุดทุกคน
    for (int i = 0; i < n_people; i++) {
        if (a[i].get_age() == min_age) {
            a[i].display();
        }
    }

    delete[] a;
    return 0;
}