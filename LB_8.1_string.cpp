#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int Count(const string& s)
{
    int k = 0;
    size_t pos = 0;
    while ((pos = s.find("abc", pos)) != string::npos)
    {
        pos++;
        k++;
    }
    return k;
}

string Change(string& s)
{
    size_t pos = 0;
    while ((pos = s.find("abc", pos)) != string::npos)
    {
        s.replace(pos, 3, "**");
    }
    return s;
}

int main()
{
    SetConsoleOutputCP(1251);
    string str;
    cout << "¬вед≥ть р€док:" << endl;
    getline(cin, str);
    cout << "–€док м≥стить " << Count(str) << " груп букв 'abc'" << endl;
    string dest = Change(str);
    cout << "«м≥нений р€док (параметр) : " << str << endl;
    cout << "«м≥нений р€док (результат): " << dest << endl;
    return 0;
}
