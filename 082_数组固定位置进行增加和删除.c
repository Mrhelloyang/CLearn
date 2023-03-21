// 有一个数组，假如元素没有放满，设计一个函数能在指定位置插入指定元素，指定位置删除元素
//int a[15] = { 1, 3, 5, 7, 9, 11, 13 };
//a：数组首元素地址
//pos：指定的位置
//data：需要插入的元素
//size：数组的长度，数组元素的个数，不是数组的大小，增加元素，需要做相应修改
#include<stdio.h>
void insert_array(int* a, int pos, int data, int* size)
{
	for (int i =*size - 1; i >= pos;i--)
	{
		a[i + 1] = a[i];
	}
	a[pos] = data;
	(*size)++;
}
void remove_array(int* a, int pos, int* size)
{
	for (int i = pos; i <*size-1; i++)//这里要用*size；
	{
		a[i] = a[i + 1];
	}
	//a[*size - 1] = NULL;
	(*size)--;
}
void print_array(int* a, int size)//打印数组
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	printf("size=%d\n",size);

}
int main()
{

	int a[15] = { 1, 3, 5, 7, 9, 11, 13 };
	int size = 7; //数组长度，已经放元素的个数

	print_array(a, size); //打印
	insert_array(a, 0, -1, &size); //在0的位置插入-1
	print_array(a, size); //打印

	insert_array(a, 2, 8, &size); //在2的位置插入8
	print_array(a, size); //打印

	insert_array(a, size, 250, &size); //在末尾的位置插入250
	print_array(a, size); //打印

	print_array(a, size); //打印
	remove_array(a, 0, &size); //删除第0个元素
	print_array(a, size); //打印

	return 0;
}
