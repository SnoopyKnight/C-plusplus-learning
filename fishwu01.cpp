#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int a;
    float x,y,z,ans;

    cout << "Please enter x, y and z!\n";
    cin >> x >>y>>z;

    cout<<"\n<<Choose one problem! (1-3)\n";
	cout<<"(1)Sum of x,y and z = ?\n";
	cout<<"(2)Mean of x,y and z = ?\n";
	cout<<"(3) (2x-y+2z)^2 = ?\n";
    cin >> a;
if(a==1){
	ans=x+y+z;
}
if(a==2){
	ans=(x+y+z)/3;
}
if(a==3){
	ans=(x*2-y+z*2)*(x*2-y+z*2);
	}

cout<<"Answer:"<<ans;

system("pause");
return 0;
}
