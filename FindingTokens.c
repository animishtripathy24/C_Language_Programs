#include <stdio.h>
#include <string.h>

int IsAlpha(char ch)
{
    return ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'));
}

int IsDigit(char ch)
{
    return (ch >= '0' && ch <= '9');
}

int IsIdentifier(char s[])
{
    if (!IsAlpha(s[0]) && s[0] != '_') return 0;
    int len = strlen(s);
    for (int i = 1; i < len; i++) {
        if (IsAlpha(s[i]) || IsDigit(s[i]) || s[i] == '_') continue;
        return 0;
    }
    return 1;
}

int IsInteger(char s[])
{
    int cnt = 0;
    if (strlen(s) == 0) return 0;
    for (int i = 0; i < strlen(s); i++) {
        if (IsDigit(s[i])) cnt++;
    }
    return (cnt == strlen(s));
}

int IsFloat(char s[])
{
    int cnt = 0;
    int dot = 0;
    for (int i = 0; i < strlen(s); i++) {
        if (IsDigit(s[i])) cnt++;
        else if (s[i] == '.') dot++;
    }
    return (dot == 1 && (cnt + 1 == strlen(s)));
}

int IsKeyword(char s[])
{
    char keywords[33][1000] = {"auto", "break" ,"case","char","const",
    "continue","default","do","double","else","enum","extern",
    "float","for", "goto","if","int", "long","register",
    "return","short","signed","sizeof","static","struct",
    "switch","typedef", "union","unsigned","void","volatile",
    "while","string"};
    for (int i = 0; i < 33; i++)
    {
        if (strcmp(keywords[i] , s) == 0) return 1;
    }
    return 0;
}

int IsOperator(char ch) {
    char operators[] = {'<', '>', '=','!','&','`','|','^','+','-','*','/','\0'};
    for (int i = 0; i < strlen(operators); i++) {
        if (ch == operators[i]) return 1;
    }
    return 0;
}

int IsSeparator(char ch)
{
    char separators[] = {',', ';', ':',')','(','{','}','[',']','\0'};
    for (int i = 0; i < strlen(separators); i++)
    {
        if (ch == separators[i]) return 1;
    }
    return 0;
}

int main()
{
    char str[1000];
    char temp[1000];
    scanf("%[^?]s", str);
    int st = 0;
    for (int i = 0; i < strlen(str) ; i++)
    {
        temp[0] = '\0';
        if (i + 1 == strlen(str) || str[i] == ' ' || str[i] == '\n' || IsSeparator(str[i]) || IsOperator(str[i]))
        {
            // taking substring starting from st and end at i - 1
            int k = 0 ;
            while (st < i)
            {
                temp[k] = str[st];
                k++;
                st++;
            }
            temp[k] = '\0';

            if (IsKeyword(temp))
            {
                printf("<%s> is a keyword\n",temp);
            }
            else if (IsFloat(temp))
            {
                printf("<%s> is a float\n",temp);
            }
            else if (IsInteger(temp))
            {
                printf("<%s> is an integer\n",temp);
            }
            else if (IsIdentifier(temp))
            {
                printf("<%s> is an identifier\n",temp);
            }
            else if (strlen(temp))
            {
                printf("<%s> is invalid\n", temp);
            }

            if (IsSeparator(str[i]))
            {
                printf("<%c> is a separator\n",str[i]);
            }
            else if (IsOperator(str[i]))
            {
                if (i + 1 < strlen(str) && IsOperator(str[i + 1]))
                {
                    printf("<%c%c> is an operator\n",str[i] , str[i + 1]);
                    i++;
                }
                else
                {
                    printf("<%c> is an operator\n" , str[i]);
                }
            }
            st = i + 1;
        }
    }
    return 0;
}
