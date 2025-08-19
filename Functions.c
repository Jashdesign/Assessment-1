#include<stdio.h>
//With return type and parameter
int add_num(int x,int y){
    return x+y;
    // return result;
}
// void main(){
//     int n1,n2;
//     printf("Enter number 1: ");
//     scanf("%d",&n1);
//     printf("Enter number 2: ");
//     scanf("%d",&n2);

//     int res;
//     res = add_num(n1,n2);
//     printf("result = %d", res);
// }

// without return type and with parameter
void add_num2(int x,int y){
    int result;
    result = x+y;
    printf("Addition : %d",result);
}

// void main(){
//     int a,b;
//     printf("Enter number 1: ");
//     scanf("%d", &a);
//     printf("Enter number 2: ");
//     scanf("%d", &b);

//     add_num2(a,b);
// }

// with return type without parameter
int add_num3(){
    int x,y;
    printf("enter num 1: ");
    scanf("%d",&x);
    printf("enter num 2: ");
    scanf("%d",&y);

    return x + y;
}

// void main(){
//     int result;
//     result = add_num3();
//     printf("Addition: %d", result);
// }

// without return type without parameter

void add_num4(){
    int res;
	int n1,n2;
	
	printf("\n Enter number 1:");
	scanf("%d",&n1);
	printf("\n Enter number 2:");
	scanf("%d",&n2);
    res = n1+n2;
    printf("Addition: %d",res);
}

void main(){
    add_num4();
}