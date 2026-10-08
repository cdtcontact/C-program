/*************************************************************************
	> File Name: 20.funtion_with_pointer.c
	> Author: chendatao
	> Mail: peacecdt@gmail.com
	> Created Time: Thu Oct  8 04:37:23 2026
 ************************************************************************/

#include<stdio.h>

void add_once(int *p){
    *p+=1;
    return ;
}

void f(int n,int *sum_addr){
    *sum_addr=(1+n) * n / 2;
    return;
}

int main(){
    int a=123;
    printf("a = %d\n",a);
    add_once(&a);
    printf("a = %d\n",a);
    int n=10,sum;
    f(n,&sum);
    printf("%d\n",sum);
    return 0;

}
