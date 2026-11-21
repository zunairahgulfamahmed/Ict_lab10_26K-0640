#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;

private:
    int marks;

public:
    void setMarks(int m)
    {
        if (m >= 0 && m <= 100)
        {
            marks = m;
        }
        else
        {
            cout << "Invalid marks!" << endl;
        }
    }

    int getMarks()
    {
        return marks;
    }

    char getGrade()
    {
        if (marks >= 80)
            return 'A';
        else if (marks >= 60)
            return 'B';
        else if (marks >= 50)
            return 'C';
        else
            return 'F';
    }
};

int main()
{
    Student s;

    s.name = "Ayesha";

    s.setMarks(85);
    s.setMarks(120);

    cout << "Name: " << s.name << endl;
    cout << "Marks: " << s.getMarks() << endl;
    cout << "Grade: " << s.getGrade() << endl;

    
    return 0;
}