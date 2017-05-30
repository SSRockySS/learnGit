/*include a header file*/
#include<iostream>
#include"Chapter6.h"
int fact(int val)
{
    int ret = 1;
    while(val>1)
	ret *= val--;
    return ret;
}
int abs(int i)
{
    if(i>=0)
	return i;
    else
	return -i;
}
