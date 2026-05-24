#include <iostream>
#include "task1.h"
#include "task2.h"

using namespace std;

int main()
{
    int choice;

    do
    {
        cout << "\nMENU\n";
        cout << "1 - Task 1\n";
        cout << "2 - Task 2\n";
        cout << "0 - Exit\n";
        cout << "Choose: ";
        cin >> choice;

        cin.ignore(); // важливо для getline

        switch (choice)
        {
        case 1:
            task1();
            break;

        case 2:
            task2();
            break;

        case 0:
            cout << "Exit...\n";
            break;

        default:
            cout << "Wrong choice!\n";
        }

    } while (choice != 0);

    return 0;
}
