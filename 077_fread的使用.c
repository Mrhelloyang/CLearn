#include<stdio.h>
struct Student
{
	int score;
	char name[50];
	int age;

};
int main()
{
	FILE*fp=fopen("7.txt","r");
	if(NULL==fp)
	{
		perror("fopen");
		return -1;
	
	}
	int ret;
	int i;
	struct Student a[10];
	while(1)
	{
		ret=fread((a+i),sizeof(*a),1,fp);
		printf("ret=%d\n",ret);
		if(ret==0)
		{
			break;
		}
		i++;
	}
	for(int j=0;j<i;j++)
	{
		printf("%d,%s,%d\n",a[j].score,a[j].name,a[j].age);
	}
	fclose(fp);
	return 0;
}
