 //Newton-Raphson Method 
#include<iostream>
#include<cmath>
#define f(x)  (3*x-cos(x)-1) // Write the function f(x) in the non-linear equation f(x) = 0
#define df(x) (3+sin(x)) // Write derivative of the function f(x) i.e
using namespace std;
int main()
{ 
float x0,x,Error,ReqError;
int i=0;
cout<<"Enter the value of initial guess i.e. x0 = "; 
cin>>x0;
cout<<"Required Accuracy (in %) = "; 
cin>>ReqError;
do{ x=x0-(f(x0)/df(x0)); Error=fabs(x-x0)*100;
x0 = x;	
i++;
cout<<"\n\n Iteration# ="<<i<<"\t Root="<<x<<"\tError="<<Error; }
while(Error>ReqError);
cout<<"\nThe approximate root of given equation is found to be "<<x<<" upto "<< Error<<"% absolute error after "<<i<<" iterations by NR Method.";
system ("pause");
return 0;
}                   

