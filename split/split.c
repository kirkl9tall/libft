#include <stdio.h>
#include <stdlib.h>

int countword(char const *s)
{
      int count;
      int x;
      count = 1;
      x = 0;
      if (s[x] == '\0')
              return(0);
      while (s[x] == ' ' || s[x] == '\t')
              x++;
      while(s[x])
      {
              if (s[x] != ' ' && s[x] != '\t')
                      x++;
              else
                      count++;
              x++;
      }
      return (count);
}
char **ft_split(char const *s, char c)
{
        int x;
        int y;
        int z;
        int t = 4;
        int u = countword (s);
        char **strs = malloc(u * sizeof(char *));
    
    for (int i = 0; i < u; i++)
        strs[i] = malloc(t * sizeof(char));
        x = 0;
        y = 0;
        z = 0;
        while (s[x])
        {
                if (s[x]!= c)
                {
                        strs[y][z] = s[x];
                        z++;
                        x++;
                }
                else
                {
                        strs[y][z] = '\0';
                        x++;
                        y++;
                        z = 0;
                }

        }
       strs[y][z] = '\0';

                return (strs);
}
int main ()
{
        int x , y;
        char s[] = "smemmoveasa fsfs dada 1234";
        char c = ' ';
        char **ss = ft_split(s,c);

        x = 0;
        y = 0;
        while (x < 4)
        {
        printf("%s\n",ss[x]);
        x++;
        }
}
