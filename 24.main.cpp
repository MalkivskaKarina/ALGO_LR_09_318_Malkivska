#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// перевірка рядка
bool is_valid(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (!(isdigit(str[i]) || str[i] == '+' || str[i] == '-' || str[i] == ' '))
            return false;
    }
    return true;
}

// обчислення
int calculate(string str)
{
    int result = 0;
    int number = 0;
    char op = '+';

    for (int i = 0; i <= str.length(); i++)
    {
        if (isdigit(str[i]))
            number = str[i] - '0';

        if ((!isdigit(str[i]) && str[i] != ' ') || i == str.length())
        {
            if (op == '+') result += number;
            else result -= number;

            op = str[i];
        }
    }

    return result;
}

void task2()
{
    string str;

    cout << "Enter expression: ";

    while (getline(cin, str))
    {
        if (str == "0") break;

        cout << "Expression: " << str << endl;

        if (is_valid(str))
        {
            cout << "Result: " << calculate(str) << endl;
        }
        else
        {
            cout << "Wrong expression" << endl;
        }

        cout << "Enter expression (0 to stop): ";
    }
}
