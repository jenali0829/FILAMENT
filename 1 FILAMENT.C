#include<stdio.h>
#include<string.h>
main(){
	char a[100],ch;
	int i,frequency=0;
	
	printf("Enter the string:");
	gets(a);
	
	printf("Enter the char whose frequency u want to find:");
	scanf("%c",&ch);
	
	for(i=0; a[i]!='\0'; i++){
		if(ch==a[i])
		++frequency;
	}
	printf("The frequency of %c z %d",ch,frequency);
}
