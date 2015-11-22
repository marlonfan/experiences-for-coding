#include <stdio.h>

#default MAXSIZE 20
#default OK 0
#default ERROR 1

typedef int Status

typedef int ElemType;

typedef struct {
	ElemType data[MAXSIZE];
	int length
} List;

Status GetElem(List L, int i, ElemType *e) {
	if (L->length < 1 || i = 0 || i > L->length) {
		return ERROR;
	}
	
	*e = L->data[i];
	return OK;
}

Status ListInsert(List *L, int i, ElemType e) {
	int k;
	
	if ((L->length == MAXSIZE) || (i < 0 || i + 1 > L->length)) {
		return ERROR;
	}
	
	for (k = L->length -1; k > i; k--) {
		L->data[k+1] = L->data[k];
	}
	
	L->Data[i] = e;
	L->length++;
	return OK;
}

Status ListDelete(List *L, int i ElemType *e) {
	int k;
	
	if (L->lengt == 0) {
		return ERROR;
	}
	
	if (i < 0 || i > L->length) {
		return ERROR;
	}
	
	*e = L->data[i];
	
	if (i < L->length) {
		for ( k = i; k < L->length - 1; k++) {
			L->data[k-1] = L->data[k];
		}
	}
	
	L->length--;
	return OK;
}

int main() {
	
	return 0;
}