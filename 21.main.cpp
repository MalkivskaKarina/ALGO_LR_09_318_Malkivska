#include <iostream>
#include <string>

using namespace std;

// власна функція replace
void my_replace(char str[], int pos, int len, int n, char c)
{
    int i = 0;

    // довжина рядка
    while (str[i] != '\0')
    {
        i++;
    }

    int str_len = i;

    char temp[256];

    int k = 0;

    // копіюємо до pos
    for (i = 0; i < pos; i++)
    {
        temp[k] = str[i];
        k++;
    }

    // вставка символів
    for (i = 0; i < n; i++)
    {
        temp[k] = c;
        k++;
    }

    // копіюємо залишок
    for (i = pos + len; i < str_len; i++)
    {
        temp[k] = str[i];
        k++;
    }

    temp[k] = '\0';

    // повертаємо у str
    i = 0;

    while (temp[i] != '\0')
    {
        str[i] = temp[i];
        i++;
    }

    str[i] = '\0';
}

void task1()
{
    string str1;
    char str2[256];

    cout << "Enter string: ";
    cin.getline(str2, 256);

    str1 = str2;

    int pos;
    int len;
    int n;
    char c;

    cout << "Enter pos: ";
    cin >> pos;

    cout << "Enter len: ";
    cin >> len;

    cout << "Enter n: ";
    cin >> n;

    cout << "Enter symbol: ";
    cin >> c;

    // метод string
    str1.replace(pos, len, n, c);

    // власна функція
    my_replace(str2, pos, len, n, c);

    cout << endl;
    cout << "Result string::replace(): " << endl;
    cout << str1 << endl;

    cout << endl;
    cout << "Result my_replace(): " << endl;
    cout << str2 << endl;
}
