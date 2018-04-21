/* Program to calculate rank of string
Precondition - a string of <100 alphabets characters only
Postcondition - rank of the input string
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int fac(int n){
	int ans = 1;
	for(int i=2;i<=n;i++){
		ans=ans*i;
	}
	return ans;
}

int charCount(char *str, char c){
	int ans=0,n=strlen(str);
	for(int i=0;i<n;i++){
		if(str[i]<c)ans++;
	}
	return ans;
}

int findRank(char *str){
	int ans=1,temp=0, n=strlen(str);
	for(int i=0;i<n;i++){
		ans+=charCount(str+(i+1)*sizeof(str[0]),str[i])*fac(n-i-1);
		printf("characters : %d   Fac: %d \n",charCount(str+(i+1)*sizeof(str[0]),str[i]),fac(n-i-1));
	}
	return ans;
}

int main(){
	char str[100];
	scanf("%s",str);
	int n=strlen(str);
	for(int i=0;i<n;i++){
		str[i]=tolower(str[i]);
	}
	printf("Rank : %d \n", findRank(str));
}
