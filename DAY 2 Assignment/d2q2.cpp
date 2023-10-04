#include<iostream>
using namespace std;
class bus{
	public:
		int capacity;
		bus(int capacity){
			this->capacity=capacity;
		}
		int calc(int n){
			return capacity*n;
		}
};

int main(){
	int capacity=48, n=3;
	bus b(capacity);
	int total=b.calc(n);
	cout<<total<<endl;
	return 0;
}
