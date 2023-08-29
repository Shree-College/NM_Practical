#include<iostream>
#include<cmath>
using namespace std;

#define F(x) ((x*x*x)-(4*x)-9)
 float x0,x1,x2;
int func(float x0,float x1)
{
  int count=1;


    do
    {
       float x2=(x0+x1)/2;
       float f=F(x2);a
        cout<<"Iteration-"<<count<<" x2="<<x2<<" f(x2)="<<f(x2);
        if(F(a)*F(x2)<0)
        {
            x1=x2;
        }
        else
        {
            x0=x2;
           
        }count+=1;
    }
    while(fabs ( F(x2))>0.001);
   
    cout<<"\n\n App root="<<x2; 

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
