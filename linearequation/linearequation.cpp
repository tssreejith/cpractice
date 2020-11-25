#include<iostream>
using namespace std;
void matrix(float a[50][50],int n)
{
cout<< "The Matrix you have entered is :"<< endl;
for(int i=0;i<n;i++)
{
for(int j=0;j<n+1;j++)
{
cout<<a[i][j]<<'\t';
}
cout<< endl << endl;
}
}


int main()
{
int n;
float op[50];
float num[50][50];
float fact;
cout<< "Enter the number of equations and variable";
cin>>n;
for(int i=0;i<n;i++)
{
for(int j=0;j<n+1;j++)
{
cout<< "Enter the element" << i << j<<'\t';
cin>> num[i][j];
}
}
matrix(num,n);

for(int i=1;i<n;i++)
{
int t=0;
for(int j=0;j<i;j++)
{
fact=num[i][j]/num[t][j];
for(int k=0;k<n+1;k++)
{
num[i][k]=num[i][k]-(fact*num[t][k]);
}
t++;
}
}
cout<<"Value after Row Transformation :" << endl;
matrix(num,n);

op[n-1]=num[n-1][n]/num[n-1][n-1];
//printf("Value of x%d : %f",n,op[n-1]);
for(int i=n-2;i>=0;i--)
{
float sum=0;
for(int j=n-1;j>i;j--)
sum=sum + (num[i][j]*op[j]);
op[i]=(num[i][n]-sum)/num[i][i];
}
for(int i=0;i<n;i++)
cout<<"Value of x"<< i+1 <<'\t'<< "is" <<'\t'<< op[i]<<'\t';
return 0;
}
