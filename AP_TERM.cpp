#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
int a,d,n,i,nth;
cout<<"PROGRAM TO CALCULATE THE NTH TERM OF AP SERIES\n";
cout<<"ENTER FIRST TERM OF THE AP  SERIES\n:";
cin>>a;
cout<<"ENTER COMMON DIFFERENCE OF THE AP SERIES\n";
cin>>d;
cout<<"ENTER THE NUMBER OF TERMS IN SERIES";
cin>>n;
nth=a+(n-1)*d;
for(i=a;i<nth;i=i+d){
cout<<i<<endl;}

    return 0;
}