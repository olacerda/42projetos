#include <stdio.h>
#include <unistd.h>


int sinalcount(char *str)
{
    int number;
    int i;

    i = 0;
    number = 0;
    while(str[number])
    {
        if(str[number] == 45)
        {
            i++;
            if (i > 1)
                i = 0;
        }
        number++;
    }
    return (i);
}


int main(int argc, char **argv)
{
    int a;
    
    a = sinalcount(argv[1]);

    if (argc < 2) 
    {
        printf("Usage: %s <number>\n", argv[0]);
    }
    else
    {
        printf("%i", a);
        printf("\n");
    }
}
/*oaisdoasdoiasd
dadasdas



qweasdasd          )
            qweqwe
            _SC_THREAD_ATTR_STACKADDR

            asd
            as
            deasdasdtasd
            ads
            default
asdasd

asdasd
