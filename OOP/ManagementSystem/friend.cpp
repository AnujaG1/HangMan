#include<iostream>
using namespace std;
class Rectangle {
  private:
  double length;
  double width;
  double height;
  public:
  Rectangle(double l, double w):length(l), width(w){};
  Rectangle(double l, double w, double h):length(l),width(w),height(h){};
   friend double calculateArea(Rectangle r);
   friend double calculatePerimeter(Rectangle r);
   friend double calculateVolume(Rectangle r);
   friend int isEqual(Rectangle r, Rectangle r1);
    friend int is_Equal(Rectangle a, Rectangle a1);
};
double calculateArea(Rectangle r)
{
return r.length*r.width;
}
double calculatePerimeter(Rectangle r)
{
  return (2*(r.length+r.width));
}
double calculateVolume(Rectangle a)
{
  return a.length*a.width*a.height;
}
int isEqual(Rectangle r, Rectangle r1)
{
double area1 = calculateArea(r);
double area2 = calculateArea(r1);
cout<<"The area of rect1 is : "<<area1<<endl;
cout<<"The area of rect2 is : "<<area2<<endl;
if(area1 == area2)
{
  cout<<"True"<<endl;
}
else{
  cout<<"False"<<endl;
}
double perimeter1 = calculatePerimeter(r);
double perimeter2 = calculatePerimeter(r1);
cout<<"The perimeter of rect1 is : "<<perimeter1<<endl;
cout<<"The perimeter of rect2 is : "<<perimeter2<<endl;
if (perimeter1 == perimeter2)
{
  cout<<"True"<<endl;

}
else{
  cout<<"False"<<endl;
}
return 0;
}
int is_Equal(Rectangle a, Rectangle a1)
{
double vol1 = calculateVolume(a);
double vol2 = calculateVolume(a1);
cout<<"The volume of rect1 is "<<vol1<<endl;
cout<<"The volume of rect2 is "<<vol2<<endl;
if(vol1==vol2)
{
  cout<<"True"<<endl;
}
else
{
  cout<<"False"<<endl;
}
return 0;
}
int main()
{
  double l, w,h, L,W,H;
  cout<<"Enter length and width and heilght: ";
  cin>> l>>w>>h;
   cout<<"Enter length and width and Height: ";
  cin>> L>>W>>H;
  Rectangle r(l,w);
  Rectangle r1(L,W);
  Rectangle a(l,w,h);
  Rectangle a1(L,W,H);
  isEqual(r, r1);
  is_Equal(a,a1);
  return 0;
}
