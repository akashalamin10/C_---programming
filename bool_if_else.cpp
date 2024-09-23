#include<iostream>
using namespace std;
int main(){

int a = 18;
int b;
cout << "Please enter your age" << "\n";
cin >> b;
string name = (b >= a) ? "You are eligible for vote" : "You are not eligible for vote";
cout << name;











    return 0;
}