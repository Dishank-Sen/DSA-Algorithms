#include<iostream>
using namespace std;

struct complex {
    float realPart;
    float imagPart;

    void assign(float realPart, float imagPart) {
        this->realPart = realPart;
        this->imagPart = imagPart;
    }

    complex Add_cmplx(complex c1, complex c2) {
        complex c3;
        c3.assign(c1.realPart + c2.realPart, c1.imagPart + c2.imagPart);
        return c3;
    }

    complex Mult_cmplx(complex c1, complex c2) {
        complex c3;
        c3.assign(
            (c1.realPart * c2.realPart) - (c1.imagPart * c2.imagPart),
            (c1.realPart * c2.imagPart) + (c1.imagPart * c2.realPart)
        );
        return c3;
    }

    complex Div_cmplx(complex c1, complex c2) {
        complex c3;
        c3.assign(
            (c1.realPart * c2.realPart + c1.imagPart * c2.imagPart),
            (c1.imagPart * c2.realPart - c1.realPart * c2.imagPart)
        );

        float denominator = c2.realPart * c2.realPart + c2.imagPart * c2.imagPart;
        c3.realPart /= denominator;
        c3.imagPart /= denominator;
        return c3;
    }

    complex Negate(complex c1) {
        complex c2;
        c2.assign(c1.realPart, -c1.imagPart);
        return c2;
    }

    void show() {
        cout << this->realPart << " + " << this->imagPart << "i" << endl;
    }
};

int main() {
    complex c1, c2, c3;
    c1.assign(2, 3);
    c2.assign(5, -6);
    
    c3 = c3.Add_cmplx(c1, c2);
    c3.show();
    
    c3 = c3.Mult_cmplx(c1, c2);
    c3.show();
    
    c3 = c3.Div_cmplx(c1, c2);
    c3.show();
    
    c3 = c3.Negate(c1);
    c3.show();
    
    return 0;
}
