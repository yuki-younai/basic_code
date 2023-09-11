#include "Solider.h"
#include "Gun.h"
#include <iostream>
using namespace std;
void test()
{
    Solider sanduo("xusanduo");
    sanduo.addGun(new Gun("AK47"));
    sanduo.addBulletToGun(20);
    sanduo.fire();
}

int main()
{
    int a=1;
    std::cout << "This is a test string..." << std::endl;
    std::cout << "This is a test string..." << std::endl;
    a=4;
    int b=9;
    test();
    cout<<a<<endl;
    cout<<b<<endl;
    std::cout << "This is a test string..." << std::endl;
    return 0;
}