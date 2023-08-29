#include<iostream>
#include<cmath>
#define f(x) ((x*x*x)-x-1)
using namespace std;
int main()
{

    float a,b,c,root,f2,f1,f0;
    int i=1;
   float e=0.0001;
      up:
      cout<<"Enetr 2 guesses-\n";
      cin>>a>>b;
      f0=f(a);
      f1=f(b);
   if(f0*f1>0)
   {
    cout<<"Invlid Input\n";
    goto up;
   }
    do
    {
        c = a - ((a-b)*f0/(f0-f1));
        f2=f(c);
        cout<<"Iteration = "<<i<<" x0= "<<a<<" x1= "<<b<<"  x2= "<<c<<"  f(x2)="<<f2<<"\n";
       
        if(f0*f2<0)
        {
            b=c;
            f1=f2;
        }
        else if(f1*f2<0)
        {
            a=c;
            f0=f2;
        }
         i++;
    }while(fabs(f2)>e);

    cout<<"\nRoot is -  "<<c;
   return 0;
}