#include<stdio.h>
int main() {
    int a, b, option;
    printf("moi nhap so thu nhat: ");
    scanf("%d", &a);
    printf("moi nhap so thu hai: ");
    scanf("%d", &b);
    do{
    	printf("CALCULATOR\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &option);
        if(option==1){
        	printf("Tong 2 so la: %d\n", a+b); 
		}else if (option==2){
        	printf("Hieu 2 so la: %d\n", a-b);
		}else if (option==3){
			printf("Tich 2 so la: %d\n", a*b);
		}else if (option==4){
			printf("Thuong 2 so la: %d\n", a/b);
		}else if (option==5){
			printf("thoat");
			break; 
		}else{
			printf("lua chon khong hop le\n");
		} 
	}while (option != 5);
    return 0;
}

