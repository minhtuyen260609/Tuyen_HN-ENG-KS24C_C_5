#include<stdio.h>
int main(){
	int n, i;
	int sum=0;
	printf("moi nhap n: ");
	scanf("%d", &n); 
	for(i=1; i <= n; i++){
		sum = sum + i;  
	}
	printf("tong bang: %d\n", sum);
	return 0; 
} 
