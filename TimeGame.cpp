#include <iostream>
#include "time.h"
#include "stdlib.h"
using namespace std;

void printAns(double time){
	if (time == 10.0)
		cout<<"You are God";
	else if (time >= 9.9 && time <=10.1)
		cout<<"You are Superman";
	else if ( (time >= 9.5 && time <9.9) || (time>10.1 && time <=10.5) )
		cout<<"You are Pro";
	else if ( (time>=9.0 && time<9.5) || (time>10.5 && time<=11.0) )
		cout<<"You are human";
	else 
		cout<<"You are idiot";
}
int main(int argc, char *argv[]){
  clock_t  start_time, end_time;
  double total_time = 0;
  cout<<"Press Enter to start  Got The 10!!";
  while(cin.get() == '\n'){
	 cout<<"Start!\nPress Enter to stop";
	 start_time = clock(); /* mircosecond */
	//do something here
	 if (cin.get() == '\n')
			end_time = clock();
	/* CLOCKS_PER_SEC is defined at time.h */
   total_time = (double)(end_time - start_time)/CLOCKS_PER_SEC;
   cout<<"Time : "<<total_time<< "sec \n";
   printAns(total_time);
  }
   return 0;
}
