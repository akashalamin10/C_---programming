#include <iostream>
#include <string>
using namespace std;
int main(){
int i;
int b[4] = {2, 3, 5, 7};

int length = sizeof(b) / sizeof(b[0]);

cout << length << "\n";
string a[30] = {"Akash", "siam", "Rashidul", "Anzu"};

for(i = 0; i < 4; i++){
    
    cout << b[i] << "\n";

}
cout << sizeof(b);











    return 0;
}