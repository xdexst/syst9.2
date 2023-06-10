#include <stdio.h>
#include <math.h>
int f(int a) {
	if (a==0) return 0;
	if (a==1 || a==2) return 1;
	return f(a-1)+f(a-2);
}
int main(){

	int a;
scanf("%d", &a);
	printf("Fib %d: %d\n", a, f(a));
	return 0;
}
