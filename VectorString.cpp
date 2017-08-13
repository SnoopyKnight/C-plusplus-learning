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
	//讀入字串到vector
	while(cin>>str)
		svec.push_back(str);
	
	if (svec.size() == 0){
		cout<<"No String?!"<<endl;
		return -1;
	}
	//將vector中每個單詞轉為大寫
	cout<< "Transformed elements from the vector:"<<endl;
	vector<string>::size_type cnt = 0;
	for(vector<string>::iterator iter = svec.begin() ; iter != svec.end() ; ++iter){
		for(string::size_type index = 0 ; index != (*iter).size() ; ++index)
			if (islower((*iter)[index]))  //單詞中下標為index為小寫
				(*iter)[index] = toupper((*iter)[index]); //toupper 轉為大寫
				cout<< *iter <<" ";
				++ cnt;
			if(cnt % 8 == 0)  //每行8個字輸出
				cout << endl;
	}
	system("pause");
	return 0;
}