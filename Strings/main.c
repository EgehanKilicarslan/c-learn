#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){

	char examplestring[] = "Hello World";
	char examplestring2[] = "Hello World";
	char examplestring3[12];

	printf("%d\n", strlen(examplestring)); //String length

	printf("%d\n", strcmp(examplestring, examplestring2)); //String compare (0 = equal) (1 = not equal) (-1 = not equal)

	printf("%s\n", strncmp(examplestring, examplestring2, 4)); //String compare to n characters (0 = equal) (1 = not equal) (-1 = not equal)

	printf("%s\n", strcpy(examplestring3, examplestring)); //String copy (destination, source)

	printf("%s\n", strncpy(examplestring3, examplestring, 4)); //String copy to n characters (destination, source, n)

	printf("%s\n", strcat(examplestring, examplestring2)); //String concatination (destination, source)

	printf("%s\n", strncat(examplestring, examplestring2, 4)); //String concatination to n characters (destination, source, n)

	system("pause");
	return 0;
}