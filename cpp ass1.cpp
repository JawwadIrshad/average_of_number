#include <iostream>
using namespace std;

int main(){
	int number;
	 float n,sum;
	
	cout<<"enter the number :";
	cin>>number;
	
	for(int i=1;i<=number;i++){
		
		cout<<"enter the "<<i<<" number : ";
		cin>>n;
		
	sum+=n; 	
	}
	 float avg=sum/number;
	
	cout<<"the average of "<<number<<"is "<<avg<<endl;  
return 0;
}