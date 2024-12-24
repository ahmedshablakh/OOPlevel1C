
#include <iostream>
using namespace std;

/*Function Overloding*/
/*
class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }
};
*/

/*  Operator Overloading*/
/*
class Complex {
public:
    double real, imag;

    Complex(double r, double i) : real(r), imag(i) {}

    Complex operator + (const Complex& obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

*/



/*مثال: Function Overriding باستخدام Virtual Functions*/
/*
class Animal {
public:
    virtual void sound() { // وظيفة افتراضية
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override { // استبدال الوظيفة الافتراضية
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows" << endl;
    }
};

    
*/
int main() {


    /*Function Overloding*//*
    Calculator calc;
    cout << "Sum of integers: " << calc.add(5, 3) << endl;
    cout << "Sum of doubles: " << calc.add(5.5, 3.3) << endl;
    */



    /*  Operator Overloading*//*
    Complex c1(2.3, 4.5), c2(1.6, 3.7);
    Complex c3 = c1 + c2; // استخدام المشغل + المفرط
    c3.display();
    */

    /*مثال: Function Overriding باستخدام Virtual Functions*/
    /*
    Animal* animal;  // مؤشر من النوع الأساسي
    Dog dog;
    Cat cat;

    animal = &dog;
    animal->sound(); // تستدعي sound() الخاصة بـ Dog

    animal = &cat;
    animal->sound(); // تستدعي sound() الخاصة بـ Cat
    */
    return 0;
}
