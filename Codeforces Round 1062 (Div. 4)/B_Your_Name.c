#include <stdio.h>
#include <string.h>
int main()
{
    int q;
    scanf("%d", &q);
    while (q--)
    {
        int n;
        char s[21], t[21];
        scanf("%d %s %s", &n, s, t);

        int couS[26] = {0};
        int couT[26] = {0};

        for (int i = 0; i < n; i++)
        {
            couS[s[i] - 'a']++;
            couT[t[i] - 'a']++;
        }

        int check = 1;
        for (int i = 0; i < 26; i++)
        {
            if (couS[i] != couT[i])
            {
                check = 0;
                break;
            }
        }

        if (check)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}