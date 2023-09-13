// QUestion to check number is prime or not 


// #include <stdio.h>
// int main()
// {
// 	int n, count = 0;
// 	printf("Enter any number you want?");
// 	scanf("%d", &n);
// 	for (int i = 1; i <= n; i++)
// 	{
// 		if (n % i == 0)
// 		{
// 			count++;
// 		}
// 	}
// 	if (count == 2)
// 	{
// 		printf("THis is prime number");
// 	}
// 	else
// 	{
// 		printf("This is not a prime number");
// 	}
// 	return 0;
// }




// C program to generate the fiboncahi series upto 12th term using recursive function 


#include <stdio.h>
#include <conio.h>
int fib(int);
void main()
{
	int n=12,i;  
	printf("Fibonaci series is:");
	for(i=0;i<n;i++);
	printf("%d",fib(i));
	getch();

}
int fib(int n)
{
	if(n==0)
	return 0;
	if(n==1 || n==2)
	return 1;
	else
	return fib(n-1)+fib(n-2);
}


