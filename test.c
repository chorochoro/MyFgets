char *MyStrcat(char *f,char *s)
{
    int i = 0;
    int j = 0;
    for(i = 0;f[i] != '\0';i++)
    {
        printf("最初の文字列 %d 文字目をスキップします[%c]\n",i,f[i]);
    }
    for(j = 0;s[j] != '\0';j++)
    {
        printf("最初の文字列 %d 文字目に 二つ目の文字列 %d 文字目をコピーします[%c]\n",j+i,j,s[j]);
        memcpy(&f[i+j],&s[j],1);
    }
    printf("終端文字列をつけます\n");
    memcpy(&f[i+j],&s[j],1);
    
}
char* myfget(char *s,int n , FILE *fp)
{
    int c,i= 0;
    while(i<n-1 && (c = fgetc(fp)) != EOF)
    {
        s[i++] = c;
        if(c == '\n')break;
    }
    s[i] = 0;
    if(i == 0 && c == EOF) {
        return NULL;
    }
    return s;
}
int main()
{
    int rnt = 0;
    char st[100];
    while(Myfget(st,sizeof(st),stdin)){
        printf("FILE READ\n");
        printf("[%s]",st);
        
        char str[100] = "Choro_";
        MyStrcat(str,"is_Dead");
        printf("%s",str);
    }
    return 0;
}
