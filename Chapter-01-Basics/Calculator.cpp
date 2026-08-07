#include <cmath>
#include <iostream>

using std::cout;
using std::endl;
using std::cin;
using std::round;

int main()
{
    float _num1{}, _num2{};
    float answer{};
    char _sym{};

    cout << "Hello, this is a simple calculator on C++!\nPlease, enter a first number: ", cin >> _num1;
    cout << "\nPlease enter a second number: ", cin >> _num2;
    cout << "\nPlease, enter an operation symbol you want to do: ", cin >> _sym;

    switch (_sym)
    {
        case '+':
            answer = _num1 + _num2;
            break;

        case '-':
            answer = _num1 - _num2;
            break;

        case '/':
            if (_num2 == 0) cout << "Cannot divide by zero";

            else answer = _num1 / _num2;
            break;

        case '*':
            answer = _num1 * _num2;
            break;

        case '%':
            answer = static_cast<int>(round(_num1 + _num2));
            break;

        default:
            cout << "Inappropriate operator";
    }
    cout << "Answer is: " << answer << endl;
}