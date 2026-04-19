#include <stdio.h>
#include <windows.h> 

void typeText(char text[])
{
    int i = 0;
    while (text[i] != '\0')
    {
        printf("%c", text[i]);
        fflush(stdout); 
        Sleep(70);      
        i++;
    }
}

int main()
{
    typeText("uski ankhon me pehla kajal\n");
    Sleep(500);
    typeText("baton sy krti ghayal\n");
    Sleep(500);
    typeText("sanson me h us ka nam\n");
    Sleep(1000);
    typeText("\n~ written by Ahmad\n");

    return 0;
}
