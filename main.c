#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linkedstack.h"
#include "stackutil.h"

int main(int argc, char *argvp[]) {
	
	//역순 출력하기
	char sourceStr[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	
	char *pReverseStr = reverseString(sourceStr);
	if (pReverseStr != NULL) {
		printf("[%s] => [%s]\n", sourceStr, pReverseStr);
		free(pReverseStr);
	}


}