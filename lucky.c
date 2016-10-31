#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char name[100];
	int luck = 0;
	printf("Enter your name:");
	scanf("%s",name);
	printf("Hello %s\n",name);
	for(int i=0;i<strlen(name);i++){
		name[i] -= 96;
		luck += (int) name[i];
	}
	while(luck > 9){
		luck = luck%10 + (luck%100)/10 + (luck%1000)/100;
	}
	printf("Your Lucky number is: %d\n",luck);
	return 0;
}
