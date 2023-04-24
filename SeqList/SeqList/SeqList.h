#pragma once
#define N 10
//const int n = 10;
typedef int SLDatatype;
typedef struct SeqList
{
	SLDatatype *a;
	int size;
	int capacity;
}SL;
void SLInit(SL *sl);

void SLDestroy(SL *sl);

void SLPushBack(SL *sl,SLDatatype x);

void SLPrint(SL* sl);

void SLPushFront(SL* sl, SLDatatype x);

void SLPopBack(SL* sl);

void SLPopFront(SL* sl);

void SLInsert(SL *sl,int pos,SLDatatype x);

void SLErase(SL* sl, int pos);

int SLFind(SL* psl, SLDatatype x);

void SLModify(SL* psl, int pos, SLDatatype x);

SL* STFind(SL* phead, SLDatatype x);