// MathLibrary.cpp : Defines the exported functions for the DLL.
#include "pch.h"
//#include <utility>
//#include <limits.h>
//#include <iostream>
#include "MathLibrary.h"

// Function to return gcd of a and b  
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

// A simple method to evaluate Euler Totient Function  
int euler_fun(int n)
{
    if (n <= 0)
        throw "Argument must be a natual number";
    int result = 1;
    for (int i = 2; i < n; i++)
        if (gcd(i, n) == 1)
            result++;
    return result;
}