#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    int marks[5];

public:
    // Function to input student details
    void input()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter marks of 5 subjects:\n";
        for (int i = 0; i < 5; i++)
        {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    // Function to calculate total
    int total()
    {
        int sum = 0;

        for (int i = 0; i < 5; i++)
        {
            sum = sum + marks[i];
        }

        return sum;
    }

    // Function to calculate average
    float average()
    {
        return total() / 5.0;
    }

    // Function to display student details
    void display()
    {
        cout << "\nRoll Number: " << rollNo;
        cout << "\nName: " << name;

        cout << "\nMarks: ";
        for (int i = 0; i < 5; i++)
        {
            cout << marks[i] << " ";
        }

        cout << "\nTotal Marks: " << total();
        cout << "\nAverage Marks: " << average() << endl;
    }
};

int main()
{
    Student s[5];

    cout << "Enter details of 5 students:\n";

    for (int i = 0; i < 5; i++)
    {
        cout << "\n--- Student " << i + 1 << " ---\n";
        s[i].input();
    }

    cout << "\n\n===== STUDENT DETAILS =====\n";

    for (int i = 0; i < 5; i++)
    {
        s[i].display();
    }

    // Finding student with highest total
    int highest = 0;

    for (int i = 1; i < 5; i++)
    {
        if (s[i].total() > s[highest].total())
        {
            highest = i;
        }
    }

    cout << "\n===== STUDENT WITH HIGHEST TOTAL =====\n";
    s[highest].display();

    return 0;
}