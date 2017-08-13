# include <iostream>
# include <stdlib.h>
# include "Sales_item.h"

int main()
{
	Sales_item total,trans;
	if(std::cin>>total)
	{
		while(std::cin>>trans){
			if(total.same_isbn(trans))
				total+=trans;
			else{
				std::cout<<total<<std::endl;
				total=trans;
			}
			std::cin>>total;
		}
	}
	else
	{
		std::cout<<"No Data?!"<<std::endl;
		return -1;
	}
	system("pause");
	return 0;
}
