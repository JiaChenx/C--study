#include<iostream>
using namespace std;

//square operation 

class Rectange
{
public:
	int get_Area()
	{
		return width*heigh;
	}
	int get_Perimeter()
	{
		return 2 * (width + heigh);
	}
	int IsRectangeCross(Rectange r1, Rectange r2)
	{
		if ((r1.y + r1.heigh < r2.y) || (r2.y + r2.heigh < r1.y)
			|| (r1.x + r1.width < r2.x) || (r2.x + r2.width < r1.x))
		{
			cout << "not intersect" << endl;
			return false;
		}
		else
		{
			cout << "intersect" << endl;
			return true;
		}
	}
	Rectange(int x1, int y1, int h, int w)
	{
		x = x1;
		y = y1;
		heigh = h;
		width = w;
	}
	void Zoom(int n)
	{
		width *= n;
		heigh *= n;
	}
private:
	int x, y;
	int width, heigh;
};



int main()
{
	Rectange Myrectange(100, 100, 20, 50);
	Rectange Myrectange2(200, 200, 30, 50);
	cout << Myrectange.get_Area() << endl;
	cout << Myrectange.get_Perimeter() << endl;
	Myrectange.Zoom(3);
	cout << "Zoom:" << 3 << endl << "Area=" << Myrectange.get_Area() << endl;
	cout << "Zoom:" << 3 << endl << "perimeter=" << Myrectange.get_Perimeter() << endl;
	Myrectange.IsRectangeCross(Myrectange, Myrectange2);
	system("pause");
    return 0;
}
