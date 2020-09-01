//correct
#include <iostream>
#include <cmath>


using namespace std;

class Power
{
public:
    int realn1 = 2;
    int realn2 = 3;

    void set()
    {

        cout <<  "enter 2 numbers for exponentiation\n" << endl;
        cin >> realn1;
        cin >> realn2;
        cout <<  "\n" << "your enter " << realn1 << " and " << realn2 << "\n" << endl;

    }
    void calculate()
    {

        cout << "result is " << pow(realn1, realn2) << endl;
    }
};

int main()
{
    Power firstpower;
    firstpower.realn1 = 3;
    firstpower.realn2 = 4;
    firstpower.set();
    firstpower.calculate();
    return 0;
}
