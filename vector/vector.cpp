#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
int main(){
   vector<int>obj;
   for(int i=0;i<8;i++){
     obj.push_back(i);
   }
   for(int i=0;i<8;i++){
     cout<<obj[i]<<" ,";
   }
   cout<<"\n"<<endl;
   for(int i=0;i<5;i++){
     obj.pop_back();
   }
   cout<<"\n";
   for(int i=0;i<obj.size();i++){
     cout<<obj[i]<<", ";
   }
   cout<<endl;
   cout<<"this is a vector test"<<endl;
   return 0;
}
