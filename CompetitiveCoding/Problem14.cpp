#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle
{
public:
      int width;
      int height;
    /* Rectangle()
     {
         cin>>width>>height;
     } */
     void display()
     {
         cout<<width<<" "<<height<<endl;
     }
};
class RectangleArea : public Rectangle
{
public:
      void read_input()
      {
           cin>>width>>height;
      }
      void display()
      {
          cout<<width*height<<endl;
      }
};
int main()
{
    RectangleArea r_area;
    r_area.read_input();
    r_area.Rectangle::display();
    r_area.display();
    return 0;
}
