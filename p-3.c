#include<stdio.h>
#include<string.h>

main(){
	
	char str[100];
	int i;
	
	printf("Enter String To Convert Each Character in Toggle Case :- ");
	scanf("%s", str);
	
	for(i=0; str[i]!='\0'; i++){
		
		if(str[i]>= 'A' && str[i]<='Z'){
			
			str[i]= str[i]+32;
		}else{
			
			str[i]= str[i]-32;
		}
		
	}
	
	printf("\nToggle Case of Each Character in a String :- %s", str);
	
}
