int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    printf("The sum of digit is %d",sum(n));
    getch();
    return 0;
}
int sum(int n)
{
    if(n==0)
        return 0;
    return (n%10)+sum(n/10);
}
