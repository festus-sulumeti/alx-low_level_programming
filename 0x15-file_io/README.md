C - File I/O

File I/O refers to the input/output operations that are performed on files in C programming language. It is a critical feature of C that allows programs to read data from files, write data to files, and manipulate files.

Opening a File
Before performing any I/O operations, a file must be opened. The fopen() function is used to open a file, and it returns a pointer to the file that will be used in subsequent file operations.

Reading Data from a File
Data can be read from a file using the fread() function. It reads data from the file pointed to by the file pointer.

Writing Data to a File
Data can be written to a file using the fwrite() function. It writes data to the file pointed to by the file pointer.

Closing a File
After performing I/O operations on a file, it must be closed using the fclose() function. This ensures that all data has been written to the file and that any system resources used by the file have been released.

Error Handling
When working with files, it is essential to handle errors correctly. The ferror() function can be used to determine whether an error has occurred when reading or writing data to a file.
