#include<iostream>
using namespace std;

class Student
{
private:
    int roll;
    string name;
    int mathMarks;
    int phyMarks;
    int chemMarks;

public:
    Student(int r, string n, int m, int p, int c)
    {
        roll = r;
        name = n;
        mathMarks = m;
        phyMarks = p;
        chemMarks = c;
    }

    int total()
    {
        return mathMarks + phyMarks + chemMarks;
    }

    char Grade()
    {
        float average = total() / 3.0;
        if (average > 60)
            return 'A';
        else if (average >= 40 && average < 60)
            return 'B';
        else
            return 'C';
    }
};

int main()
{
    int roll;
    string name;
    int m, p, c;

    cout << "Enter Roll number of a Student:" << endl;
    cin >> roll;

    cout << "Enter Name of a Student:" << endl;
    cin >> name;

    cout << "Enter marks in 3 subjects:" << endl;
    cin >> m >> p >> c;

    Student s(roll, name, m, p, c);

    cout << "Total Marks: " << s.total() << endl;
    cout << "Grade of Student: " << s.Grade() << endl;

    return 0;
}
