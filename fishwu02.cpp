#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
 int a,x,y;
 cout  <<"Please enter a number (>1):";
 cin >> a;
 if(a>1){
    cout <<"Prime numbers <= \ "<<a<<" \ are:\n";
    for(x=1;x<=a;x++){
        for(y=2;y<=x;y++){
            if (x==y){
                cout<<x<<"\ ";
                }
            else if(x%y==0){
                break;
                }
        }
       }
  }
if(a==1){
        cout <<"error!";
    }
 system("pause");
 return 0;
}