int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    printf("The factorial of numbers is %d",fact(n));
    getch();
    return 0;
}
int fact(int n)
{
    if(n==1)
        return n;
    return n*fact(n-1);
}
