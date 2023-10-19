#include <unistd.h>

int main(int argc, char *argv[])
{
    int x;
    int y;
    char c;

    x = 0;
    y = 0;
    if (argc == 2)
    {
        while (argv[1][x])
        {
            if (argv[1][x] >= 'a' && argv[1][x] <= 'z')
            {
                c = 'a';
                while (c != argv[1][x])
                {
                    write(1,&argv[1][x],1);
                    c++;
                }
            }
            if (argv[1][x] >= 'A' && argv[1][x] <= 'Z')
            {
                c = 'A';
                while (c != argv[1][x])
                {
                    write(1,&argv[1][x],1);
                    c++;
                }
            }
            else
                write(1,&argv[1][x],1);
            x++;
        }
    }
    write(1,"\n",1);
}