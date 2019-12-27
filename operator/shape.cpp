#include<iostream>
using namespace std;

class Shape{
   public:
	Shape(){
	  cout<<"Object is be created!"<<endl;
	}
	~Shape(){
	  cout<<"Object is be delected!"<<endl;
	}
	void setLength(double len);
	void setHeight(double hei);
	void setWidth(double wid);
	double value();
   Shape operator +(const Shape& s){
        Shape shape;
        shape.length=this->length+s.length;
        shape.width=this->width+s.width;
        shape.height=this->height+s.height;
        return shape;   
       }
   Shape operator -(const Shape& s){
        Shape shape;
        shape.length=this->length-s.length;
        shape.width=this->width-s.width;
        shape.height=this->height-s.height;
        return shape;   
       }
   private:
	double length;
	double height;
	double width;
};

void Shape::setLength(double len){
       length=len;
       cout<<"length is "<<length<<endl;
}
void Shape::setHeight(double hei){
       height=hei;
}

void Shape::setWidth(double wid){
       width=wid;
}

double Shape::value(){
       return length*height*width;
}

int main(){
   Shape shape1,shape2,shape3,shape4;
   shape1.setLength(9.9);
   shape1.setHeight(8.4);
   shape1.setWidth(11.5);
   shape2.setLength(6.7);
   shape2.setHeight(7.8);
   shape2.setWidth(9.4);
   shape3=shape1+shape2; 
   shape4=shape1-shape2;
   cout<<"value1 is "<<shape1.value()<<endl;
   cout<<"value2 is "<<shape2.value()<<endl;
   cout<<"value3 is "<<shape3.value()<<endl;
   cout<<"value4 is "<<shape4.value()<<endl;
   //cout<<"length is "<<this->value()<<endl; 
   return 0;
   
}

