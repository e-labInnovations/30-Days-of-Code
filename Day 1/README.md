## Notes
- Use ` %[^\n]` to accept string upto newline (`\n`)
- Use `%lf` for double and `%.1lf` for double with one decimal point
- We can concatenate two strings to new string using `snprintf` function

#### Syntax: The syntax of snprintf() method is: 

`int snprintf(char *str, size_t size, const char *format, …);`

#### Parameters:

- `*str` : is a buffer.
- `size` : is the maximum number of bytes (characters) that will be written to the buffer.
- `format` : C string that contains a format string that follows the same specifications as format in printf
- `…` : the optional ( …) arguments are just the string formats like `(“%d”, myint)` as seen in printf.

#### Return value:

The number of characters that would have been written on the buffer, if ‘n’ had been sufficiently large. The terminating null character is not counted.
If an encoding error occurs, a negative number is returned.