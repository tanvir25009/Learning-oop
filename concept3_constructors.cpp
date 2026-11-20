// Name: Md. Tanvir Shuvo
// Student ID: IT25009
// Course: ICT 2106 - Object-Oriented Programming Lab

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int id;

public:
    // Default constructor
    Student() {
        name = "Unknown";
        id = 0;
    }

    // Parameterized constructor
    Student(string n, int i) {
        name = n;
        id = i;
    }

    void display() {
        cout << name << " " << id << endl;
    }
};

int main() {
    cout << "Name: Md. Tanvir Shuvo" << endl;
    cout << "Student ID: IT25009" << endl << endl;
    Student s1;                         // default constructor called
    Student s2("Rahim", 210601);        // parameterized constructor called

    // Three objects using the parameterized constructor
    Student a("Karim", 210602);
    Student b("Nusrat", 210603);
    Student c("Sadia", 210604);

    s1.display();
    s2.display();
    a.display();
    b.display();
    c.display();                        // each object keeps its own data

    return 0;
}
