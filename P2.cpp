#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    float x,c ;
    x = 0.2;
    cout<<"Enter no for root-\n";
    cin>>n;
    c= n/x ;
    int i=1;
    while(x!=c){
        cout << "\nIteration = "<<i<<"\tx = "<<x<<"\tc = "<<c;
      x= 0.5*( x + c );
      c=n/x;
      i++;
    }
    cout<<"The root is="<< x ;
    return 0;

}