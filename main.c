#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linkedstack.h"
#include "stackutil.h"

int main(int argc, char *argvp[]) {
	
	//���� ����ϱ�
	char sourceStr[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	
	char *pReverseStr = reverseString(sourceStr);
	if (pReverseStr != NULL) {
		printf("[%s] => [%s]\n", sourceStr, pReverseStr);
		free(pReverseStr);
	}


}