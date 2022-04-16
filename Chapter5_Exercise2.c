
int power(int x, int y)
{
    int p = 1;
    for (int i = 1; i<=y; i++)
    {
        p = p * x;
    }
    return p;
}
