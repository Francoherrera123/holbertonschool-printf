#ifndef printf
#define printf

int _printf(const char *format, ...);
void reverse(char *s, int length);
void itoa(int n, char *s);
void ftoa(double f, char *s);


/**
 *
 *
 *
 */
void reverse(char *s,int lenght)
{
        int i, j;
        char c;

        for (i = 0, j = lenght - 1; i < j; i++, j--)
        {
                c = s[i];
                s[i] = s[j];
                s[j] = c;
        }
}
/**
 *
 *
 *
 *
 */
void itoa(int n, char *s)
{
        int i, sign;
        if ((sign = n) < 0)
        {
               n = -n;
        }
        i = 0;
        do
        {
                s[i++] = n % 10 + '0';
        }while ((n /= 10) > 0);

        if (sign < 0)
        {
                s[i++] = '-';
        }
        s[i] = '\0';
        reverse(s, i);

}
/**
 *
 *
 *
 *
 *
 *
 */
void ftoa(double f, char *s)
{
        int i = 0, sign = 1, int_part, frac_part;
        if (f < 0)
        {
                sign = -1;
                f = -1;
                f = -f;
        }
        int_part = (int) f;
        frac_part = (int) ((f - int_part) * 1000000);

        if (sign == -1)
                s[i++] = '-';

        itoa(int_part, &s[i]);
        while (s[i] != '\0')
                i++;
        s[i++] = '.';
        if (frac_part == 0)
        {
                s[i++] = '0';
        }
        else
        {
                itoa(frac_part, &s[i]);
        }
}

~                                                                                                                  ~          
#endif

