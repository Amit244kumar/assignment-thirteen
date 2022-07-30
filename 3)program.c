int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    printf("The sum of n odd natural number is %d",sum(n));
    getch();
    return 0;
}
int sum(int n)
{
    if(n==0)
        return n;
    return (n*2-1)+sum(n-1);
}

