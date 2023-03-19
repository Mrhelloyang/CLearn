#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void rand_sum(int*a,int n)
{
	srand((unsigned int)time(NULL));//需要头文件<stdlib.h>和<time.h>
	for(int i=0;i<10;i++)
	{
		*(a+i)=rand()%100;
	}
        for(int i=0;i<10;i++)
        {
                printf("%d ",a[i]);
        }
	printf("\n");
}
void sort_array(int *a,int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])//与冒泡排序相似只不过先找最小的数
			{
				int tmp;
				tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}	
		}
	
	}
	for(int i=0;i<10;i++)
        {
                printf("%d ",a[i]);
        }
}
int main()
{
	int a[10];
	int n=sizeof(a)/sizeof(*a);
	rand_sum(a,n);
	sort_array(a,n);
	return 0;
}
