#include "funciones.h"

int F(int n){
	if (n == 1 || n == 0)
	{
		return 1;
	}
	return F(n - 1) * n;
}