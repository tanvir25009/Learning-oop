// Name: Md. Tanvir Shuvo
// Student ID: IT25009
// Course: ICT 2106 - Object-Oriented Programming Lab

#include <iostream>
#include <string>
using namespace std;

class Student {
private:                       // encapsulation: data hidden from outside
    int studentID;
    string name;
    string department;
    int semester;

public:
    // Sets all information of a student
    void setInformation(int id, string n, string dept, int sem) {
        studentID = id;
        name = n;
        department = dept;
        semester = sem;
    }

    // Displays the information of a student
    void displayInformation() {
        cout << "ID         : " << studentID << endl;
        cout << "Name       : " << name << endl;
        cout << "Department : " << department << endl;
        cout << "Semester   : " << semester << endl;
        cout << "-------------------------" << endl;
    }
};

int main() {
    cout << "Name: Md. Tanvir Shuvo" << endl;
    cout << "Student ID: IT25009" << endl << endl;
    Student s1, s2, s3;        // three objects

    s1.setInformation(210601, "Rahim", "ICT", 3);
    s2.setInformation(210602, "Karim", "CSE", 5);
    s3.setInformation(210603, "Nusrat", "EEE", 2);

    cout << "===== Student Information =====" << endl;
    s1.displayInformation();
    s2.displayInformation();
    s3.displayInformation();

    return 0;
}
