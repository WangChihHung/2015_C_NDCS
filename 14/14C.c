/*Lesson 14C*/
#include <stdio.h>
#include <string.h>

typedef struct Gakusei
{
	char bango[7];
	char name[20];
}student;

int main(void)
{
	char search[15];
	int score,i,status=0;
	
	student JN00[8]={{"JN0001","�H�R��"},{"JN0002","�_������"},{"JN0003","��{�m�q"},{"JN0004","�c�{���"},
					 {"JN0005","�����O"},{"JN0006","���ܖ�"},{"JN0007","�ێR���a"},{"JN0008","����F��"}};
	
	printf("number,score:");
	gets(search);
	//scanf("%s,%d",search,&score);
	score = (search[7]-'0')*10+(search[8]-'0');
	
	
	for (i=0;i<8;i++){
	
	if(strncmp(&search[0],JN00[i].bango,6)==0)
	{
		printf("%s ",JN00[i].name);
			if(score < 60)
				status = 1;
			else if(score < 70)
				status = 2;
			else if(score < 90)
				status = 3;
			else
				status = 4;
	}
	}
	switch (status)
	{
		case 1:
			printf("fail\n");
			break;
		case 2:
			printf("okay\n");
			break;
		case 3:
			printf("good\n");
			break;
		case 4:
			printf("exellecnt\n");
			break;
		default:
			printf("None");
	}
	
	
	return 0;
}
