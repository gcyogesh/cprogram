// #include <stdio.h>

// int main(){
// 	int num[6]={44,43,45,3,323,23};
// 	for(int i =0;i<6;i++){
// 		printf("%d\t",num[i]);

// 	}
// 	return 0;

// } 

// #include <stdio.h>
// int main(){
// 	int marks[5];
// 	for(int i=0;i<=4;i++){
// 		printf("Enter the marks %d",i+1);
// 		scanf("%d",&marks[i]);
// 	}
// 	printf("\n The given marks are:\n");
// 	for(int i=0;i<=4;i++){
// 		printf("%d\t",marks[i]);
// 	}
// 	return 0;

	
// }


// #include <stdio.h>
// int main(){
// 	int a,b;
// 	for(a=1;a<=5;a++){
// 		for(b=1;b<=4;b++){
// 			printf("*");
// 		}
// 		printf("*");
// 	}
// }



// #include <stdio.h>
// int main(){
// 	int a[50],n,i,j,temp;
// 	printf("Enter the value of n");
// 	scanf("%d",&n);
// 	for(i=0;i<n;i++){
// 	printf("\n Enter the %dth element of array" ,i+1);
// 	scanf("%d",&a[i]);
// 	}
// 	for(i=0;i<n;i++){
// 		for(j=i+1;j<n;j++){
// 			if(a[i]>a[j]){
// 				temp= a[i];
// 				a[i]=a[j];
// 				a[j]=temp;
// 			}
// 		}
// 	}
// 	printf("The value in sorted order");
// 	for(i=0;i<n;i++){
// 		printf("%d\t a[i]");
// 	}
// 	return  0;



// }  

// #include <stdio.h>
// int main(){
// 	int arr[50],n,i, key, flag=0;
// 	printf("Enter a value of n");	
// 	scanf("%d",&n);
// 	for(i=0;i<n;i++){
// 		printf("\n Enter the %dth element if array",i+1);
// 		scanf("%d",&arr[i]);
// 	}	
// 	printf("\n Enter teh value to be searched");
// 	scanf("%d",&key);
// 	for(i=0;i<n;i++){
// 		if(key==arr[i]){
// 			flag=1;
// 			break;
// 		}else{
// 			flag=0;
// 		}
// 		if(flag==1){
// 			printf("%d is in %d index of array",key,i+1);
// 		}else{
// 			printf("Np data found");
// 		}
// 		return 0;
// 	}	
	
	
// }


// #include <stdio.h>
// int main(){
// 	char mystring[]="Welcome to bca bro";
// 	printf("THe given string is\n %s ", mystring);
// 	printf("The first character is\n %c", mystring[0]);
// 	return 0;
// }


//  #include<stdio.h>
// int main() {
//     int x;
//     char y;
//     float z;

//     // sizeof evaluates the size of a variable
//     printf("Size of int: %zu bytes\n", sizeof(x));
//     // printf("Size of double: %zu bytes\n", sizeof(doubleType));
//     printf("Size of char: %zu byte\n", sizeof(y));
//     printf("Size of float: %zu bytes\n", sizeof(z));
    
//     return 0;
// }

// #include <stdio.h>
// int main(){
// 	int m=10,n=20;
// 	int o=30,p=50;

// 	if(m>n && m<o){
// 		printf("&& operator: both condition are true");
// 	}
// 	if(o>p || p!=10){
//        printf("|| operator: One condtion is ture");
// 	}
// 	if(!(m>n && m<0)){
// 		printf(" ! operarot:Both conditon is ture ");
// 	}

// 	return 0;
// }


// #include <stdio.h>
// int main(){
// 	int a,b,c;
// 	for(a=0;a<3;a++){
// 		for(b=0;b<a;b++){
// 			printf("1\t");
// 		}
// 	  printf("\n");
// 	}
// }


#include <stdio.h>
int main(){
	int a=10,*p=&a;
	int y=*p;
	printf("The value of a is %d",a);
	printf("The value of a is %u",a);
	printf("The value of a is %d",a);
	printf("The value of a is %u",a);
	printf("The value of a is %u",a);
	return 0;
}