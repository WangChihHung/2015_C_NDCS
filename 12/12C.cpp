/*�ۑ�12C*/
#include <stdio.h>
#include <string.h>
int main(void)
{
	char input[20],str[200];
	//char passname[100]="Z:\\c1\\ensyu\\12\\";
	FILE *FPkadai;
	
	printf("�t�@�C��������-->");
	scanf("%s",input);
	//strcat(passname,input);
	
	FPkadai = fopen(input,"r");
	if (FPkadai == NULL)
	{
		printf("�G���[\n");
		return 1;
	}
	while((fgets(str,200,FPkadai))!=NULL)
	{
		printf("%s",str);
	}
	
	fclose(FPkadai);
	
	return 0;
}