#include<iostream>
#include<cmath>
using namespace std;

#define F(x) ((x*x*x)-(4*x)-9)
 float x0,x1,x2;
int func(float x0,float x1)
{
  int count=1;

  float f0=F(x0);
  float f1=F(x1);
    do
    {
       x2=(x0+x1)/2;
       float f2=F(x2);
        cout<<"Iteration-"<<count<<" x2="<<x2<<" f(x2)="<<f2<<"\n";
        if(f0*f2<0)
        {
            x1=x2;
            f1=f2;
        }
        else
        {
            x0=x2;
            f0=f2;
        }
        count+=1;
    }while(fabs ( F(x2))>0.001);
   
    cout<<"\n\n Approximate root="<<x2; 

}
int main()
{
   cout<<"Enter 2 guesses\n";
   cin>>x0>>x1;

   if(F(x0)*F(x1)>0.0)
    {
        cout<<"Incorrect Guess try again.";
    }
   else
    {
        func(x0,x1);
    }
    return 0;
}
