#include<iostream>
using namespace std;
int main(){
	int test;
	cout<<"enter no of test cases :"<<endl;
	cin>>test;
	while(test--){
	   int num;
	   cout<<"enter num :"<<endl;
	   cin>>num;
	   int x=5;
	   int count=0;
	   while(num>0){
	   	 count=count+(num/x);
	   	 num=num/x;
	   }
	   cout<<count<<endl;
	}
	return 0;
}
