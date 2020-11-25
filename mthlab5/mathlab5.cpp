#include<iostream>
#include<math.h>

#define func(x) sin(x)

using namespace std;
int main()
{
 float lowerLimit, upperLimit , output=0.0, stepSize,subInterval, k;
 int i;


  cout<<"Enter lower limit of integration for sin(x): ";
 cin>>lowerLimit;
 cout<<"Enter upper limit of integration for sin(x): ";
 cin>>upperLimit;
cout<<"Enter the stepSize : ";
 cin>>stepSize;

 subInterval = (upperLimit - lowerLimit)/stepSize; /* Finding subintervel */

 for(i=1; i<= subInterval-1; i++)
 {
  k = lowerLimit + i*stepSize;
  output = output +  func(k*(M_PI/180));
 }

 output =stepSize* (output +func(lowerLimit)/2 +func(upperLimit*(M_PI/180))/2);

 cout<< endl<<"Required value of integration is: "<< output <<endl;
return 0;
}
