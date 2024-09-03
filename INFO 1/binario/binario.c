#include <stdio.h>

int main(int argc, char const *argv[])
{
	unsigned int b[8] = {};

	//unsigned char binario;

	unsigned char dato = 0xA5;

	for (int i = 0; i < 7; ++i)
	{
		/* code */
		b[i] = dato %2;
		dato /= 2;

	}
	for (int i = 7; i < 0; --i)
	{
		/* code */
		printf("%d", b[i]);
	}

	

	

	
	

	return 0;
}