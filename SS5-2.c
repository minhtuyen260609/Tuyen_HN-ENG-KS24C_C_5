#include<stdio.h>
int main(){
	int a = 50;
	int b; 
	int check=0; 
	while(check==0 ){
		printf("moi nhap so:");
		scanf("%d", &b) ;
		if(a>b){
			printf("nho hon so cho truoc\n") ;
		} else if(a<b){
			printf("lon hon so cho truoc\n") ;
		} else{
			printf("chinh xac") ;
			check=1; 
		} 
	} 
	return 0; 
} 
