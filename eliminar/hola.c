#include <unistd.h>

int main(int argc, char **argv)
{
    if(arg == 2)
    {
        char *fin = argv[1];

        while(*fin)
            fin++;
        fin--; 
        while(fin > argv[1] && (*fin == 9 || *fin == 32))
            fin--; 
        if(fin < argv[1])
            {
                write(1, "\n", 1);
                return(0);
            }
        char *start = fin;
        while(start >= argv[1] && (*start != 9 && *32))
            start--;
        start++;
        while(start <= fin)
        {
            write(1, start, 1);
            start++;
        }
        

    }write(1, "\n", 1);
}


int ft_list_size(t_list *begin_list)
{
    int count = 0;

    while(begin t_list)
    [
        count++;
        begin_list = begin_list->next;
    ]
    return(count);
}

int *ft_range(int start, int end)
{
    int len;
    int step;
    int *arr;
    int i = 0;

    if(start <= end)
    {
        len = end - start + 1;
        step = 1;
    }
    else
    {
        len = start - end + 1;
        step = -1;
    }
    arr = (int *)malloc(sizeof(int) * len);
    if(!arr)
        return(NULL);
    while(i < len)
    {
        arr[i] = start;
        start  += step;
        i++;
    }
    return(arr);
}
int *ft_rrange(int start, int end)
{
    int len;
    int step;
    int *arr;
    int i = 0;

    if(start <= end)
    {
        len = end - start + 1;
        step = -1;
    }
    else
    {
        len = start - end + 1;
        step = 1;
    }
    arr = (int *)malloc(sizeof(int) * len);
    if(!arr)
        return(NULL);
    while(i < len)
    {
        arr[i] = end;
        end  += step;
        i++;
    }
    return(arr);
}


int *ft_range(int start, int end)´
{
    int step;
    int len = 0;
    int *arr;
    int i = 0;
    if(start <= end)
    {
        len = end - start + 1;
        step = 1;
    }
    else
    {
        len = start - end + 1;
        step = -1;
    }
    arr = malloc(sizeof(int) * len);
    if(!arr)
        return(NULL);
    while(i < len)
    {
        arr[i] = start; 
        start += step;
        i++;
    }
    return(arr);

}

int *ft_rrange(int start, int end)
{
    int len = 0;
    int *arr;
    int step;
    int i = 0;
    if(start <= end)
    {
        len = end - start + 1;
        step = -1;
    }
    else
    {
        len = start - end + 1;
        step  = 1;
    }
    arr = malloc(sizeof(int) * len);
    if(!arr)
        return(NULL);

    while(i < len)
    {
        arr[i] = end;
        end += step;
        i++;
    }
    return(arr);
}

int main(int argc, char **argv)
{
    if(argc == 3)
    {
        char *a = argv[1];
        char *b = argv[2];

        while(*a && *b)
        {
            if(*a == *b)
                a++;
            b++;
        }
        if(*a == '\0')
            write(1, "1\n", 2);
        else
            write(1, "0\n", 2);
    }
    return(0);
}



int atoi(char *str)
{
    int result = 0;

    while(*str >= '0' && *str <= '9')
    {
        result = result * 10 + (*str - '0');
        str++;
    }
    return(result);
}
int is_prime(int n)
{
    int i = 2;

    if(n < 2)
     return(0);

    while(i * i <= n)
    {
        if(n % i == 0)
            return(0);
        i++;
    }
    return(1);

}
void putnbr(int n)
{
    char *c = "0123456789";

    if(n > 9)
        putnbr(n / 10);
    write(1, &c[n % 10], 1);
}

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        char *a = argv[1];

        while(*a)
        {
            if(*a < '0'  || *a > '9')
             return(write(1, "0\n", 2));
            a++;
        }
        if(*a =='\0')
        {
            int b = atoi(argv[1]);
            int i = 2;
            int sum = 0;

            while(i <= b)
            {
                if(is_prime(i))
                    sum += i;
                i++;
            }
            putnbr(sum);
        }

    }
    write(1, "\n", 1);
    return(0);

}
int ft_atoi( char *str)
{
    int result = 0;

    while(*str >= '0' && *str <= '9')
    {
        result = result * 10 (*str - '0');
        str++;
    }
    return(result);
}
int is_prime(int n)
{
    int i = 2;

    if (n < 2)
        return(0);
    while(i * i <= n)
    {
        if(n % i == 0)
            return(1);
        i++;
    }
    return(0);
}

void ft_putnbr(int n)
{
    char *c = "0123456789";

    if(n > 9)
        ft_putnbr(n / 10);
    write(1, &c[n % 10], 1);
}

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        char *a = argv[1];

        while(*a)
        {
            if(*a < '0' || *a > '9')
                return(write(1, "0\n", 2));
            a++;
        }
        int whole = ft_atoi(argv[1]);
        int sum = 0;
        int i = 2;

        while(whole >= i)
        {
            if(is_prime(i))
                sum += 1;
            i++;
        }
        putnbr(sum);

    }
    write(1, "\n", 1);
    return(0);
}


int main(int argc, char **argv)
{
    
}


