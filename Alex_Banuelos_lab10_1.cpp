/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
# include <string>
int main()
{

	string Pcolor1,Pcolor2;

//prompts user to enter 2 of 3 primary colors to mix
	cout <<"Enter two promary colors to mix them (red blue or yellow): "<<endl;

	cin>>Pcolor1;
	cin>>Pcolor2;
//displays color based on what user mixed

	if ((Pcolor1 == "red" && Pcolor2 == "blue" ) ||(Pcolor1 == "blue" && Pcolor2 == "red") ) {

		cout <<"mixing "<<Pcolor1<<" and "<<Pcolor2<<" makes purple"<<endl;
	}

	else if ((Pcolor1 == "red" && Pcolor2 == "yellow")||(Pcolor1 == "yellow" && Pcolor2 == "red")) {

	cout <<"mixing "<<Pcolor1<<" and "<<Pcolor2<<" makes orange"<<endl;
}

else if ((Pcolor1 == "yellow" && Pcolor2 == "blue" ) ||(Pcolor1 == "blue" && Pcolor2 == "yellow")) {

	cout <<"mixing "<<Pcolor1<<" and "<<Pcolor2<<" makes green"<<endl;
}

else {
	cout <<"Your input is invalid, please enter red,blue or yellow"<<endl;
}
return 0;
}