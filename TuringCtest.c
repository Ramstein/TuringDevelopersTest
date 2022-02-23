/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

// int(*(x()))[2];
// typedef int (*(*ptr))[2] ptrfoo;

// void sq(int);

#define SWAP(a,b,c)(c t; t=a, b=t)

struct pp{
    int x;
    int y;
};


union test{
    char a;
    char b;
    int c;
}t;

struct dev{
    char a;
    char b;
    int c;
}t1;

int main()
{
    // ptrfoo ptr1;
    // ptr1 = x;
    // ptr1();
    
    // int input = 10;
    // printf("%d", input);
    
    // sq(input);
    // printf("%d", input);
    
    
    // FILE *fp = stdout;
    // int n;
    // fprintf(fp, "%d", 45);
    
    // fflush(stdout);
    // fprintf(fp, "%d", 65);
    
    // char *dt = malloc(8);
    // myfunction(dt);
    // printf(dt);
    
    
    // int t[2][3] = {{3,2,1}, {1,2,3}};
    // printf("%d", sizeof(t)/sizeof(t[1][1]));
    
    // int x =10, y=20;
    // SWAP(x,y, int);
    // printf("%d%d", x, y)
    
    
    // char a = 'A', b='B';
    // printf("%d", a&b);
    
    // int arr[4][3] = {{1}, {2,3,4}, {5,6}};
    // printf("%d", sizeof(arr));
    
    // char t[20] = "ABCDEFGHIJK";
    // int s = strlen(t);
    // t[3] = '\0';
    // s = strlen(t);
    // printf("%d", s);
    
    // register i = 20;
    // register *j = &i;
    // printf("%d", *j);
    
    // char a[10][5] = {"hi", "C", "Developers"};
    // printf("%s", a[2]);
    
    
    // struct pp p1[] = {1,2,3,4,5,6};
    // struct pp *ptr1 = p1;
    // printf("%d %d\n", ptr1->x, (ptr1+2)->x);
    
    // printf("%d", sizeof(void));

    
    // static int ary[] = {1,3,5} ;
    // printf("%d%d", ary[-1], ary[5]);
    
    
    
    // printf("%d \n", sizeof(t));
    
    // printf("%d \n", sizeof(t1));
    
    
    
    
    
    return 0;
}
void myfunction(char *q){
    // q = malloc(8);
    memcpy(q, "Hello", 6);
}

// void sq(int k){
//     k=20;
// }

// int(*(x()))[2]{
//     int (*ary)[2] = malloc(sizeof*ary);
//     return &ary;
// }

