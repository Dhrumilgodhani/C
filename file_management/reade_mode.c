#include<stdio.h>

int main()
{
    FILE *fp;
    char buff[500];

    fp = fopen("file_data.txt","r");
    while(fscanf(fp,"%s",buff) != EOF)
    {
        printf("%s ",buff);

    }
    fclose(fp);
    return 0;
}


// EOF --> End Of File
// fopen(txt file name);  -->  to open file 