#include <stdio.h>

int main()
{
    /*
    !Write a program in C to show the basic declaration of a pointer.
    *Expected Output :

    Pointer : Show the basic declaration of pointer :
    -------------------------------------------------------
    Here is m=10, n and o are two integer variable and *z is an integer

    z stores the address of m  = 0x7ffd40630d44

    *z stores the value of m = 10

    &m is the address of m = 0x7ffd40630d44

    &n stores the address of n = 0x7ffd40630d48

    &o  stores the address of o = 0x7ffd40630d4c

    &z stores the address of z = 0x7ffd40630d50
    */
    // int m;

    // scanf("%d", &m);

    // int *mPtr = &m;

    // printf("the address and value of m is: %p & %d\n", &m, m);

    // printf("the adress of m is:%d and the value:%p\n", *mPtr, mPtr);

    //!  =======================end===========================

    /*
    !Write a program in C to demonstrate how to handle pointers in a program.

    *Expected Output :
        Address of m : 0x7ffcc3ad291c
        Value of m : 29

        Now ab is assigned with the address of m.
        Address of pointer ab : 0x7ffcc3ad291c
        Content of pointer ab : 29

        The value of m assigned to 34 now.
        Address of pointer ab : 0x7ffcc3ad291c
        Content of pointer ab : 34

        The pointer variable ab is assigned with the value 7 now.
        Address of m : 0x7ffcc3ad291c
        Value of m : 7
    */

    // int m = 29;

    // int *ab = &m;

    // printf("ab has the value and address of m: %d and %p\n", *ab, ab);

    // m = 34;
    // printf("ab has the value and address of m: %d and %p\n", *ab, ab);

    // *ab = 7;

    // printf("ab has the value and address of m: %d and %p\n", *ab, ab);
    // printf("m has the value and address of m: %d and %p\n", m, &m);

    // ! =========================end=========================

    /*
    !3. Write a program in C to demonstrate the use of the &(address of) and *(value at address) operators.

    *Expected Output :
        Pointer : Demonstrate the use of & and * operator :
        --------------------------------------------------------
        m = 300
        fx = 300.600006
        cht = z

        Using & operator :
        -----------------------
        address of m = 0x7ffda2eeeec8
        address of fx = 0x7ffda2eeeecc
        address of cht = 0x7ffda2eeeec7

        Using & and * operator :
        -----------------------------
        value at address of m = 300
        value at address of fx = 300.600006
        value at address of cht = z

        Using only pointer variable :
        ----------------------------------
        address of m = 0x7ffda2eeeec8
        address of fx = 0x7ffda2eeeecc
        address of cht = 0x7ffda2eeeec7

        Using only pointer operator :
        ----------------------------------
        value at address of m = 300
        value at address of fx= 300.600006
        value at address of cht= z
    */

    // int m = 300;
    // float fx = 300.60006;
    // char cht = 'z';

    // printf("address of m, fx and z is: %p , %p and %p\n", &m, &fx, &cht);
    // printf("value of m, fx and z is: %d , %lf and %c\n", *&m, *&fx, *&cht);

    // int *mptr = &m;
    // float *fxptr = &fx;
    // char *chtptr = &cht;

    // printf("address of m, fx and z is: %p , %p and %p\n", mptr, fxptr, chtptr);
    // printf("value of m, fx and z is: %d , %lf and %c\n", *mptr, *fxptr, *chtptr);

    // ! =========================end=========================

    /*
    !4. Write a program in C to add two numbers using pointers.
    *Test Data :
        Input the first number : 5
        Input the second number : 6
        Expected Output :

        The sum of the entered numbers is : 11
    */
    // int m, n;
    // printf("enter the value of m and n: \n");
    // scanf("%d %d", &m, &n);

    // int *mptr = &m;
    // int *nptr = &n;

    // int sum = *mptr + *nptr;
    // printf("sum of m and n is: %d\n", sum);

    // ! =========================end=========================

    int arr[100];

    printf("enter the value of arr: \n");

    return 0;
}