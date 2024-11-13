#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    printf("This is my first C program.\n");
    printf("Manminder Singh\n");

// this is a  comment in C
/* this is 
multiline comment */






    return 0;
}


// escape sequences
// \n - new line
// \t - tab
// \b - backspace
// \r - carriage return
// \f - form feed
// \\ - backslash
// \' - single quote
// \" --" - double quote quote is used to escape double quote
// \? - question mark
// \0 - null character
// \a - alert           
// \v - vertical tab
// \ooo - octal number
// \xhh - hexadecimal number                                
// \uhhhh - unicode character
// \Uhhhhhhhh - unicode character
// \xhhhh - unicode character   
// \Xhhhhhhhh - unicode character
// \0 - null character


// variables in C are the containers that store the data values. 

// declaration of variables
// data_type variable_name;
// int a;
// float b;
// char c;

// initialization of variables
// data_type variable_name = value;
// int a = 10;
// float b = 20.5;
// char c = 'A';



int x = 10; // global variable

// global variables are declared outside the main function and can be accessed by any function in the program.

// local variables are declared inside the main function and can be accessed only within the main function.

int main() {
    int x = 20; // local variable
    printf("%d\n", x); // 20

    float GPA = 3.7;
    printf("%f\n", GPA); // 3.7

    return 0;
}

