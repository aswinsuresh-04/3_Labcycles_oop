#include <iostream>
using namespace std;

class Division {
    private:
        int numerator, denominator;
    public:
        void input() {
            cout << "Enter the numerator: ";
            cin >> numerator;

            cout << "Enter the denominator: ";
            cin >> denominator;
        }

        float divide() {
            if (denominator == 0) {
                throw "Cannot Divide By Zero!!!";
            }
            return (float)numerator / denominator;
        }
};

int main() {
    Division d;

    try {
        d.input();
        float result = d.divide();
        cout << "Result of division: " << result << endl;
    }
    catch (const char* msg) {
        cerr << "Error!!!" << msg << endl;
    }

    return 0;
}
