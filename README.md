# printf
 A simple printf function built by Israel Adenuga and myself for Alx software Engineering School

# Welcome

A rebuild of the standard printf function in C. Our project required a function capable of printing with the %d, %c, %s, and %% specifiers to standard output. printf returns the number of characters printed (excluding the null byte at the end of strings). We were not asked to handle flag characters, field width, precision, or length.


# Format Specifiers

Our team chose to add %x ,%X, %b, %o, %u, %r, %R, and %p formatting. We relied on the library we have been building at Alx as well as new concepts gathered during this project.

# Supported Format Types

# TYPE	OUTPUT                                                                              

c	- Single character                                                                      

s	- String                                                                                

r	- String in reverse                                                                     

R	- String in rot13                                                                       

d	- Integer in decimal                                                                    

i	- integer                                                                               

%	- Percent sign                                                                          

Xl	- Lowercase hex                                                                         

X	- Uppercase hex                                                                         

b	- binary                                                                                

o	- octal                                                                                 

u	- unsigned                                                                              

p	- pointer                                                                               

F	- expletive


# Examples

Character: printf("%c", 'A'); Output:: A

String: printf("%s", 'This is a string.'); Output: This is a string.

Integer: printf("%i", 5); Output: 5

Expletive: printf("%F", anything); Output: FUCK
