#include<stdio.h>
#include<string.h>
//This function helps check polindrome without using string reverse, so it consumes less memory and its execution time is half of the string.
int Check_Polindrome(char *ptr,int len) //*ptr -> string, len -> string length.
{
    int j=len-1;                        //j -> the end of char
    for(int i=0; i<len/2; i++)          //i -> first char, loops excutes till it reaches at mid point of the string length.
    {
        if(ptr[i]==ptr[j])
        {
            j--;                        //The given block checks first and end char, second and end-1 and so on until they meet mid of the string.
            continue;
        }
        else
            return 0;                   //That chars does not same, return 0 to the calling function.
    }
    return 1;                           // "else" part is not run, return 1 to the calling function.
} //For return the value 0 as not polindrome and 1 as polindrome


int main()
{
    char str[10];
    int str_len;
    int poly;
    printf("Enter the String\n");
    scanf("%s",str);
    str_len=strlen(str);
    poly=Check_Polindrome(str,str_len);

    if(poly == 0)
        printf("--> It is Not Polindrome\n");
    else
        printf("--> It is Polindrome\n");
    return 0;
}

