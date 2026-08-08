#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
using std::round;

int main()
{
//     CYCLE WHILE:
//     float num1{}, num2{};
//     float answer{};
//     char sym{};
//
//     cout << "Hello, this is a simple calculator on C++!\nPlease, enter a first number: ", cin >> num1;
//     cout << "\nPlease enter a second number: ", cin >> num2;
//     cout << "\nPlease, enter an operation symbol you want to do: ", cin >> sym;
//
//     while (sym == '/')
//     {
//         if (num2 == 0)
//         {
//             cout << "\nCannot divide by zero. Please enter a second number: ", cin >> num2;
//         }
//         else
//         {
//             break;
//         }
//     }
//
//     switch (sym)
//     {
//         case '/':
//             answer = num1 / num2;
//     }
//
//     cout << "\n Aswer is: " << answer;
//
//     CYCLE FOR:
     int numbers [4] {1, 3, 5, 6};
     int array_size = sizeof(numbers) / sizeof(numbers[0]);
     int adding_number = 4;

     cout << "Result of adding 4 to each array number\n";

     for (auto n : numbers)
     {
          cout << n << '\t';
     }

     cout << endl;

     for (int q = 0; q < array_size; q++)
     {
          cout << "↓\t";
     }

     cout << endl;

     for (int i = 0; i < array_size; i++)
     {
          cout << numbers[i] + adding_number << '\t';
     }


//      for (int i = 0; i < 10; i++)
//      {
//           cout << "\n*";
//
//           for (int j = 0; j < 20; j++)
//           {
//               cout << "*";
//           }
//      }
//
}
