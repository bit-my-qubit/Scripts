#include <iostream>
using namespace std;

int primo(int n);
void sumadeprimos(int n);
//---------------------
int main()
{
    int n;
    cout << "Introduce n: ";
    cin >> n;
    for (unsigned k = 3; k <= n; k++)
        sumadeprimos(k);
    system("pause");
}
//----------------------

void sumadeprimos(int n)
{
    if (n % 2 == 1)
    {
        if (primo(n - 2))

            cout << n << " = "
                 << "2+" << n - 2 << endl;
        else
            cout << n << "No" << endl;
    }
    else if (n % 2 == 0)
    {
        for (int i = 2; i < n; i++)
        {

            if (primo(i) && primo(n - i))

                cout << n << " = " << i << " + " << n - i << endl;
        }
    }
}

int primo(int m)
{
    int incremen = 2;
    bool primo = true;
    while (primo && incremen < m)
    {
        if (m % incremen == 0)
            primo = false;
        ++incremen;
    }
    if (primo)
        return m;
    else
        return 0;
}