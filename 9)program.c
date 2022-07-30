int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("The number has %d digits",digit(n));
    getch();
    return 0;
}
int digit(int n)
{
    int i=0;
    if(n==0)
        return 0;
    i++;
    return i+digit(n/10);
}
