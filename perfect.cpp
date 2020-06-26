#include<iostream>
using namespace std;
int main(){
	int a,b,c=0;
	cin>>a;
	for(int i=1;i<a;i++){
		if((a%i)==0){
			b=i;
				}
		c+= b;
		}
		if(c==a){
			cout<<a<<" "<<"is a perfect number"<<endl;
		}
		else{
			cout<<a<<" "<<"is not a perfect number"<<endl;
		}
		return 0;
}
