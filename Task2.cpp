#include<iostream>
using namespace std;

int main(){
	int x,y;
	
	cout<<"-*-*-*-*-*-*SIMPLE CALCULATOR-*-*-*-*-*-*\n\n";
	
	cout<<"Enter First Number : ";
	cin>>x;
	
	cout<<"Enter Second Number : ";
	cin>>y;
	
	int choose;
	cout<<"----CHOOSE OPERATION NUMBER----\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n";
	cin>>choose;
	if(choose==1)
	{
		cout<<x<<" + "<<y<<" = "<<x+y<<endl;
	}
	else if(choose==2)
	{
		cout<<x<<" - "<<y<<" = "<<x-y<<endl;
	}
	else if(choose==3)
	{
		cout<<x<<" * "<<y<<" = "<<x*y<<endl;
	}
	else if(choose==4)
	{
		cout<<x<<" / "<<y<<" = "<<x/y<<endl;
	}
	else
	{
		cout<<"Invalid input\n";
	}
	
	cout<<"<<<<<THANKYOU>>>>>\n";
}
