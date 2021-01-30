#include <iostream>

using namespace std;


int dodawanie( int a, int b, int c){
a += 25;
b *= 10;
c /= 2;

cout << a << endl;
cout << b << endl;
cout << c << endl;

return a + b + c;
}

int main(){
cout << dodawanie(10,15,20) << endl;
}