#include<iostream>
using namespace std;
class plastic{
	public:
		int cp, sp;
		plastic(){
			cp=10;
			sp=12;
		}
		int calc(){
			return sp-cp;
		}
};

int main(){
	plastic p;
	int earn=p.calc();
	cout<<earn<<endl;
	return 0;
}
