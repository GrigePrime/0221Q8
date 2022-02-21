#include <stdio.h>

int main(){
    int n ;
    int l, f;
    scanf("%d", &n);
    for(int i = 0;i < n;i++)
    {
        scanf("%d%d", &l, &f);
        for(int j = 0;j < f;j++)
        {
            for(int k = 0 ;k < l;k++)
            {
                for(int a = 0;a < a+1 && a<l;a++)
                {
                    printf("%d\n", a+1);
                }
            }
        }
    }
}
