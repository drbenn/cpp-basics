#include <iostream>
// https://www.youtube.com/watch?v=ZzaPdXTrSb8
// https://www.onlinegdb.com/online_c++_compiler
// https://www.programiz.com/cpp-programming/online-compiler/

using namespace std;
#include <cmath>
#include <cstdlib>
#include <ctime>

// basic variables and hello world
// int main() {
//     int file_size = 100;
//     int counter = 0;
//     double sales = 9.99;
//     std::cout << "Hello, World!" << std::endl;
//     std::cout << file_size << std::endl;
//     return 0;  // return 0 means success, values other than 0 mean failure
// }

//  swap two numbers
// int main() {
//     int a = 1;
//     int b = 2;
//     int temp = a;

//     a = b;
//     b = temp;

//     std::cout << b;
//     return 0;
// }

// // constants and std::cout << explanation
// int main() {
//     const double pi = 3.14;
//     // 'std' = standard library, 'cout' = the object standard output stream, so grabbing cout from std
//     // 'stream' is a sequence of chars, 'standart output' = the console
//     // '<<' is the stream insertion operator
//     std::cout << pi;
//     // and log chaining
//     std::cout << "pi = " << pi;
//     // logs onto same line, so need std::endl
//     std::cout << pi << std::endl;
//     std::cout << "pi = " << pi << std::endl;
//     // or another common use is...
//     std::cout << "first line " << "more words " << std::endl
//               << "start new line " << "right below" << std::endl; 
//     // declaring using namespace at top can make it easier to read
//     cout << "word 1 " << "word 2 " << endl
//          << "word 3 " << "word 4 " << endl;
//     return 0;

// }

// exercise - write code to show total sales, state tax, county tax and total tax on vars provided
// int main() {
//     double sales = 95000;
//     double state_tax = 0.04;
//     double county_tax = 0.02;

//     double state_total = sales * state_tax;
//     double county_total = sales * county_tax;
//     double total_tax = state_total + county_total;

//     cout << "Sales: $" << sales << endl;
//     cout << "State Tax: %" << state_tax * 100 << endl;
//     cout << "County Tax: %" << county_tax * 100 << endl;
//     cout << "Total Tax: $" << total_tax << endl;
// }


// read input fom console
// int main() {
//     cout << "Enter values for x and y: ";
//     double x;
//     double y;
//     // 'cin' is the stream extraction operator, getting the value from user input and can also chain
//     cin >> x >> y;
//     cout << x + y;
//     return 0;
// }


// write program to convert temp from Fahrenheit to Celsius
// int main() {
//     double farenheitTemperature;
//     cout << "Enter temperature in Fahrenheit: ";
//     cin >> farenheitTemperature;
//     double celsiusTemperature = (farenheitTemperature - 32) * 5 / 9;
//     cout << "Temperature in Celsius: " << celsiusTemperature;
//     return 0;
// }


// std library with more functions from include cmath library
// int main() {
//     double result = floor(1.2);
//     cout << result;
//     double result2 = pow(2,3);
//     cout << result2;
//     return 0;    
// }

// write a program to calculate the area of a circle from an inputted radius
// int main() {
//     cout << "Enter radius: ";
//     double radius;
//     double pi = 3.14;
//     cin >> radius;
//     double area = pi * pow(radius,  2);
//     cout << "The circles area is: " << area;
//     return 0;
// }

// types
// int main() {
//     // short - number that takes up 2 bytes
//     // int - number that takes up 4 bytes
//     // long - number that takes up 4 bytes
//     // long long - number that takes up 8 bytes
//     // float - number that takes up 4 bytes
//     // double - number that takes up 8 bytes
//     // long double - number that takes up 16 bytes
//     // char - single character that takes up 1 byte
//     // bool - number that takes up 1 byte
//     return 0;
// }

// types in action 
// int main() {
//     double price = 99.99;
//     float interestRate = 3.67f; //need to add F or compiler will treat as double by default, can be upper or lower
//     long fileSize = 90000L; // same as interestRate but need l or will be treated as integer type 
//     char letter = 'a';
//     bool isValid = true;
//     // can also use auto type which lets the compiler decide
//     auto x = 99.99;
//     auto y = 3.67f;
//     auto z = 90000L;
//     auto a = 'a';
//     auto b = true;

//     // there is also brace initializers, where you can initialize a variable of any type, or leave empty and there will be a basic default value
//     // pretty much dont initialize a variable with no declaration, at least put empty brackets to prevent errors if used with no declaration
//     int number {}; // if cout the number will be initialized to 0
//     int anotherNumber {5}; // if cout the number will be initialized to 5
//     bool isNumber {}; // if cout the number will be initialized to true
//     return 0;
// }


// binary/hex numbers
// int main() {
//     // number 255 as written in binary using 'b'
//     int number = 0b11111111;
//     cout << number;
//     // number 255 written as hexadecimal using 'x'
//     int number2 = 0xff;
//     cout << number2;
//     // unsigned means integer cannot accept negative values
//     unsigned int number3 = 255;
//     cout << number3;
//     // signed means integer can accept negative values
//     signed int number4 = -255;
//     cout << number4;
//     return 0;
// }

// narrowing conversions for numbers is when you want to convert a number to a smaller type(bytes available) which will error out
// int main() {
//     int number = 1'000'000;
//     short another = number;
//     return 0;
// }

// random number generation using cstdlib...random is not so random as same number will be generated but better to use current time to influence the randomness and actually generate a 'random' number - so you need to use library ctime also
// int main() {
//     long elapsedSeconds = time(0); // since Jan 1 1970
//     srand(elapsedSeconds);
//     int number = rand() % 10; // to reduce the number size to int byte size uses modulo
//     cout << number;;
//     return 0;
// }


// program for rolling dice randomly - rolling 2 dice thus 2 random numbers
int main() {
    const short minValue = 1;
    const short maxValue = 6;
    srand(time(0));
    short first = (rand() % (maxValue - minValue + 1)) + minValue;
    short second = (rand() % (maxValue - minValue + 1)) + minValue;
    cout << first << ", " << second;
    return 0;
}


































