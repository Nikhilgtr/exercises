void main()
{
    unsigned char x, result;
    int i;
    for(i = 0; i< 255; i++)
    {
        x   = i;
        result = (x / 20);
        if(result == 31) {
            printf("Done i = %d\n",i);
        }
    }
}
