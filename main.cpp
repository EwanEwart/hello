#include "main.h"

using namespace std;

double square(double d)
{
    return d*d;
}

int main()
{
    auto version {11};
    cout << "C++" << version << " namespace" << endl;    
    
    auto d {3.1415};
    cout << d << " * " << d << " = " << square(d) << endl;
}
