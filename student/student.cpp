#include <iostream>
using namespace std;  
class Student{

  public:
      Student(double eng,double mat,double maj);
      ~Student();
      double English(void);
      double Match(void);
      double Major(void);
      double Total(void);
  private:
      double english;
      double match;
      double major;
      double total;      
};	

Student::Student(double eng,double mat,double maj){
      cout<<"Object is be created!"<<endl;
      english=eng;
      match=mat;
      major=maj;
}
Student::~Student(){
      cout<<"Object is be deleced!"<<endl;  
}
double Student::English(){
      return english;
}
double Student::Match(void){
      return match;
}
double Student::Major(void){
      return major;
}
double Student::Total(void){
      total=english+match+major;
      return total;
}

int main(){
   Student student(86,98,84);
   cout<<"student english mark:"<<student.English()<<endl;
   cout<<"student match mark:"<<student.Match()<<endl;
   cout<<"student major mark:"<<student.Major()<<endl;
   cout<<"student total mark:"<<student.Total()<<endl;
   
   return 0;

}


