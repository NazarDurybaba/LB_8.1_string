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
    cout << "������ �����:" << endl;
    getline(cin, str);
    cout << "����� ������ " << Count(str) << " ���� ���� 'abc'" << endl;
    string dest = Change(str);
    cout << "������� ����� (��������) : " << str << endl;
    cout << "������� ����� (���������): " << dest << endl;
    return 0;
}
