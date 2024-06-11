#include<stdio.h>
#include<string.h>

main(){
	
	char str[] = "Welcome to C-Programming";
	int i, count=0;
	
	for(i=0; str[i]!='\0'; i++){
		
		if(str[i]==' ' && str[i+1]!=' '){
			count++;
		}
	}
	
	printf("Entered String :- %s", str);
	
	printf("\n\nTotal Number of Words From a String Is :- %d", count+1);
	
}
