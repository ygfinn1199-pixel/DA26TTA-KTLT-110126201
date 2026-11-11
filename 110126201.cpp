#include <stdio.h>

int main() {
	double a,b;
	printf("Nhap a: ");
	scanf("%lf", &a);
	printf("Nhap b: ");
	scanf("%lf", &b);
	
	double c,d,e,f;
	 c=a+b;
	 d=a-b;
	 e=a*b;
	 f=a/b;
	
	printf("\nTong %.2lf + %.2lf = %.2lf ", a, b, c);
	printf("\nHieu %.2lf - %.2lf = %.2lf", a, b, d);
	printf("\nTich %.2lf x %.2lf = %.2lf", a, b, e);
	printf("\nThuong %.2lf : %.2lf = %.2lf", a, b, f);
	
	return 0;
	}
	
	
