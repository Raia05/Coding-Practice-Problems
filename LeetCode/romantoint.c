// runtime: 3 ms
int romanToInt(char* s) 
{
    int prevValue = 0;
    int sum = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        int value;
        switch(s[i])
        {
            case 'I':
                value = 1;
                break;
            case 'V':
                value = 5;
                break;
            case 'X':
                value = 10;
                break;
            case 'L':
                value = 50;
                break;
            case 'C':
                value = 100;
                break;
            case 'D':
                value = 500;
                break;
            case 'M':
                value = 1000;
                break;
        }
        if (prevValue < value && i > 0)
        {
            sum-=prevValue*2;
        }
        sum+=value;

        prevValue = value;   
    }
    return sum;
}