/* Program to calculate rank of string
Precondition - a string of words with vovel characters only
Postcondition - rank of the individual words
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

int charCount(char str[], char c){
	int ans=0,n=strlen(str);
	for(int i=0;i<n;i++){
		if(str[i]<c)ans++;
	}
	return ans;
}

int findRank(char str[]){
	//printf("Hello");
	int ans=1,temp=0, n=strlen(str);
	for(int i=0;i<n;i++){
		ans+=charCount(str+(i+1)*sizeof(str[0]),str[i])*fac(n-i-1);
		//printf("characters : %d   Fac: %d \n",charCount(str+((i+1)*sizeof(str[0])),str[i]),fac(n-i-1));
	}
	return ans;
}

void sort(char str[],int n, int len){
	int rank[n];
	char arr[100][100];
	for(int i=0,c=0,k=0;i<=len;i++){
		if(str[i]==' ' || str[i]=='\0' || str[i]=='\n'){
			//printf("hello1");
			arr[k][c]='\0';
			rank[k]=findRank(arr[k]);
			c=0;
			k++;
		}
		else{
			//printf("hello2");
			arr[k][c++]=str[i];
		}
	}
	
/*	for(int i=0;i<n;i++){
		printf("Rank: %d, Word: %s\n",rank[i],arr[i]);
	}
*/
	for(int i=0;i<n;i++){
		int min=i;
		for(int j=i;j<n;j++){
			if(rank[min]>rank[j]){
				min=j;
			}
		}
		int temp=rank[i];
		rank[i]=rank[min];
		rank[min]=temp;
		//printf("Rank: %d, Word: %s\n",rank[i],arr[min]);
		char tempchr[100];
		strcpy(tempchr,arr[min]);
		strcpy(arr[min],arr[i]);
		strcpy(arr[i],tempchr);
	}
	
	for(int i=0;i<n;i++){
		printf("Rank: %d, Word: %s\n",rank[i],arr[i]);
	}
}

int main(){
	int n=1;
	char str[1000];
	scanf("%[^\n]s",str);
	int len = strlen(str);
	for(int i=0;i<len;i++){
		str[i]=tolower(str[i]);
		if(str[i]==' ')n++;
	}
	printf("n: %d \n",n);
	sort(str,n,len);
	return 0;
}
