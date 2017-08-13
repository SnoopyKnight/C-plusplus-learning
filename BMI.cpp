# include <iostream >
# include <string>
#include <stdlib.h>
using std::cin;
using std::cout;
using std::endl;
int main()
{
	std::string ID;
	double cm,m,kg,BMI;
	cout << "Enter your student number: " ;
	cin >> ID ;
	cout << "\n<<Hello, \"" <<ID <<"\""<< " !>>\n";
	cout << "Enter your height and weight!\n" ;
	cin >> cm >> kg ;
	m = cm*1.0/100;
	BMI = kg/(m*m) ;
	cout<< "\nYour BMI value is : ";
	cout<<BMI<<endl;
	
	if(BMI<18.5)
		cout<<"you are too thin!";
	if(BMI>22.5)
		cout<<"you are too heavy!";
	system("pause");
	return 0;
}