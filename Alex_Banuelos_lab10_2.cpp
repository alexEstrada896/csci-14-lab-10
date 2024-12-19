/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
using namespace std;
#include <iostream>
# include <string>
int main()
{
	string runner1,runner2,runner3;
	double runnerTime1,runnerTime2,runnerTime3;
//asks user for runner names and times
	cout <<"What is the name of runner 1: "<<endl;
	cin>> runner1;
	cout<<"What is their time (in seconds): "<<endl;
	cin >> runnerTime1;

	cout <<"What is the name of runner 2: "<<endl;
	cin>> runner2;
	cout<<"What is their time (in seconds): "<<endl;
	cin>>runnerTime2;

	cout <<"What is the name of runner 3: "<<endl;
	cin>> runner3;
	cout<<"What is their time (in seconds): "<<endl;
	cin>>runnerTime3;
//displays which runner came in first second and third
//displays situations when runner 1 is first place
//checks for the user using posotive numbers	
if(runnerTime1 > 0 && runnerTime2 > 0 && runnerTime3 > 0){	
	
	if ((runnerTime1 > runnerTime2) && (runnerTime1 > runnerTime3)) {
		if (runnerTime2 > runnerTime3) {
			cout<<runner1<<" came in first place,"<<runner2<<" came in second place "<<runner3<<" came in third place "<<endl;
		}
		else {
			cout<<runner1<<" came in first place,"<<runner3<<" came in second place "<<runner2<<" came in third place "<<endl;
		}
	}
//displays situations when runner 2 is first place
	else if ((runnerTime2 > runnerTime1) && (runnerTime2 > runnerTime3)) {
		if (runnerTime1 > runnerTime3) {
			cout<<runner2<<" came in first place,"<<runner1<<" came in second place "<<runner3<<" came in third place "<<endl;
		}
		else {
			cout<<runner2<<" came in first place,"<<runner3<<" came in second place "<<runner1<<" came in third place "<<endl;
		}
	}

//displpays situations if runner 3 is first place
	else if ((runnerTime3 > runnerTime1) && (runnerTime3 > runnerTime2)) {
		if (runnerTime1 > runnerTime2) {
			cout<<runner3<<" came in first place,"<<runner1<<" came in second place "<<runner2<<" came in third place "<<endl;
		}
		else {
			cout<<runner3<<" came in first place,"<<runner2<<" came in second place "<<runner1<<" came in third place "<<endl;
		}
	}




}
else 
{
    cout <<"Please enter numbers that are positive"<<endl;
}












	return 0;
}