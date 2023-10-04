#include <iostream>

using namespace std;

int main()
{
    float a, b;
    cout<<"Enter the number for operations : ";
    cin >> a >> b;
    char chr;
    cout<<"Enter the operation : ";
    cin >> chr;
    switch (chr)
    {
    case '+':
    {
        cout << "The sum is : " << a + b << endl;
        break;
    }
    case '-':
    {
        cout << "The difference is : " << a - b << endl;
        break;
    }
    case '*':
    {
        cout << "the product is : " << a * b << endl;
        break;
    }
    case '/':
    {
        cout << "the result of division is : " << a / b << endl;
        break;
    }
    default:
    {
        cout << "invalid option" << endl;
    }
    }
}