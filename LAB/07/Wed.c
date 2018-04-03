#include <stdio.h>
#include <string.h>

int main(){
	char arr[1000]={};
	int m,len=0,cur=0,parsum[1000]={},zeroes=0,sum=0,max=0,strt=0,end=0;
	scanf("%s",arr);
	scanf("%d",&m);
	len=strlen(arr);
	for(int i=0;i<len;i++){
		cur++;
		if(arr[i]=='0'){
			parsum[zeroes++]=cur;
			sum=sum+cur;
			if(zeroes>m){
				sum=sum-parsum[zeroes-m-1];
			}		
			cur=0;
		}
	}
	parsum[zeroes]=(cur+1);
	cur=parsum[0];
	for(int i=0;i<zeroes;i++){
		cur=cur+parsum[i+1]-1;
		if(i>=m)cur=cur-parsum[i-m];
		if(cur>max){
			max=cur;
			strt=(i-m+1);
			end=i;
		}
		cur++;
	}
	zeroes=-1;
	for(int i=0;i<len;i++){
		if(arr[i]=='0')zeroes++;
		if(zeroes>=strt && zeroes<=end && arr[i]=='0'){
			printf("%d",i);
			if(zeroes<end)printf(", ");
		}
	}
	return 0;
}
