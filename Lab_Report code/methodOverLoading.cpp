//4.Write a C++ program to calculate the area of a circle, rectangle, and square using
//method overloading.

#include <iostream>
using namespace std;

class Area{
	public:
		// Area of circle
		float calculate(float radius){
			return 3.14 * radius * radius;
		}
		
		// Area of rectangle
		float calculate(float length, float breath){
			return length * breath;
		}
		
		// Area of square
		int calculate(int side){
			return side * side;
		}
};

int main(){
	Area a;
	float radius, length, breadth;
	int side;
	
	cout <<"Enter radius of circle: ";
	cin >> radius;
	cout << "Area of circle = " << a.calculate(radius) << endl;
	
	cout << "Enter length and breath of rectangle: ";
	cin >> length >> breadth;
	cout << "Area of rectangle = " << a.calculate(length, breadth) << endl;
	
	cout << "Enter side of square: ";
	cin >> side;
	cout <<"Area of square = " << a.calculate(side) << endl;
	
	return 0;
}



