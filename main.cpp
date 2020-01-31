#include <iostream>
using namespace std;

int main() {
	
	int list[10];
	
	cout << "Element  -  Value" <<endl;
	
	for(int x = 0; x <=  9; x++){
		list[x] = 99;
		
		cout << x << "   ------   "<< list[x]<< endl;
	}
}
