#include<stdio.h>
#include<conio.h>
int factorial(int);
 int main()
 {
 	int n,store;
 	printf("enter the number");
 	scanf("%d",&n);
 	store=factorial(n);
 	printf("\n %d the factorial is",store);
 	return 0;
 }
 int factorial(int n)
 {
 	int i ,fact=1;
 	for(i=1;i<=n;i++)
 	fact=fact*i;
 	return fact;
 }