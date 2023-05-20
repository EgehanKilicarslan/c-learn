    /*
    Arithmetic operators
    +   Addition
    -   Subtraction
    *   Multiplication
    /   Division
    %   Modulus
    ++  Increment
    --  Decrement
    */

   /*
   Assignment operators
    =    x = 5   x = 5
    +=   x += 3  x = x + 3
    -=   x -= 3  x = x - 3
    *=   x *= 3  x = x * 3
    /=   x /= 3  x = x / 3
    %=   x %= 3  x = x % 3
   */

    /*
    Comparison operators
    ==  Equal to
    !=  Not equal to
    >   Greater than
    <   Less than
    >=  Greater than or equal to
    <=  Less than or equal to
    */

   /*
   Logical operators
    &&  Logical and
    ||  Logical or
    !   Logical not
   */

    /*
    Data types
    int     4 bytes     Stores whole numbers from -2,147,483,648 to 2,147,483,647
    float   4 bytes     Stores fractional numbers. Sufficient for storing 6 to 7 decimal digits
    double  8 bytes     Stores fractional numbers. Sufficient for storing 15 decimal digits
    bool    1 byte      Stores true or false values
    char    1 byte      Stores a single character/letter/number, or ASCII values
    */

    /*
    Conditional statements
    if      Executes code if a specified condition is true
    else    Executes code if a specified condition is false
    else if Executes code if a specified condition is false, but another condition is true
    switch  Selects one of many blocks of code to be executed
    */

    /*
    Loops
    while   Loops through a block of code while a specified condition is true
    do      Loops through a block of code once, and then repeats the loop while a specified condition is true
    for     Loops through a block of code a specified number of times
    break   Breaks out of a loop or a switch statement
    continue    Jumps out of a loop and starts at the top
    */

    /*
    Functions
    main()  Required. The main function is where a program starts its execution
    printf()    Outputs one or more formatted strings
    scanf() Reads formatted data from a string
    */

    /*
    Arrays
    int myNum[3] = {10, 20, 30};
    int myNum[] = {10, 20, 30};
    int myNum[10];
    */

    /*
    Pointers
    int myNum = 10;
    printf("%p", &myNum);  // Outputs the memory address of variable myNum
    */

    /*
    Reference operator (&) returns the memory address of a variable
    Dereference operator (*) returns the value of the variable located at the address specified by its operand
    */

    /*
    Structures
    struct Person {
        char name[50];
        int age;
        float salary;
    };
    */

    /*
    Unions
    union Data {
        int i;
        float f;
        char str[20];
    };
    */

    /*
    Enumerations
    enum day {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
    */

    /*
    Input and output
    printf()    Prints formatted data to the screen
    scanf() Reads formatted data from the keyboard
    gets()  Reads a string from stdin
    puts()  Writes a string to stdout
    */

    /*
    File I/O
    fopen() Opens a file
    fclose()    Closes a file
    feof()  Checks if the end of file (EOF) has been reached
    fgetc() Reads a character from a file
    fputc() Writes a character to a file
    fgets() Reads a string from a file
    fputs() Writes a string to a file
    fscanf()    Reads formatted data from a file
    fprintf()   Writes formatted data to a file
    */

    /*
    Preprocessor
    #define Defines a macro
    #include Inserts a particular header from another file
    #undef  Undefines a preprocessor macro
    #ifdef   Returns true if this macro is defined
    #ifndef  Returns true if this macro is not defined
    #if  Tests if a compile time condition is true
    #else   The alternative for #if
    #elif   #else and #if in one statement
    #endif  Ends preprocessor conditional
    #error  Prints error message on stderr
    #pragma Issues special commands to the compiler, using a standardized method
    */

    /*
    Header files
    #include <stdio.h>
    #include "myheader.h"
    */

    /*
    Type casting
    (type) Converts a value to the given data type
    */

    /*
    Error handling
    errno   Contains the last error number
    perror()    Prints a descriptive error message to stderr
    strerror()  Returns a descriptive error message from errno
    */

    /*
    Memory management
    malloc()    Allocates memory dynamically
    calloc()    Returns a pointer to an array that contains the zeros
    free()  Releases previously allocated memory
    realloc()   Reallocates memory
    */

    /*
    Date and time
    time()  Returns the current time of the system as a time_t value
    localtime() Uses the time pointed by timer to fill a tm structure with the values that represent the corresponding local time
    gmtime()    Uses the time pointed by timer to fill a tm structure with the values that represent the corresponding gm time
    asctime()   Converts the structure pointed by timeptr into a string in the form "day month year hours:minutes:seconds year\n" and a pointer to that string is returned
    ctime() Returns a string representing the localtime based on the argument timer
    */
    
    /*
    Math
    abs()   Returns the absolute value of an integer
    fabs()  Returns the absolute value of a floating point number
    ceil()  Rounds a floating point value up to the nearest integer
    floor() Rounds a floating point value down to the nearest integer
    sqrt()  Returns the square root of a number
    exp()   Returns the value of Ex
    log()   Returns the natural logarithm (base E) of x
    log10() Returns the common logarithm (base 10) of x
    pow()   Returns the value of x raised to power of y
    fmod()  Returns the remainder of x divided by y
    sin()   Returns the sine of x (x is in radians)
    cos()   Returns the cosine of x (x is in radians)
    tan()   Returns the tangent of an angle
    */

    /*
    Random numbers
    rand()  Returns a pseudo-random number between 0 and RAND_MAX
    srand() Initializes the random number generator
    */

    /*
    Character handling
    isalnum()   Returns true if character is alphanumeric
    isalpha()   Returns true if character is alphabetic
    iscntrl()   Returns true if character is a control character
    isdigit()   Returns true if character is decimal digit
    isgraph()   Returns true if character has graphical representation
    islower()   Returns true if character is lowercase letter
    isprint()   Returns true if character is printable
    ispunct()   Returns true if character is a punctuation character
    isspace()   Returns true if character is a white-space
    isupper()   Returns true if character is uppercase letter
    isxdigit()  Returns true if character is hexadecimal digit
    tolower()   Converts uppercase letter to lowercase
    toupper()   Converts lowercase letter to uppercase
    */

    /*
    String handling
    strcpy()    Copies string to destination including the null character
    strncpy()   Copies given number of characters of one string to another
    strcat()    Concatenates (joins) two strings
    strncat()   Appends a portion of string to another
    strcmp()    Compares two strings
    strncmp()   Compares two strings up to given number of characters
    strlen()    Returns the length of a string
    strchr()    Returns a pointer to the first occurrence of a character in a string
    strrchr()   Returns a pointer to the last occurrence of a character in a string
    strstr()    Returns a pointer to the first occurrence of a string in another string
    */