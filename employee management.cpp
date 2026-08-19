#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    string name;
    float salary[6];

public:
    // Function to input employee details
    void input()
    {
        cout << "Enter Employee ID: ";
        cin >> id;

        cin.ignore();
        cout << "Enter Employee Name: ";
        getline(cin, name);

        cout << "Enter salary for 6 months:\n";

        for (int i = 0; i < 6; i++)
        {
            cout << "Month " << i + 1 << ": ";
            cin >> salary[i];
        }
    }

    // Function to calculate total salary
    float totalSalary()
    {
        float total = 0;

        for (int i = 0; i < 6; i++)
        {
            total = total + salary[i];
        }

        return total;
    }

    // Function to calculate average salary
    float averageSalary()
    {
        return totalSalary() / 6;
    }

    // Function to display employee details
    void display()
    {
        cout << "\nEmployee ID: " << id;
        cout << "\nEmployee Name: " << name;

        cout << "\nSalary for 6 months: ";
        for (int i = 0; i < 6; i++)
        {
            cout << salary[i] << " ";
        }

        cout << "\nTotal Salary: " << totalSalary();
        cout << "\nAverage Monthly Salary: " << averageSalary() << endl;
    }
};

int main()
{
    Employee e[10];

    cout << "Enter details of 10 employees:\n";

    for (int i = 0; i < 10; i++)
    {
        cout << "\n--- Employee " << i + 1 << " ---\n";
        e[i].input();
    }

    cout << "\n\n===== EMPLOYEE DETAILS =====\n";

    for (int i = 0; i < 10; i++)
    {
        e[i].display();
    }

    // Finding employee with highest average salary
    int highest = 0;

    for (int i = 1; i < 10; i++)
    {
        if (e[i].averageSalary() > e[highest].averageSalary())
        {
            highest = i;
        }
    }

    cout << "\n===== EMPLOYEE WITH HIGHEST AVERAGE SALARY =====\n";
    e[highest].display();

    return 0;
}