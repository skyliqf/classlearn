#include<iostream>
using namespace std;

class Shape{
      public:
	   Shape(double len,double wid,double hei){
	      length=len;
	      width=wid;
	      height=hei;
	   }
	   virtual int area(){
	      cout<<"base area"<<endl;
	      return length*width*height;
	   }
      protected:
	  double length;
	  double width;
	  double height;
};

class Rectangle:public Shape{
     public:
        Rectangle(double len,double wid,double hei):Shape(len,wid,hei){ }
        int area(){
           cout<<"Rectangle area "<<endl;
	   return length*width*height;
        }
};

class Triangle:public Shape{
    public:
        Triangle(double len,double wid,double hei):Shape(len,wid,hei){ }
        int area(){
           cout<<"Triangle area "<<endl;
	   return length*width*height;
        }
};
int main(){
    Shape shape(3,5,6);
    Rectangle rec(2.3,4.5,5.6);
    Triangle tri(5.4,4.9,8.6);
  //  shape=&rec;
   // shape->area();
    //rec.area();
    //tri.area();
    cout<<"base area  "<<shape.area()<<endl;
    cout<<"rec area  "<<rec.area()<<endl;
    cout<<"rec area  "<<tri.area()<<endl;
     cout<<"base area  "<<shape.area()<<endl;
    
    return 0;    
   
}
