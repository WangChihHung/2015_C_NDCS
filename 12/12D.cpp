/*�ۑ�12D*/
#include <stdio.h>
#include <string.h>


int main(void)
{
	FILE *FPname;
	char name[30];
	
	FPname = fopen("kadai12D.txt","w");
	if(FPname == NULL)
		return 1;
	
	printf("���O����(�I����END)-->");
	scanf("%s",name);
	
	while((strcmp(name,"END"))!=0)
	{
		fprintf(FPname,"%s\n",name);
		printf("���O����(�I����END)-->");
		scanf("%s",name);
	}
	
	
	fclose(FPname);
	
	return 0;
}
