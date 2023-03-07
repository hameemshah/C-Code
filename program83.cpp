#include <iostream>
#include <cstring>
using namespace std;
class Car {
	private :	
		char name[20];
		char color[10];
		int milage;
		bool lpg;
	public :
	void set (const char name[],const char color[],int milage,bool lpg) {	//set the variables
	strcpy(this->name , name);
	strcpy(this->color, color);
	//this->milage = milage;
	this->lpg = lpg;	
	}
	void display(){ //Display the car details which we got earlier
	cout<<"The name of the car is:"<<name<<endl;
	cout<<"The color of the car is:"<<color<<endl;
	cout<<"The milage of the car is: "<<milage<<endl;
	lpg?cout<<"The car can run on Gas."<<endl:cout<<"The car runs only on petrol."<<endl; 
	cout<<"**********************************************************"<<endl;
	}
};
int main() {
	Car alto;
	alto.set("Alto", "Blue", 20, false);
	Car i10;
	i10.set("i10", "Brown", 25, true);
	alto.display();
	i10.display();
	return 0;
}
