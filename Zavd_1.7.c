#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int mas[9][9], i, t;
	
	for(i = 0; i < 9; i++){
		for(t = 0; t < 9; t++)
			if(i < t)
				mas[i][t] = 0;
				else if(i < 9 - t)
					mas[i][t] = 1;
						else
							mas[i][t] = 0;
	}
	
	for(t = 0; t < 9; t++){
		for(i = 0; i < 9; i++)
		printf("%2d", mas[t][i]);
		printf("\n");
	}	
	
	
	system("pause");
	return 0;
}
