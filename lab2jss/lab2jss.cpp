#include<iostream>
#include<cmath>
using namespace std;
int main()
{
float x=10, sum=1, term=1, temp=0;// float e=2.718;
int i=0;

while(temp != sum)
{
i++;
term = term * x/i;
temp=sum;
sum=sum+term;
cout << i <<'\t' << term <<'\t'<< sum << endl;
//if(pow(e,10.5)>sum)
//break;
}
cout << "exact value : " << exp((double)x) << endl;
return 0;
}
