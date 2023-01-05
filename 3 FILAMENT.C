#include <stdio.h>
#include<string.h> 
main(){
	char a[100];
	char b[100];
	int z;
	int i;
	char j[100];
	char k[100];
	
	printf("Enter your email:\n");
	scanf("%s",&a);
	
	printf("Enter your password:\n");
	scanf("%s",&b);
	
	z=strcmp(a,b);
	if(z==0){
		if(i==0){
			printf("\nwelcome.login success!");
		}
		else{
			printf("\nwrong password");
		}
		
		
	}
	else{
		printf("\nuse does not exist");
	}
}


