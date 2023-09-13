#include <stdio.h>

int main(){
	int a , b,result;
	char choice;
	printf("Enter amy two numbers");
	scanf("%d%d",&a,&b);
	printf("Enter any symbol from +,-,*,/");
	scanf(" %c",&choice);
	switch(choice){
		case'+':
		result= a+b;
		printf("The sum of given number is %d", result);

		break;
		case'-':
		result= a-b;
		printf("The sub of given number is%d", result);
		break;
		case'-=/':
		result= a/b;
		printf("The div of given number is %d", result);
		break;
		case'*':
		result= a*b;
		printf("The mul of given number is %d", result);
		break;
		default:
		printf("Hello world");
	}
	return 0;
}
	



// #include  <stdio.h>
// int main(){
// 	int a,b, result;
// 	char choose;
// 	printf("Enter any two number");
// 	scanf("%d%d,&a,&b");
// 	printf("Enter the operator you want +,-,/,*");
// 	scanf("%c",&choose);

// 	switch(choose){
// 		case'+':
// 		result=a+b;
// 		printf("The add of two numbers are:");
// 		break;
// 		case'-':
// 		result=a-b;
// 		printf("The munist of two number is:");
// 		break;
// 	}
// }

// #include <stdio.h>

// int main() {
//     int length = 5; // Length of the sequence

//     for (int i = 0; i < length; i++) {
// 		for(int j=0;j>i;j++){

//         if (i % 2 == 0) {
//             printf("1 ");
//         } else {
//             printf("0 ");
//         }
// 		}
// 		printf("\n");
//     }

//     return 0;
// }