#include <iostream>
using namespace std;

gcd(int a, int b){
	if(b==0){
		return a;
	}
	else 
	return gcd(b, a % b);
}

int main(){
	int a,b;
	while(true){
		int choice;
		cout<<"Enter 1 for continue or 0 for exit: ";
		cin>>choice;
		
		if(choice==1){
			cout<<"Enter first number: ";
			cin>>a;
			cout<<"Enter second number: ";
			cin>>b;
		cout<<"The GCD of the given numbers is: "<<gcd(a,b)<<endl;
		}
		
		else if(choice==0){
			exit(0);
		}
	}
}
