#include <iostream>

using namespace std;

int main()
{
    float A;
    float B;
    float X;


    cout << "Please enter a value for A: ";
    cin >> A;

    cout << "A=" << A << endl;

    cout << "Please enter a value for B: ";
    cin >> B;

    cout << "B=" << B << endl;

    X = (-B / A);
    cout << "And X=" << X << endl;

}
