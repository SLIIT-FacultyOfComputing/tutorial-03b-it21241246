#include <iostream>
using namespace std;

void input(int length, int width);
void print(int length, int width);

// Do not change the main() function
int main() {
   int length = 10, width = 5;
   input(length, width);
   print(length, width);
   return 0;
}

// Do not change the print() function
void print(int length, int width) {
   cout << "Length : " << length 
        << ", Width  : " << width << endl;
}

// Implement the Input Function here
void input(int length, int width){
   cout<<"Enter length : ";
   cin>>length;
   cout<<"Enter width : ";
   cin>>width;
  

  
}