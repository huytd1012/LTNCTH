/*Trong hệ tọa độ decartes, cho ba điểm p1(x1,  y1),  p2(x2, y2), p3(x3,y3) thỏa mãn lập thành tam giác t.

Cho một điểm p(x, y) bất kỳ. Tính tổng khoảng cách từ p đến các đỉnh của tam giác t. (Các tọa độ có giá trị nguyên)

Input:

x1 y1 x2 y2 x3 y3 x y

Output:

Giá trị khoảng cánh từ p đến các đỉnh t
*/

#include <iostream>
#include <math.h>
using namespace std;

struct Point{
    double x,y;
    Point( double x_ = 0, double y_ = 0 )
    {
        x = x_;
        y = y_;
    }
};

struct Triangle{
	Point a,b,c;
	Triangle ( Point a1, Point b1, Point c1 )
	{
		a = a1;
		b = b1;
		c = c1;
	}
	double sumDistance(Point t)
	{
		return ( sqrt((a.x-t.x)*(a.x-t.x)+(a.y-t.y)*(a.y-t.y)) + 
				sqrt((b.x-t.x)*(b.x-t.x)+(b.y-t.y)*(b.y-t.y)) +
				sqrt((c.x-t.x)*(c.x-t.x)+(c.y-t.y)*(c.y-t.y)) );
	}
};

int main(){
    // CHÚ Ý: Sinh viên không được thay đổi nội dung hàm main
    // Chương trình thay đổi hàm main sẽ không được tính điểm dù đúng tất cả các test
    int x1, y1, x2, y2, x3, y3, x, y;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x >> y;

    Point p1(x1, y1);
    Point p2(x2, y2);
    Point p3(x3, y3);
    Triangle t(p1, p2, p3);

    Point p(x,y);

    cout << t.sumDistance(p) << endl;

    return 0;
}
