#include<iostream>
#include<cmath>
using namespace std;
#define F(x) ((x*x*x)-(3*x)-5)
#define G(x) ((3*x*x)-3)
int main(){
     
float x0,x1,x2,f0,f1;
int i=1;
up:
cout<<"Enter initial Guess\n";
cin>>x0;
if(F(x0)>0){
    cout<<"Incorrect Guess try again.\n";
    goto up;
}
else{
f0=F(x0);
f1=G(x0);

do{
    x1 = x0 - (f0/f1);
    f0=F(x1);
    f1=G(x1);
    cout<<"x"<<i<<"="<<x1<<"\tF(x"<<i<<")="<<f0<<"\n";
    x0=x1;
    i++;
}while(fabs(F(x1))>0.00001);

cout<<"\nThe Root of equation is - "<<x1;
}
    return 0;
}