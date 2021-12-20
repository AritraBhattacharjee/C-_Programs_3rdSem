#include<iostream>
#include "inherit.h"

using namespace std;

int main()
{
    teacher tch;
    tch.show();

    tch.person::show();

    tch.employee::show();


    return 0;
}