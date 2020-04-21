#include <iostream>
#include <string>
#include <cstdlib>
#include <locale>
#include <windows.h>

using namespace std;

void task1()
{
    string ur_string;
    cout << "Введите строку: ";
    getline(cin, ur_string);
    ur_string = "<<" + ur_string + ">>";
    cout << ur_string << "\n";

    cout << endl;
    
}

void task2()
{
    locale::global(locale(""));

    char s[11];
    double n = 1.0;

    cout << "Введите строку: ";
    cin.getline(s, 11);
    OemToCharA(s, s);

    int sl = strlen(s);

    for (int i = 0; i < sl - 1; ++i)
        for (int j = 0; j < sl - 1; ++j)
            if (static_cast<unsigned char>(s[j + 1]) < static_cast<unsigned char>(s[j]))
                swap(s[j + 1], s[j]);

    cout << "Отсортированная строка: " << s << endl;
}

void task3()
{
    cout << "Введите строку: ";
    char str[25];
    cin >> str;
    for (int i = 0; str[i] != 0; i++) 
    {
        str[i]++;
        cout << str[i];
    }
    cout << endl;
}

int main()
{
    task1();
    task2();
    task3();
}