

int func(int *x)
{
    *x = 1;
    return 1;
}

void main()
{
    int y = 0;
    if(func(&y) && y )
        printf("True\n");

}

