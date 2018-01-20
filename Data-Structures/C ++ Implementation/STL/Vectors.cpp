#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char *argv[]){

   vector<int> v(10);
   cout<<"Capacity: "<<v.capacity();
   cout<<"Size: "<<v.size();
   v.push_back(1);
   v.push_back(2);
   v.push_back(3); 
   cout<<"Size: "<<v.size();
}
