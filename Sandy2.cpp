#include<iostream>
using namespace std;

int main( int argc, const char* argv[] ){
    int i,j;
    const int line = 10 ; 
    for(i=1;i<=line;i++){ 
        for(j=i;j>0;j--){ 
            cout<<"*";
        }
        cout<<"\n";
    }
	system("pause");
}