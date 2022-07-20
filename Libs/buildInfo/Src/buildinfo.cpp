#include "buildinfo.h"

std::string getDate()
{
    return __DATE__;
};

std::string getTime()
{
    return __TIME__;
}