# include <iostream>
# include <vector>
# include "stdlib.h"
using namespace std;

int main()
{
	vector<int> ivec;
	int ival;
	cout<<"Enter numbers:" <<endl;
	while (cin>>ival)   //Ū�J�ƾڨ�vector
		ivec.push_back(ival);
	if(ivec.size() == 0){
		cout<<"No element?!" << endl;
		return -1;
	}

	cout<<"Sum of each pair of counterpart elements in the vector:"<<endl;
	vector<int>:: size_type cnt = 0;
	vector<int>::size_type first = 0;
	vector<int>::size_type last = ivec.size()-1 ;
	for (vector<int>::size_type first = 0,last = ivec.size()-1 ; first < last ; ++first,--last){ //�p�⭺���t�露�����M�ÿ�X
		cout<< ivec[first] + ivec[last] << " ";
		++cnt;
		if (cnt % 6 == 0) //�C���X6�өM
			cout << endl;
	}
	if(first == last)
		cout << endl << "The center element is not been summed "<<"and its value is "<< ivec[first] <<endl;
	system("pause");
	return 0;
}