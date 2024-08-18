#include <iostream>
#include <string>
using namespace std;

int main(){
	struct {
		string brand;
		string model;
		int year;
	}myCar1,myCar2;
	
	myCar1.brand = "BMW";
	myCar1.model = "XS";
	myCar1.year = 	1999;
	
	myCar2.brand = "Ford";
	myCar2.model = "Mustang";
	myCar2.year = 	1970;
	
	cout<<myCar1.brand<<" "<<myCar1.model<<" "<<myCar1.year<<endl;
	cout<<myCar2.brand<<" "<<myCar2.model<<" "<<myCar2.year<<endl;
	
}
