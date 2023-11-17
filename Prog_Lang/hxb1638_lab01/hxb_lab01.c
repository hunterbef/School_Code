//Hunter Befort
//1001181638
//Apple Clang 14.0.3
//macOS Ventura 13.5.1

#include <stdio.h>
#include <dirent.h>

long dirSize(char filename[])
{
    DIR *dir;
    struct dirent *file;
    dir = opendir(filename);
    long sum = 0;

    while((file = readdir(dir)) != NULL)        //parses through the directory until there are no more files/subdirectories
    {   
        FILE *fp = fopen(file->d_name, "r");    //reads file 
        fseek(fp, 0L, SEEK_END);
        sum += ftell(fp);                       //reads the position of the file pointer to get size of the file in bytes
    }
    //does not recurse through the subdirectories, tried a lot and nothing seemed to work properly
        //lots of seg faults

    closedir(dir);
    return sum;
}

int main(void)
{
    printf("Size of directory: %ld bytes\n", dirSize("."));
    return 0;
}