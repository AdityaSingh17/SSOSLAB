/* Design, develop and implement a C/C++/Java program to implement page replacement algorithms LRU and FIFO.
   Assume suitable input required to demonstrate the results. */
#include<stdio.h>
#include<stdlib.h>

void FIFO(char str[], int len, int frames) 
{
    int i=0, j=0, k=0, flag=0, count=0;
    char fqueue[10];
    for(i=0; i<frames; i++)
        fqueue[i] = -1;
    printf("\nPAGE\tFRAMES\tFAULTS");
    for(i=0; i<len; i++) 
    {
        printf("\n%c\t", str[i]);
        for(k=0; k<frames; k++) 
        {
            if(fqueue[k] == str[i])
                flag = 1;
        }
        if(flag == 0) 
        {
            fqueue[j] = str[i];
            j++;

            for(k=0; k<frames; k++)
                printf("%c ", fqueue[k]);
            printf("\tPage fault %d", count+1);
            count++;
        } 
        else 
        { 
            flag = 0;            
            for(k=0; k<frames; k++)
                printf("%c ", fqueue[k]);
            printf("\tNo page fault");
        }
        if(j == frames)
            j = 0;
    }
}

void LRU(char str[], int len, int frames) 
{
    int i=0, j=0, k=0, m=0, flag=0, count=0, top=0;
    char fqueue[10];
    for(i=0; i<frames; i++)
        fqueue[i] = -1;
    printf("\nPAGE\tFRAMES\tFAULTS");
    for(i=0; i<len; i++) 
    {
        printf("\n%c\t", str[i]);
        for(k=0; k<frames; k++) 
        {
            if(fqueue[k] == str[i]) 
            {
                flag=1;
                break;
            }
        }
        if(j!=frames && flag == 0) 
        {
            fqueue[top] = str[i];
            j++;
            if(j != frames) top++;
        } 
        else 
        {
            if(flag == 0) 
            {
                for(k=0; k<top; k++)
                    fqueue[k] = fqueue[k+1];
                fqueue[top] = str[i];
            }
            if(flag == 1) 
            {
                for(m=k; m<top; m++) {
                    fqueue[m] = fqueue[m+1];
                }
                fqueue[top] = str[i];
            }
        }
        for(k=0; k<frames; k++)
            printf("%c ", fqueue[k]);
        if(flag == 0) {
            printf("\tPage fault %d", count+1);
            count++;
        } else
            printf("\tNo page fault");
        flag = 0;
    }
}

int main() 
{
    int ch, repeat=1, i, len, frames;
    char str[25];
    printf("Enter the no of empty frames: ");
    scanf("%d", &frames);
    printf("Enter the length of the string: ");
    scanf("%d", &len);
    printf("Enter the string: ");
    scanf("%s", str);
    do 
    {
        printf("\n**** MENU ****\n");
        printf("1: FIFO\n2: LRU\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch(ch) 
        {
            case 1:
                FIFO(str, len, frames);
                break;
            case 2:
                LRU(str, len, frames);
                break;
            default:
                exit(0);
        }
        printf("\n\nEnter 1 to continue, 0 to finish: ");
        scanf("%d", &repeat);
    } while(repeat == 1);
    return 0;
}