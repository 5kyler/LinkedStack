#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linkedstack.h"

LinkedStack* createLinkedStack() {
	LinkedStack *pReturn = NULL;
	int i = 0;
	pReturn = (LinkedStack*)malloc(sizeof(LinkedStack));
	if(pReturn!=NULL){
		memset(pReturn, 0, sizeof(LinkedStack));
	}
	else
	{
		printf("메모리할당 에러 입니다, createLinkedStack()\n");
		return NULL;
	}

	return pReturn;
}

int pushLS(LinkedStack* pStack, StackNode element) {
	int ret = FALSE;
	StackNode *pNode = NULL;

	if (pStack != NULL) {
		pNode = (StackNode*)malloc(sizeof(StackNode));
		if (pNode != NULL) {
			memset(pNode, 0, sizeof(StackNode));
			*pNode = element;
			pNode->pLink = pStack->pTop;
			pStack->pTop = pNode;

			pStack->currentCount++;
			ret = TRUE;
		}
		else
		{
			printf("메모리할당 에러입니다, pushLS()\n");
		}
	}
	return ret;
}

StackNode* popLS(LinkedStack* pStack) {
	StackNode* pReturn = NULL;
	if (pStack != NULL) {
		if (isLinkedStackEmpty(pStack)==FALSE) {
			pReturn = pStack->pTop;
			pStack->pTop = pReturn->pLink;
			pReturn->pLink = NULL;

			pStack->currentCount--;
		}
	}
	return pReturn;
}

StackNode* peekLS(LinkedStack* pStack) {
	StackNode* pReturn = NULL;
	if (pStack != NULL) {
		if (isLinkedStackEmpty(pStack) == FALSE) {
			pReturn = pStack->pTop;
		}
	}
	return pReturn;
}

void deleteLinkedStack(LinkedStack* pStack) {
	StackNode *pNode = NULL;
	StackNode *pDelNode = NULL;

	if (pStack != NULL) {
		pNode = pStack->pTop;
		while (pNode != NULL)
		{
			pDelNode = pNode;
			pNode = pNode->pLink;
			free(pDelNode);
		}
		free(pStack);
	}
}

int isLinkedStackFull(LinkedStack* pStack) {
	int ret = FALSE;
	return ret;
}

int isLinkedStackEmpty(LinkedStack* pStack) {
	int ret = FALSE;

	if (pStack != NULL) {
		if (pStack->currentCount == 0) {
			ret = TRUE;
		}
	}
	return ret;
}