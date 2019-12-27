#include<iostream>
using namespace std;
class Shape{
  protected:
	double width;
	double height;
  public:
        Shape();
	~Shape();
	void setWidth(double wid);
	void setHeight(double hig);
};
Shape::Shape(){
       cout<<"Object is be created!"<<endl;
}
Shape::~Shape(){
      cout<<"Object is be deleted!"<<endl;
}
void Shape::setWidth(double wid){
     width=wid;
     cout<<"width="<<width<<endl;
}
void Shape::setHeight(double hig){
     height=hig;
     cout<<"height="<<height<<endl;
}
class Rectangle: public Shape{
  public:
       Rectangle();
       ~Rectangle();
       int area();       
};
Rectangle::Rectangle(){
  cout<<"Object is be created"<<endl;
}
Rectangle::~Rectangle(){
  cout<<"Object is be delected"<<endl;
}
int Rectangle::area(){
  return width*height;
}

int main(){
   Shape shape;
   shape.setWidth(8);
   shape.setHeight(9);
   Rectangle rec;
   cout<<"area="<<rec.area()<<endl;
   rec.setWidth(8);
   rec.setHeight(13);
   cout<<"area1="<<rec.area()<<endl;
   return 0;
}
