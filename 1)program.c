int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    printf("The sum of %d numbers is %d",n,sum(n));
    getch();
    return 0;
}
int sum(int n)
{
    if(n==1)
        return n;
    return n+sum(n-1);

}
