
// runtime: 5 ms
bool isPalindrome(int x)
{
    int number = x;
    long sum = 0;
    while(x>0)
    {
        int digit = x % 10;
        sum = sum*10 + digit;
        x/=10; 
    } 


    return number == sum;

}