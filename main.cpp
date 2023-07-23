
#include <iostream>
#include <strstream>
int main()
{
    std::strstream ss;
    ss << "Hi !" << " / " << "Hi !" << " / " << "Hi !" << std::endl;
    std::cout << ss.str() << std::endl;
}


