#include <iostream>
#include "stdlib.h"
#include <string>
#include <vector>
#include <cctype>
using namespace std;
int main()
{
	vector<string> svec;
	string str;
	cout<<"Enter words(Enter +Ctrl+Z to end):"<<endl;
	//Ū�J�r���vector
	while(cin>>str)
		svec.push_back(str);
	
	if (svec.size() == 0){
		cout<<"No String?!"<<endl;
		return -1;
	}
	//�Nvector���C�ӳ���ର�j�g
	cout<< "Transformed elements from the vector:"<<endl;
	vector<string>::size_type cnt = 0;
	for(vector<string>::iterator iter = svec.begin() ; iter != svec.end() ; ++iter){
		for(string::size_type index = 0 ; index != (*iter).size() ; ++index)
			if (islower((*iter)[index]))  //������U�Ь�index���p�g
				(*iter)[index] = toupper((*iter)[index]); //toupper �ର�j�g
				cout<< *iter <<" ";
				++ cnt;
			if(cnt % 8 == 0)  //�C��8�Ӧr��X
				cout << endl;
	}
	system("pause");
	return 0;
}