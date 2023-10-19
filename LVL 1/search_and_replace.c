#include <unistd.h>

int main(int argc, char *argv[])
{
    int x;
    char a;
    char b;

    x = 0;
    if (argc == 4 && !argv[2][1] && !argv[3][1])
    {
        a = argv[2][0];
        b = argv[3][0];
        while(argv[1][x])
        {
            if (argv[1][x] == a)
                argv[1][x] == b;
            write(1, &argv[1][x],1);
            x++;
        }
    }
    write(1,"\n",1);
}