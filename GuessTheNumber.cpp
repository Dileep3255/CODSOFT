#include <bits/stdc++.h>
//standard library for c++
using namespace std;
//Namespace is defined
int main()
{
    cout << "Guess the number : " << endl;
    srand(time(0));           // random number generated new each time
    int r = 1 + rand() % 100; // generates random number
    int n;
    do
    {
        cin >> n; // taking input of integer from user
        if (r < n)
        {
            cout << "Number entered is too high than random number." << endl;
        }
        else if (r > n)
        {
            cout << "Number entered is too low than random number." << endl;
        }
        else
        {
            cout << "Number entered is equal to random number." << endl;
        }
    } while (n != r);
}