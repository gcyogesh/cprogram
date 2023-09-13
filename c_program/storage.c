// #include <stdio.h>
// int globalVar=10;
// int main(){
// 	printf("globalVar:%d\n",globalVar);
// 	return 0;
// }

// #include <stdio.h>
// int a=10;
// int b=20;
// int sum();
// int main(){
// 	printf("Sum %d\n ",sum());
// 	return 0;
// }
// int sum(){
// 	return a+b;
// }

// #include <stdio.h>
// void increamentStatic(){
// 	auto  int count=0;         
// 	count++;
// 	printf("Static count:%d\n",count);
// }
// int main(){
// 	increamentStatic();
// 	increamentStatic();
// 	increamentStatic();
// }




#include <stdio.h>
int main(){
	register int counter=0;

	for (int i=1; i<100;i++){
		counter++;
	}

	printf("COunter:%d\n",counter);
	return 0;
}
