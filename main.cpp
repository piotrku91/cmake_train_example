
#include <iostream>
#include "buildinfo.h"
#include "easycalc.hpp"

int main() 
{
std::cout << getDate() << " " << doOperation(Operation::Add, 2, 2) << std::endl;

}
