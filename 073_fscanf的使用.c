#include<stdio.h>
int main()
{	FILE*fp=fopen("4.txt","r");
	if(NULL==fp)
	{
	
		perror("fopen");
		return -1;
	}
	int ret;
	int a; 
	ret=fscanf(fp,"%d\n",&a);
	printf("%d,%d\n",ret,a);
	
	ret=fscanf(fp,"%d\n",&a);
        printf("%d,%d\n",ret,a);
	//a保存20；	
	ret=fscanf(fp,"%d\n",&a);
        printf("%d,%d\n",ret,a);
        
	ret=fscanf(fp,"%d\n",&a);
        printf("%d,%d\n",ret,a);

	fclose(fp);


	return 0;
}
