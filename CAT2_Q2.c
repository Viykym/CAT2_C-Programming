//program for array
//An array is a data structure that stores a collection of elements, typically of the same type, in a contiguous block of memory.
/*
Auther:Brian muriuki joseph
Reg:CT102/G/22804/24
Date:7/11/2024
*/
#include <stdio.h>

int main(){
	int i,j,k;
	int score [2][2][2]={{{65,92},{84,72}},{{35,70},{59,67}}};
	
		for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			for(k=0;k<2;k++){
				printf("score[%d][%d][%d]=%d\n",i,j,k,score[i][j][k]);
			}
		}
	}
	return 0;
}