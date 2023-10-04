#include<iostream>
using namespace std;
int main(){
	int ages[]={4200,8500,1000,1300};
	int oldest=ages[0];
	int i;
	for(i=1;i<4;i++){
		if(ages[i]>oldest){
			oldest=ages[i];
		}
	}
	cout<<oldest<<endl;
	return 0;
}
