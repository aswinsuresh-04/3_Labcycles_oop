#include<iostream>
#include<limits>

using namespace std;

template <class T>
class Calculator {
private:
    T num1, num2;
public:
    Calculator(T n1, T n2) {
        num1 = n1;
        num2 = n2;
    }
    T add() {
        return num1 + num2;
    }
    T subtract() {
        return num1 - num2;
    }
    T multiply() {
        return num1 * num2;
    }
    T divide() {
        if (num2 == 0) {
            throw "Error: division by zero";
        }
        else {
            return num1 / num2;
        }
    }
};

template <class T>
void getInput(T& num) {
    while (true) {
        if(cin >> num){
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            break;
        }
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a valid number: ";
    }
}

int main() {
    int intNum1, intNum2;
    double doubleNum1, doubleNum2;

    cout << "Enter two integer values: ";
    getInput(intNum1);
    getInput(intNum2);
    Calculator<int> intCalc(intNum1, intNum2);

    cout << "Enter two double values: ";
    getInput(doubleNum1);
    getInput(doubleNum2);
    Calculator<double> doubleCalc(doubleNum1, doubleNum2);

    cout << "Integer calculations:" << endl<<endl;
    cout << "Addition: " <<"        "<< intCalc.add() << endl;
    cout << "Subtraction: " <<"     "<< intCalc.subtract() << endl;
    cout << "Multiplication: " <<"  "<< intCalc.multiply() << endl;
    try {
        cout << "Division: " <<"        "<< intCalc.divide() << endl;
    }
    catch (const char* error) {
        cout << error << endl;
    }

    cout << "Double calculations:" << endl<<endl;
    cout << "Addition: " <<"        "<< doubleCalc.add() << endl;
    cout << "Subtraction: " <<"     "<< doubleCalc.subtract() << endl;
    cout << "Multiplication: " <<"  "<< doubleCalc.multiply() << endl;
    try {
        cout << "Division: " <<"        "<< doubleCalc.divide() << endl;
    }
    catch (const char* error) {
        cout << error << endl;
    }

    return 0;
}
