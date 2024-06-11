#include<stdio.h>
#include<string.h>

main(){
	
	char str[] = "Hello Good Afternoon";
	int i, j, length=0;
	
	length = sizeof(str)/sizeof(str[0]);
	
	printf("Before Removing All Spaces & Blanks in a String :- %s", str);
	
	for(i=0; i<length; i++){
		
		if(str[i]==' '){
			
			for(j=i; j<length; j++){
				
				str[j]=str[j+1];	
			}
			length--;
		}
	}
	
	printf("\n\nAfter Removing All Spaces & Blanks in a String :- %s", str);
}
