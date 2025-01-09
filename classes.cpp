//class to create circle and find area.
#include <bits/stdc++.h>
using namespace std;
class Circle{
	private:
		int radius;
	public:
		Circle(int rad){
			radius = rad;
		}
		
		float findArea(){
			return 3.142 * (radius* radius);
		}
		
		float findCircumference(){
		    return 2 * 3.142 * radius;
		}
		
};

int main() {
    Circle* c = new Circle(5);
    cout<<c->findArea()<<endl;
    cout<<c->findCircumference()<<endl;
}