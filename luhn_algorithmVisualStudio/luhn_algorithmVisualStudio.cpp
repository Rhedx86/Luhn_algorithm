//The Luhn algorithm let us know when a credit card is a real card or no
//author : Rhed_x89

#include <iostream>
using namespace std;

const int digitNumber = 16;


int luhn_algorithm(int parameterArr[digitNumber])
{
    int digitDoubled[digitNumber];
    int everythingAdded = 0;

    //double every second digit counting from the right
    for (int i = digitNumber; i >= 0; i--)
    {
        if (i % 2 == 0)
        {
            digitDoubled[i] = parameterArr[i] * 2;
        }
        else { digitDoubled[i] = parameterArr[i]; }
    }

    //adding everything together 
    for (int i = 0; i < digitNumber; i++)
    {
        everythingAdded += digitDoubled[i];
    }

    return everythingAdded;
}


bool divisible_by_10(int addResult)
{
    bool isDivisibleBy10 = 0;
    if (addResult % 10 != 0) { return isDivisibleBy10; }
    else { return isDivisibleBy10 = 1; }
}


int main()
{
    int creditCard[digitNumber] = { 4,0,0,0,1,2,3,4,5,6,7,8,9,0,1,0 };// <- credit card digit here  
    if (divisible_by_10(luhn_algorithm(creditCard)) != 1) { cout<<"Your card is a valid card !" << endl; }

    return 0;
}
