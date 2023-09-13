// #include <stdio.h>
// int main()
// {
//     printf("Hello World");
// }
// return 0;

// #include <stdio.h>
// #include <conio.h>
// int sum = 0;
// {
//     sum += 1;
//     sum += 2;
//     sum += 5;
//     sum += 4;
//     sum += 5;
// }

// #include <stdio.h>
// int main(){


//     printf("Hello world");
// return 0;
// }


// #include <stdio.h>
// int main(){
//     printf("Hello world");
//     return 0;
// }

// #include <stdio.h>
// int (main){
// printf("Hey man how is life");
// return 0;
// }

// #include <stdio.h>
// #include <conio.h>
// void printMessage() : // declare functions
// int main()
// {
//     printMessage();
//     return 0;
// }
// // define function
// void printMessage()
// {
//     printf("Welcome to programming ")
// }

// #include<stdio.h>
// #include<conio.h>
// int factorial(int n){
//     if (n==0)
//     return 1;
//     else
//     return n*factorial(n-1);
// }

// int main(){
//     int num;
//     printf("Enter any number:");
//     scanf("%d",&num);
//     int result= factorial(num);
//     printf("The factorial of given number is %d",result);
// }

// #include <stdio.h>

// void yogeshGc(inta,intb){
//     int sum= a+b;
//     int product= a*b;

//     printf("Sum:%d\n",sum);
//     printf("Product:%d\n",product);
// }

// int main(){
//     int num1=5;
//     int num2=3;

// yogeshGc(num1,num2);

// return 0;
// }

// #include <stdio.h>

// int calculateArea(int length, int width){
//     return length * width;
// }

// void displayArea(int area){
//     printf("The area is: %d\n",area)
// }

// int main (){
//     int length= 5;
//     int width=3;

//     int area = calculateArea(length,width);
//     displayArea(area);
//     reaturn 0;
// // }

// #include <stdio.h>
// int main(){
//     int i;

//     printf('Counting from 1 50 5:\n');
//     for (i=1;i<=5;i++){
//         printf("%d\n+",i);

//     }

//     printf("Done!\n")

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main (){
//     srand(time(NULL));/*intialize the random number generator with a seed based on the current time*/
//     int random_number= rand();
//     printf("random number : %d\n",random_number);
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int number;
//     int fact = 1;
//     printf("Enter a number:");
//     scanf("%d",&number);
//     //calculate factorial
//     for (int i = 1; i<=number; i++){
//         fact *=i;
//     }
//     printf("Factorial of %d\n", number,fact);
//     return 0;
// }

// #include <stdio.h>
// #define FEATURE_ENABLED 1
// int main()
// {
//     #ifdef FEATURE_ENABLED
//     printf("Feature is enabled\n")
//     #else
//     printf("featue is diabaled.\n")
//     #endif
//     return 0;
// }

// #include <stdio.h>
// #include <unistd.h>
// int main(){
//     printf("Loading");
//     for (int i=0, i <=10;i++){
//         printf("%d",i);
//         fflush(stdout);
//         usleep(500000); // sleep for 500 milisecondsf
//     }
//     printf("\n");
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     printf("Page1\n");
//     printf("THis is some content on page 1.\n")

//     printf("\f");

//     printf("page2\n")
//     printf("This is some content on page.\n")

//     return 0;
// }

// for char single code
// for int double code

// #include <stdio.h>

// int main(){
//     char first = 'a';
//     char second= '@';
//     printf("The first character is %c",first);
//     printf("\nThe ASCII of %c is %d,",second,second);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int num[5];
//     num[0]=1;
//     num[1]=2;
//     num[2]=3;
//     num[3]=4;
//     num[4]=5;

//    printf("Array values\n");
//    for(int i=0;i<5;i++){
//     printf("%d\n",%num)
//    }
// }

// functionsss  using both void and int

// #include <stdio.h>

// void wassUp(int vai){
//     if(vai%2==0){
//         printf(" is even.",vai);
//     }
//     else{
//         printf(" is odd",vai);
//     }
// }

// int main(){
//     int num;

//     printf("Enter a number");
//     scanf("%d",&"num");

//     wassUp(num);
//     return 0;
// }

// #include <stdio.h>
// int checknum(int num){
//     if(num%2==0)
//     return 1;
//     else
//     return 0;
// }

// int main(){
//     int n, result;
//     printf("Enter your number");
//     scanf("%d",&n);
//     result=checknum(n);
//     if (result==1)
//     printf("Even number");
//     else
//     printf("odd number");

//     return 0;
// }

// #include <stdio.h>
// int main (){
//     int a = 20;
//     int *ptr;
//     ptr=&a;
//     printf("value of the given variable is %d",ptr);
//     printf("Address of the given variable %p,ptr");
//     return 0;

// }

// #include <stdio.h>
// struct student
// {
//     int roll_num;
//     char name [20];
//     int age;
// };
// int main(){
//      struct student student1{

//         student1.roll_num=1;
//         strcpy(student1.name,Annu khanna);
//         student1.age=32;
//     };

// }

// #include <stdio.h>
// #include <string.h>

// union student
// {
//     int roll_num;
//     char name[20];
//     int age;
// };

// int main() {
//     union student student1;

//     student1.roll_num = 1;
//     strcpy(student1.name, "Annu Khanna");
//     student1.age = 32;

//     printf("Roll Number: %d\n", student1.roll_num);
//     printf("Name: %s\n", student1.name);
//     printf("Age: %d\n", student1.age);
//     printf("The size of given umion is %zu",sizeof(union student));

//     return 0;
// }

// #include <stdio.h>
// enum day
// {
//     sunday,
//     monday,
//     tuesday,
//     wednesday,
//     thursday,
//     friday,
//     saturday
// };

// int main()
// {
//     enum day today = wednesday;
//     printf("Today is ");

//     switch (today)
//     {
//     case monday:
//         printf("Monday");
//         break;
//     case tuesday:
//         printf("tuesday");
//         break;
//     case wednesday:
//         printf("wednesday");
//         break;
//     case thursday:
//         printf("thurdsay");
//         break;
//     case friday:
//         printf("friday");
//         break;
//     case saturday:
//         printf("saturday");
//         break;
//     case sunday:
//         printf("sunday");
//         break;
//     };
//     printf(".\n");
//     return 0;
// };



// /0 vaneko aba string vaiyo 
// /b aaut backspace
// /v vertical line
// /t one tab


// #include <stdio.h>
// int main(){
//     char letter = 'A';
// // printf("\"hello world\"");
// printf("'THe\t given\n nl nsdf ma \bhero ho\0 character\v is %c'",letter);
// return 0;

// }


// #include <stdio.h>
// int main (){
//     char letter = 'A';
//     char null_terminator[]= {'h','e','l','l','o'};
//     printf("The given character is %c",letter);
//     printf("The given null terminator is %s",null_terminator);
//     return 0;
// }


// write a program to swipe content of two varaiable using c 

// 
// #include <stdio.h>
// int main(){
// 	int i, j, sum;
	

// 	for(i=1;i<=sum;i++){
// 	if(i%2== 0){
// 		j=(sum+i);
// 	printf("Write number %d");
// 	}
// 	scanf("%d");
// 	}
// return 0;
// }



// #include <stdio.h>
// int main(){
//     int i,n;
//     float sum = 0;
//     printf("Enter your Number");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         sum += 1.0/i;
//     }
//     printf("sum of the series is %.2f",sum);

//     return 0;
// }

// #include <stdio.h>
// #include <math.h> 
// int main(){
//     int i,x,n;
//     float sum = 0;
//     printf("enter the number");
//     scanf("%d",&n);
//     printf("Enter the value of x:");
//     scanf("%d",&x);
//     for(i=1;i<n;i++){
//         if(i%2==0){
//             sum = sum-pow(x,i);
//         }else{
//             sum=sum+pow(x,i);
//         }
//     }
//     printf("The sum of the series is %.2f",sum);
//     return 0;
// }


// #include <stdio.h>
// int main(){
// 	int i, j, n;
// 	int fact;
// 	float sum=0;
// 	for(i=0;i<=n;i++){
// 		for(j=1;j<=i;j++){
// 			fact= fact*j;
// 		}sum = sum+i/fact;
// 		printf("%d");
        
// 	}
// 	return 0;
// // }

// #include <stdio.h>
// #include<math.h>
// int main(){
//     int i, x, n;
//     float sum=0;
//     printf("Enter the number:");
//     scanf("%d",&n);
//     printf("Enter the value of x:");
//     scanf("%d",&x);
//     for(i=1;i<=n;i++){
//         if(i%2==0){
//             sum = sum-pow(x,i);
//         }else{
//             sum=sum+pow(x,i);
//             }
//     } 
//     printf("the sum of the series is:%.2f",sum);
//     return 0;
// }


