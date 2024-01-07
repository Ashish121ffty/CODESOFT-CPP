#include <iostream>

using namespace std;
float add(float x, float y) {
    return x + y;
}
float subtract(float x, float y) {
    return x - y;
}
float multiply(float x, float y) {
    return x * y;
}
float divide(float x, float y) {
    if (y != 0) {
        return x / y;
    } else {
        cout << "Error: Cannot divide by zero." << endl;
        return 0; 
    }
}
int main() {
    float num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Select operation:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    char choice;
    cout << "Enter choice (1/2/3/4): ";
    cin >> choice;
    float result;
    switch (choice) {
        case '1':
            result = add(num1, num2);
            break;
        case '2':
            result = subtract(num1, num2);
            break;
        case '3':
            result = multiply(num1, num2);
            break;
        case '4':
            result = divide(num1, num2);
            break;
        default:
            cout << "Invalid input. Please enter a valid choice (1/2/3/4)." << endl;
            return 1; 
    }
    cout << "Result: " << result << endl;

    return 0;
}