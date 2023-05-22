#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
	int s,i;
	int array[100];
    printf("Please enter the size of array:");
    scanf("%d",&s);
    
    printf("Please enter array elements:");
    for(i=0;i<s;i++){
    	scanf("%d",&array[i]);
	}
	
	int k,t;
	for(i=0;i<s-1;i++){
		for(k=0;k<s-i-1;k++){
			if (array[k]>array[k+1]){
			t=array[k];
			array[k]=array[k+1];
			array[k+1]=t;	
			}
		}
	}
	printf("Bubble Sort Array =");
	for(i=0;i<s;i++){
		printf("%d ",array[i]);
	}
	
	
	
    
	return 0;
}
