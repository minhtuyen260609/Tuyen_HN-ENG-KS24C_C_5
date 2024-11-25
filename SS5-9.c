#include<stdio.h>
int main() {
	int a, b, c, option; 
    do{
    	printf("MENU\n");
        printf("1. Nhap 3 so\n");
        printf("2. Tong 3 so\n");
        printf("3. Trung binh cong 3 so\n");
        printf("4. So nho nhat\n");
        printf("5. So lon nhat\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &option);
        if(option==1){
    		printf("moi nhap so thu nhat: ");
    		scanf("%d", &a);
    		printf("moi nhap so thu hai: ");
    		scanf("%d", &b);
    		printf("moi nhap so thu ba: ");
    		scanf("%d", &c); 
		}else if (option==2){
        	printf("Tong 3 so la: %d\n", a+b+c);
		}else if (option==3){
			printf("Trung binh cong 3 so la: %.2f\n", (a+b+c)/3.0);
		}else if (option==4){
			if(a <= b && a <= c) {
                    printf("So nho nhat la: %d\n", a);
                } else if(b <= a && b <= c) {
                    printf("So nho nhat la: %d\n", b);
                } else {
                    printf("So nho nhat la: %d\n", c);
                }
		}else if (option==5){
			 if(a >= b && a >= c) {
                    printf("So lon nhat la: %d\n", a);
                } else if(b >= a && b >= c) {
                    printf("So lon nhat la: %d\n", b);
                } else {
                    printf("So lon nhat la: %d\n", c);
                }
		}else if (option==6){
			printf("thoat");
			break;
		}else{
			printf("lua chon khong hop le\n");
		}
		} while (option != 6);
    return 0;
}

