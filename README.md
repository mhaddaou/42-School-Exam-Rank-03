# 42-School-Exam-Rank-03

Time Limit: 3 Hours <i class="fa-solid fa-clock"></i>


<h1>Printf Exam Rank 03 Subject Text</h1>

Assignment name : ft_printf
Expected files : ft_printf.c
Allowed functions: malloc, free, write, va_start, va_arg, va_copy, va_end

Write a function named ft_printf that will mimic the real printf but it will manage only the following conversions:

s (string), d (decimal) and x (lowercase hexademical).

Your function must be declared as follows:
int ft_printf(const char *, ... );

Examples of the function output:

call: ft_printf("%s\n", "toto"); out: toto$

call: ft_printf("Magic %s is %d", "number", 42); out: Magic number is 42%

call: ft_printf("Hexadecimal for %d is %x\n", 42, 42); out: Hexadecimal for 42 is 2a$

<br><br>
<h1> Get_Next_Line Exam Rank 03 Subject Text </h1>

Assignment name : get_next_line
Expected files : get_next_line.c get_next_line.h
Allowed functions: read, free, malloc


Write a function named get_next_line which prototype should be:
char *get_next_line(int fd);


Your function must return a line that has been read from the file descriptor passed as parameter. What we call a "line that has been read" is a succesion of 0 to n characters that end with '\n' (ascii code 0x0a) or with End Of File (EOF).

The line should be returned including the '\n' in case there is one at the end of the line that has been read. When you've reached the EOF, you must store the current buffer in a char * and return it. If the buffer is empty you must return NULL.

In case of error return NULL. In case of not returning NULL, the pointer should be free-able. Your program will be compiled with the flag -D BUFFER_SIZE=xx, which has to be used as the buffer size for the read calls in your functions.

Your function must be memory leak free. When you've reached the EOF, your function should keep 0 memory allocated with malloc, except the line that has been returned.

Caling your function get_next_line in a lop will therefore allow you to read the text avaiable on a file descriptor one line at a time until the end of the text, no matter the size od either the text or one of its lines.

Make sure that your function behaves wel when it reads from a file, from the standard output, from a redirection, etc...

No call to another function will be done on the file descriptor between 2 calls of get_next_line. Finally we consider that get_next_line has an undefined behaviour when reading from a binary file.
