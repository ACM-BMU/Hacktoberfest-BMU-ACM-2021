// HACKERRANK
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, small = 0, capital = 0, charr = 0, digi = 0, count = 0;
    cin >> n;
    string password;
    cin >> password;
    int k = password.length();
    for (int i = 0; i < password.length(); i++)
    {
        if (password[i] >= 65 && password[i] <= 90)
        {
            small++;
        }
        else if (password[i] >= 97 && password[i] <= 122)
        {
            capital++;
        }
        else if (password[i] >= 48 && password[i] <= 57)
        {
            digi++;
        }
        else //if (password[i] >= 33 && password[i] <= 45 || password[i] == 64 || password[i] == 94)
        
            charr++;
        
    }
    if (small == 0)
    {
        count++;
    }
    if (capital == 0)
    {
        count++;
    }
    if (charr == 0)
    {
        count++;
    }
    if (digi == 0)
    {
        count++;
    }
    if (k >= 6)
    {
        cout << count;
    }
    else
    {
        if ((k + count) >= 6)
        {
            cout << count;
        }
        else if ((k + count) < 6)
        {
            cout << 6 - k;
        }
    }
    return 0;
}
