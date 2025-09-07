// a)
#include <stdio.h>
#include <string.h>
int main(){
    char s1[200] = "Hello, ";
    char s2[] = "World!";
    strcat(s1, s2);
    printf("%s\n", s1);
    return 0;
}

// b)
#include <stdio.h>
#include <string.h>
int main(){
    char s[200];
    scanf("%199s", s);
    int i=0, j=strlen(s)-1;
    while(i<j){
        char t=s[i]; s[i]=s[j]; s[j]=t; i++; j--;
    }
    printf("%s\n", s);
    return 0;
}

// c)
#include <stdio.h>
#include <string.h>
int vowel(char c){
    c |= 32;
    return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
}
int main(){
    char s[300];
    fgets(s, 300, stdin);
    int len = strlen(s), write=0;
    for(int i=0;i<len;i++){
        if(s[i]=='\n') break;
        if(!vowel(s[i])) s[write++] = s[i];
    }
    s[write] = '\0';
    printf("%s\n", s);
    return 0;
}

// d)
#include <stdio.h>
#include <string.h>
int main(){
    int n;
    scanf("%d\n", &n);
    char arr[n][100];
    for(int i=0;i<n;i++) fgets(arr[i], 100, stdin);
    for(int i=0;i<n;i++){
        arr[i][strcspn(arr[i], "\n")] = '\0';
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(strcmp(arr[i], arr[j]) > 0){
                char t[100]; strcpy(t, arr[i]); strcpy(arr[i], arr[j]); strcpy(arr[j], t);
            }
        }
    }
    for(int i=0;i<n;i++) printf("%s\n", arr[i]);
    return 0;
}

// e)
#include <stdio.h>
#include <ctype.h>
int main(){
    char c;
    scanf(" %c", &c);
    c = tolower((unsigned char)c);
    printf("%c\n", c);
    return 0;
}


