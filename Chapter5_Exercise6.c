
// This function print number with spaces but in reverse order.
void NumberSpaces(int number)
{
    for(int i=number;i>0;i=i/10)
    {
        printf("%d\t",i%10);
    }
}

// Same Function but prints in same order by using recursion.

void NumberSpaces(int i)
{
    if (i/10>0)
        NumberSpaces(i/10);
    printf("%d\t",i%10);
}
