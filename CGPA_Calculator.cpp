#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the number of Subjects:-\n";
	cin>>n;
	int a[10];
  cout<<"Criteria for cgpa:-\n";
	cout<<"If you score A+ grade then enter 10\n";
	cout<<"If you score A grade then enter 9\n";
	cout<<"If you score B+ grade then enter 8\n";
	cout<<"If you score B grade then enter 7\n";
	cout<<"If you score C+ grade then enter 6\n";
	cout<<"If you score C grade then enter 5\n";
	
	cout<<"----------------"<<endl;
	cout<<"Enter your grades:-";
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int count=0;

	for(int i=0;i<n;i++){
		if(a[i]==10){
			count=count+10;
		}
		else if (a[i]==9){
			count=count+9;
		}
		else if(a[i]==8){
			count=count+8;
		}
		else if(a[i]==7){
			count=count+7;
		}
		else if(a[i]==6){
			count=count+6;
		}
		else if(a[i]==5){
			count=count+5;
		}
		
		else{
			count=count+0;
		}
	}
	cout<<"Your cg is:-"<<count/n<<endl;
}









