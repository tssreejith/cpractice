
#include<iostream>
#include <cfloat>
using namespace std;
void Epsilon(float e)
{
    float pvalue;



    while ((1+e) != 1)
    {

        pvalue = e;

               e=e/2;
    }


    cout << "Machine Epsilon is : " << pvalue << endl;
}

int main()
{

    Epsilon(0.5);

    return 0;
}
