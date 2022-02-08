// Підрахувати кількість слів у реченні.
#include <iostream>
#include<string>
#include<Windows.h>
using namespace std;

 int  main()
{
    setlocale(LC_ALL, "rus");
    int c = 0;
    cout << "Введіть текст: ";
    string text;
    getline(cin, text);
    int size = text.size();
    for (int i = 1; i <size; i++)
    {
        if ((text[i - 1] != ' ') && (text[i] == ' ' )) {
            c++; 
        }
    }

    cout << "Кількість слів у цьому тексті =  " << c++ << endl;
}
