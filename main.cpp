#include "main.h"

using namespace std;

double square(double d);

void print_square(double d)
{
    cout << "؇" << d << " == " << square(d) << endl;
}

double square(double d)
{
    return d*d;
}

// test square
int main()
{
    auto version {11};
    cout << "C++" << version << " namespace" << endl;    
    
    auto d {3.1415};
    cout << d << " * " << d << " = " << square(d) << endl;
}
