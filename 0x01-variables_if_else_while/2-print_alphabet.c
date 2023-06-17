#include <stdio.h>
/** prints alphabets */
int main(void){
	char alphabets[26]= "abcdefghijklmnopqrstuvwxyz";
	int i = 0;
	for (i = 0;i < 26;i++) {
		putchar(alphabets[i]);
	}
	putchar('\n');
	return 0;
}
