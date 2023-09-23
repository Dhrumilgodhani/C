#include<stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("file_data.txt","w+");
    //fp = fopen("d:\nik_s_program\file management)/file_data.txt","w+");
    fputs("\t\t\t\t....welcome to Skill Qode...\n",fp);
    fputs("\t\t\t\t...decode your skill hear...\n",fp);
    fputs("\t\t\t...you are entering learning c language...",fp);
    fclose(fp);
    return 0;
}