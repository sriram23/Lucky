#include<iostream>
using namespace std;
int main(){
	string name;
	int luck = 0;
	cout << "Enter your name:";
	cin >> name;
	cout << "Hello " << name << endl;
	for(int i=0;i<name.length();i++){
		name[i] = name[i] - 96;
		luck += (int)name[i];
	}
	while(luck > 9){
		luck = luck%10 + (luck%100)/10 + (luck%1000)/100;
	}
	cout << "Your Lucky Number is: " << luck << endl;
	return 0;
}
