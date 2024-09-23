#include<iostream>
using namespace std;
int main(){

int myAge;
int VotingAge = 18;


cout << "Please enter your age: " << "\n";
cin >> myAge;

cout << "You can vote if ans is 1" << "\n";
cout << "You can't Vote if ans is 0" << "\n";

cout << "The ans is: " << (myAge >= VotingAge);












    return 0;
}