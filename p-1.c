#include<stdio.h>
#include<string.h>

main(){
	
	char str[100];
	int i, j, count = 0;
	
	printf("Enter the String to Check Whether it is Palindrome or Not :- ");
	scanf("%s", str);
	
	for(i=0; str[i]!='\0'; i++);
	
	for(j=0; j<i/2; j++){
		if(str[j]!=str[i-j-1]){
			count=1;
			break;
		}
	}
	
	if(count==0){
		printf("\n%s Is Palindrome String. ", str);
	}else{
		printf("\n%s Is Not Palindrome String. ", str);
	}
}
