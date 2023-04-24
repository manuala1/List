#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <assert.h>
void SLInit(SL *sl) {
	assert(sl);
	sl->a = (SLDatatype*)malloc(sizeof(SLDatatype)*4);
	if (sl->a == NULL) {
		perror("malloc fail");
		return;
	}
	sl->size = 0;
	sl->capacity =4;
}
void SLDestroy(SL *sl) {
	assert(sl);
	free(sl->a);
	sl->a = NULL;
	sl->capacity = 0;
	sl->size = 0;
}
void SLCheckCapacity(SL* sl) {
	assert(sl);
	if (sl->size==sl->capacity)
	{
		SLDatatype* temp = (SLDatatype*)realloc(sl->a, 2 * sl->capacity*sizeof(SLDatatype));
		if (temp == NULL)
		{
			perror("realloc fail");
			return;
		}
		sl->a = temp;
		sl->capacity *= 2;
	}
}
void SLPrint(SL* sl) {
	assert(sl);
	for (size_t i = 0; i < sl->size; i++)
	{
		printf("%d ", sl->a[i]);
	}
	printf("\n");
}

void SLPushBack(SL* sl, SLDatatype x) {
	assert(sl);
	/*SLCheckCapacity(sl);
	sl->a[sl->size++] = x;*/
	SLInsert(sl, sl->size, x);
}

void SLPushFront(SL* sl, SLDatatype x) {
	assert(sl);
	//SLCheckCapacity(sl);
	/*for (size_t i = sl->size-1; i >=0; i--)
	{
		sl->a[i+1] = sl->a[i];
	}*/
	/*memmove((sl->a)+1,sl->a, sizeof(SLDatatype) *sl->size);
	sl->size++;
	sl->a[0] = x;*/
	SLInsert(sl, 0, x);

}

void SLPopBack(SL* sl) {
	assert(sl);
	/*if (sl->size == 0) {
		return;
	}*/
	/*assert(sl->size > 0);

	sl->size--;*/
	SLErase(sl, sl->size - 1);
}

void SLPopFront(SL* sl) {
	assert(sl);
	/*assert(sl->size > 0);
	memmove(sl->a, (sl->a) + 1, sizeof(SLDatatype) * (sl->size - 1));
	sl->size--;*/
	SLErase(sl, 0);
}

void SLInsert(SL* sl, int pos, SLDatatype x) {
	assert(sl);
	assert(pos <= sl->size && pos >= 0);
	SLCheckCapacity(sl);
	memmove(&sl->a[pos + 1], &sl->a[pos], sizeof(SLDatatype)*(sl->size-pos));
	sl->a[pos] = x;
	sl->size++;

}

void SLErase(SL* sl, int pos) {
	assert(sl);
	assert(pos < sl->size&& pos>=0);
	/*if (pos == sl->size - 1) {
		sl->size--;
	}
	else {*/
		memmove(&sl->a[pos], &sl->a[pos + 1], sizeof(SLDatatype) * (sl->size - pos-1) );
		sl->size--;
	//}
}

int SLFind(SL* psl, SLDatatype x) {
	assert(psl);
	int pos = 0;
	while (pos<psl->size)
	{
		if (psl->a[pos]==x)
		{
			return pos;
		}
	}
	return -1;
}

void SLModify(SL* psl, int pos, SLDatatype x) {
	assert(psl);
	assert(pos >= 0 && pos < psl->size);
	psl->a[pos] = x;
}



