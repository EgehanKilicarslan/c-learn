#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){

	char examplestring[] = "Hello World";
	char examplestring2[] = "Hello World";
	char examplestring3[12];
	char examplestring4[30];

	/* printf("%d\n", strlen(examplestring)); //String length

	printf("%d\n", strcmp(examplestring, examplestring2)); //String compare (0 = equal) (1 = not equal) (-1 = not equal)

	printf("%s\n", strncmp(examplestring, examplestring2, 4)); //String compare to n characters (0 = equal) (1 = not equal) (-1 = not equal)

	printf("%s\n", strcpy(examplestring3, examplestring)); //String copy (destination, source)

	printf("%s\n", strncpy(examplestring3, examplestring, 4)); //String copy to n characters (destination, source, n)

	printf("%s\n", strcat(examplestring, examplestring2)); //String concatination (destination, source)

	printf("%s\n", strncat(examplestring, examplestring2, 4)); //String concatination to n characters (destination, source, n)

	gets(examplestring4); //String input (destination
	printf("%s\n", examplestring4);

	fgets(examplestring4, sizeof(examplestring4), stdin); //String input (destination, n, stdin)
	printf("%s\n", examplestring4);

	printf("%s\n", strrev(examplestring)); //String reverse (destination

	printf("%s\n", strlwr(examplestring)); //String to lowercase (destination)

	printf("%s\n", strupr(examplestring)); //String to uppercase (destination)

	char *sub;
	sub = strstr(examplestring, "Wor"); //String search (source, search)
	printf("%s\n", sub); */

	system("pause");
	return 0;
}