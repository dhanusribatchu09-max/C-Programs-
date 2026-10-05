#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    // Constructors
    Complex() : real(0.0), imag(0.0) {}
    Complex(double r, double i) : real(r), imag(i) {}

    // Friend declaration for operator+
    friend Complex operator+(const Complex& c1, const Complex& c2);

    // Display function
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

// Friend function definition (outside the class)
Complex operator+(const Complex& c1, const Complex& c2) {
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main() {
    Complex c1(2.5, 3.7);
    Complex c2(1.8, 2.2);

    Complex c3 = c1 + c2; 

    c3.display();          

    return 0;
}