#include<iostream>
#include<string>
using namespace std;

int main (){
	system("CLS");
	double firstnum, secondnum, result;
	string operations;
	
	cout<<"\tCALCULATOR\n"<<endl;
	
	cout<<"Enter First Number: ";
	cin>>firstnum;
	cout<<"Choose operation: +, -, *, /:";
	cin>>operations;
	cout<<"Enter Second number:";
	cin>>secondnum;
	
	if (operations=="+") result = firstnum + secondnum;
	if (operations=="-") result = firstnum - secondnum;
	if (operations=="*") result = firstnum * secondnum;
    if (operations=="/") result = firstnum / secondnum;
    
    cout<<"\nAnswer: "<<result<<endl;
    system("PAUSE");
    return main();
}
