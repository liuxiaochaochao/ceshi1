#include <stdio.h>
char s[1024];
int index = 0;
int aaa(char x)
{
    int count = 0;
    for (int i = 0; i < index; i++)
    {
        if (x == s[i])
        {
            count++;
        }
    }

    if (count == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{

    printf("进入敏感词系统！\n");

    while (1)
    {
        printf("1---进入敏感词系统增加！\n");
        printf("2---进入敏感词系统删除！\n");
        printf("3---进入敏感词系统显示！\n");
        printf("4---进入敏感词系统替换！\n");
        printf("5---退出敏感词系统！\n");
        int a;
        scanf("%d", &a);

        if (a == 1)
        {
            printf("增加敏感词\n");
            char n;
            scanf("%c", &n);
            scanf("%c", &n);
            s[index] = n;
            index++;
            printf("输入成功，回车继续");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (a == 2)
        {
            printf("删除最后一个\n");

            if (index == 0)
            {
                printf("删除失败！\n");
            }
            else
            {
                index--;
                printf("删除成功！\n");
            }
        }
        if (a == 3)
        {
            printf("输入的字符如下：\n");
            for (int i = 0; i < index; i++)
            {
                printf("%c", s[i]);
            }
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (a == 4)
        {
            printf("请输入一段英文");
            char neirong[1024];
            scanf("%s", neirong);

            for (int i = 0; 1; i++)
            {
                if (neirong[i] == '\0')
                {
                    break;
                }
                char x = neirong[i];
                int r = aaa(x);
                if (r == 1)
                {
                    neirong[i] = '*';
                }
                printf("%c", neirong[i]);
            }
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (a == 5)
        {
            printf("回车退出！");
            break;
        }
    }

    return 0;
}