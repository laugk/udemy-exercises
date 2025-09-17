#include <stdio.h> // Include the standard input-output library header file for functions like printf and scanf.


int main(void) {
    FILE *fp;
    
    fp = fopen("/users/gk/Documents/data_file/a.txt","a");//w for write, a for append
    
    if (fp ==NULL) {
        printf("Unable to open file\n");
        return 1;
    }
    //file opened successfully
    char ch;
    
    for (ch = 'a'; ch<='z';ch++)
        fputc(ch, fp);
    
    fclose(fp);
    printf("Success\n");
    return 0;
}
