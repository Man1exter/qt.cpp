#include <iostream>

using namespace std;

int main(){

int i;

for(int i = 0; i < 32; i++){
    cout << 32 + i << " (" << char(32 + i) << ") "
         << 64 + i << " (" << char(64 + i) << ") "
         << 96 + i << " (" << char(96 + i) << ") " << endl;
}
return 0;
}