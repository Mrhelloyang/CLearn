#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void func(int a, int b)
{
	printf("a=%d,b=%d\n",a,b);

}
int main()
{
	typedef void FUNC(int, int);//�ȶ�����ͨ�������ͣ��ٶ���ָ�����
	FUNC* p = NULL;
	p = func;
	p(1, 2);
	(* p)(2, 2);
	
	void(*pfunc)(int, int);//ֱ�Ӷ��庯��ָ�����
	pfunc = func;
	pfunc(3,3);

	typedef void (*PARRAY)(int, int);
	PARRAY p = func;
	p(4, 4);
	(*p)(5, 5);
	return 0;
}