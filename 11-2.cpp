#include <iostream>
#include <windows.h>

using namespace std;

class Circle
{
public:
    int x, y, r;
    Circle(int a, int b, int c) :x(a),y(b),r(c){}
   void draw()
   {
      HDC hdc = GetWindowDC(GetForegroundWindow());

      Ellipse(hdc, x - r, y - r, x + r, y + r);
   }
    
};
class ColoredCircle :public Circle
{
public :
   string color;
   ColoredCircle(int a, int b, int c, string s) :Circle(a, b, c), color(s) {}
   void draw()
   {
      HDC hdc = GetWindowDC(GetForegroundWindow());
      SelectObject(hdc, GetStockObject(DC_BRUSH));

      if (color == "red") {
         SetDCBrushColor(hdc, RGB(255, 0, 0));

      }
      else if (color == "green") {
         SetDCBrushColor(hdc, RGB(0, 255, 0));

      }
      else if (color == "blue") {
         SetDCBrushColor(hdc, RGB(0, 0, 255));

      }
      else {
         SetDCBrushColor(hdc, RGB(255, 255, 255));

      }

      Ellipse(hdc, x - r, y - r, x + r, y + r);
   }
};


int main()
{
    ColoredCircle c(100, 200, 30,"red");
    c.draw();

    return 0;
}