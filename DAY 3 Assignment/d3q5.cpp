#include<iostream>
#include<algorithm>
using namespace std;

int mod(int a){
	return abs(a);
}

float mod(float a){
	return abs(a);
}

int main(){
	int a;
	float b;
	cin>>a;
	cin>>b;
	cout<<mod(a)<<endl;
	cout<<mod(b)<<endl;
	return 0;
}
