/*
	Program to check Palindrome
	Precondition string having maximum 100 characters
	Postcondition Palindromes
*/
#include <stdio.h>
#include <string.h>

int main(){
	char str[100],palin[10000],spl[10000];
	scanf("%s",&str);
	int par, len = strlen(str), pal=0,spal ,i, j, start, end, counter=0, scot=0;
	
	for(i=0;i<len;i++){
		
		for(j=i+1;j<len;j++){
			pal=0;
			par = j-i+1;
			for(start=i,end=j; start<end; start++,end--){
				if(str[start]!=str[end]){
					pal=0;
					break;
				}
				else{
					pal=1;
				}
			}
			
			if(pal==1){
				spal=1;
				if(counter!=0){
					palin[counter++]=',';
					palin[counter++]=' ';
				}
				for(int temp=i;temp<=j;temp++){
					palin[counter++]=str[temp];
					if( par > 3 && temp > i ){
						if(str[temp] != str[temp-1]) spal=0;
					}
				}
				
				if(spal==1){
					if(scot!=0){
						spl[scot++]=',';
						spl[scot++]=' ';
					}
					for(int temp=i;temp<=j;temp++){
						spl[scot++]=str[temp];
					}
				}
			}
				
			
		}
		
	}
	
	printf("The palindromes in the string are %s \n",palin);
	printf("The special palindromic substrings are %s \n",spl);

	return 0;
}
