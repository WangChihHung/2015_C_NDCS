/*�ۑ�01F*/
#include <stdio.h>

int main(void)
{
	int a,b,c;
	double d;
	
	printf("�ȖڂP�̓_��-->");
	scanf("%d",&a);
	
	printf("�ȖڂQ�̓_��-->");
	scanf("%d",&b);
	printf("\n");
	
	c=a+b;
	d=(double)(a+b)/2;
	
	printf("�Q�Ȗڂ̍��v:%d\n�Q�Ȗڂ̕���:%lf\n",c,d);
	
	return 0;
}