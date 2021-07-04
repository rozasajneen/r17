#include <iostream>
using namespace std;

class Rectangle
{
	private :
		float length;
		float width;
		
	public :
		
		bool ok = true;
		
		Rectangle(float l=1.0, float w=1.0)
		{
			if (((l < 1.0) || (l >= 20.0)) || ((w < 1.0) || (w >= 20.0)))
			{
				cout << "Input not within the limit." << endl;
				
				ok = false;
				return;
			}
			
			this->length = l;
			this->width = w;
		}
		
		float getLength()
		{
			float tl = 13.0;
			float tw = 7.0;
			
			if (((tl < 1.0) || (tl >= 20.0)) || ((tw < 1.0) || (tw >= 20.0)))
			{
				cout << "Input not within the limit." << endl;
				
				ok = false;
				return;
			}
		}
		
		void setValue()
		{
			this->length = tl;
			this->width = tw;
		}
		
		void area()
		{
			if (!ok)
			{
				return;
			}
			
			cout << "Area of this rectangle : " << (this->length * this->width) << endl;
		}
		
		void perimeter()
		{
			if (!ok)
			{
				return;
			}
			
			cout << "Perimeter of this rectangle : " << (2 * (this->length + this->width)) << endl;
		}
};

int main()
{
	cout << "The above class can calculate the area and perimeter of rectangles with sides within 1-20 cm." << endl << endl;
	
	Rectangle r1;
	
	r1.area();
	r1.perimeter();
	
	cout << endl;
	
	Rectangle r2(10, 5);
	
	r2.area();
	r2.perimeter();
	
	cout << endl;
	
	Rectangle r3(52, 67);
	
	r3.area();
	r3.perimeter();
	
	cout << endl;
	
	Rectangle r4;
	
	r4.getValue();
	r4.setValue();
	
	r4.area();
	r4.perimeter();
	
	return 0;
}
