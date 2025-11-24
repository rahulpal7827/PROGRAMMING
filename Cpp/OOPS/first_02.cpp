#include <iostream>
#include <string>
using namespace std;
class binary
{
    string s;

public:
    void read(void);
    void chek_binary(void);
    void comp(void);
    void display();
};

void binary ::read(void)
{
    cout << "enter a binar number->" << endl;
    cin >> s;
}
void binary ::comp(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
    }
}
void binary ::display()
{
    cout << "\ndisplaying binary number:" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}
void binary ::chek_binary()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "invalid binary number" << endl;
            exit(0);
        }
    }
}
int main()
{
    binary a;
    a.read();
    a.chek_binary();
    a.display();
    a.comp();
    a.display();
    return 0;
}