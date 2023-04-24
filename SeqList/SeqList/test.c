#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"
#include <stdio.h>
void test2() {
	SL sl;
	sl.a = NULL;
	SLInit(&sl);
	/*for (size_t i = 0; i < 10; i++)
	{
		SLPushBack(&sl, i);
	}*/
	SLPushFront(&sl, 100);
	SLPushFront(&sl, 101);
	SLPushFront(&sl, 102);
	SLPushFront(&sl, 103);
	//SLPopBack(&sl);
	SLPopFront(&sl);
	SLPopFront(&sl);
	SLPopFront(&sl);
	SLPopFront(&sl);
	//SLPopBack(&sl);
	//SLPushFront(&sl, 104);
	SLPrint(&sl);
	SLDestroy(&sl);
}
void test3() {
	SL sl;
	sl.a = NULL;
	SLInit(&sl);
	SLPushFront(&sl, 100);
	SLPushFront(&sl, 101);
	SLPushFront(&sl, 102);
	SLPushFront(&sl, 103);
	SLInsert(&sl, 4, 2);
	SLPrint(&sl);
	SLErase(&sl, 4);
	SLPrint(&sl);
	SLDestroy(&sl);


}
void menu() {
	printf("***************************************\n");
	printf("1、尾插数据  2、尾删数据\n");
	printf("3、头插数据  4、头删数据\n");
	printf("5、打印数据  -1、退出\n");
	printf("***************************************\n");

}
int main() {
	int option = 0;
	while (option != -1) {
		menu();


	}



}