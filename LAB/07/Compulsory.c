/*
Program to segrigate 0's on left and ones on the right
Pre-Condition:-  a number n (the length of array)
				 array elements(only 0 and 1)
Post-Condition:- The required array				
*/

#include <stdio.h>

int main(){
	int n,zeroes=0,ones=0,temp;
	printf("Give the length of array:- ");
	scanf("%d",&n);
	int arr[n],reqarr[n];
	printf("Enter the array:- \n");
	for(int i=0;i<n;i++){
		scanf("%d",&temp);
		if(temp==0){
			arr[zeroes]=0;
			zeroes++;
		}
		else{
			ones++;
			arr[n-ones]=1;
		}
	}
	printf("\n Here is the required array:- \n");
	for(int i=0;i<n;i++)printf("%d ",arr[i]);
	printf(" \n");
	return 0;
}
