#include<stdio.h>
#include<string.h>
int main()
{
	FILE*fp=fopen("01.txt","r");
	if(NULL==fp)
	{
		perror("fopen");
		return -1;
	}
	char*p;
	char buf[1024];
	while(1)
	{
		 p=fgets(buf,sizeof(buf),fp);

       	
		if(feof(fp))
		{
		
			break;
		}
		printf("%s",buf);

	}
	
	fclose(fp);	
	return 0;

}
