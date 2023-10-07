#include <iostream>
using namespace std;

class Complex {
   private:
    float real;
    float imag;

   public:
    Complex() : real(0), imag(0) {}

    void input() {
        cout << "Enter real and imaginary parts respectively: ";
        cin >> real;
        cin >> imag;
    }

    Complex operator + (const Complex& obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    void output() {
        if (imag < 0)
            cout << endl << "Output Complex number: " << real << imag << "i";
        else
            cout << endl << "Output Complex number: " << real << "+" << imag << "i";
    }
};

int main() {
    Complex a, b, result;

    cout << "First complex number:\n";
    a.input();

    cout << "Second complex number:\n";
    b.input();
    result = a+b;
    result.output();

    return 0;
}
