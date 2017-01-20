int main()
begin
int L[10];
int maxval=L[0]; 
for i=1 to n-1 do
if L[i]>maxval
maxval=L[i];
endif
endfor
return(maxval)
end

Implementation :
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int l;
char ch;
char a[100],b[100];
int i=0,j=0;
int state;
FILE *fp;

void arr(char ch)
{

   if(i>40)
    {
        b[j++]=ch;
    }
    else
    a[i++]=ch;
}

int main(int argc, char* argv[])
{

	fp = fopen("comp.txt", "r");
    state=0;
    while(1)
    {
        switch(state)
        {
            case 0: ch=fgetc(fp);
                    if(ch=='i')
                    {
                        arr(ch);
                        state=1;
                    }

                    else if(ch=='e')
                    {
                        arr(ch);
                        state=47;
                    }

                    break;

            case 1: ch=fgetc(fp);
                    if(ch=='n')
                    {
                        arr(ch);
                        state=2;
                    }
                    break;
            case 2: ch=fgetc(fp);
                    if(ch=='t')
                        {
                        arr(ch);
                        state=3;
                    }
                    break;
            case 3: ch=fgetc(fp);
                    if(ch==' ')
                        {
                        arr(ch);
                        state=4;
                    }
                    break;
            case 4: ch=fgetc(fp);
                    if(ch=='m')
                        {
                        arr(ch);
                        state=5;
                    }
                    else if(ch=='L')
                        {
                        arr(ch);
                        state=15;
                    }
                    break;


            case 5: ch=fgetc(fp);
                    if(ch=='a')
                        {
                        arr(ch);
                        state=6;
                    }
                    break;
            case 6: ch=fgetc(fp);
                    if(ch=='i')
                        {
                        arr(ch);
                        state=7;
                    }
                    else if(ch=='x')
                        {
                        arr(ch);
                        state=20;
                    }
                    break;
            case 7: ch=fgetc(fp);
                    if(ch=='n')
                        {
                        arr(ch);
                        state=8;
                    }
                    break;
            case 8: ch=fgetc(fp);
                    if(ch=='(')
                        {
                        arr(ch);
                        state=9;
                    }
                    break;
            case 9: ch=fgetc(fp);
                    if(ch==')')
                        {
                        arr(ch);
                        state=10;
                    }
                    break;
            case 10: ch=fgetc(fp);
                     if(ch=='b')
                        {
                        arr(ch);
                        state=11;
                    }
                     break;
            case 11: ch=fgetc(fp);
                     if(ch=='e')
                        {
                        arr(ch);
                        state=12;
                    }

                     break;
            case 12: ch=fgetc(fp);
                     if(ch=='g')
                        {
                        arr(ch);
                        state=13;
                    }
                     break;
            case 13: ch=fgetc(fp);
                     if(ch=='i')
                        {
                        arr(ch);
                        state=14;
                    }
                     break;
            case 14: ch=fgetc(fp);
                     if(ch=='n')
                        {
                        arr(ch);
                        state=0;
                    }
                     break;


            case 15: ch=fgetc(fp);
                     if(ch=='[')
                        {
                        arr(ch);
                        state=16;
                    }
                     break;
            case 16: ch=fgetc(fp);
                     if(ch=='1')
                        {
                        arr(ch);
                        state=17;
                    }
                     else if(ch=='0')
                        {
                        arr(ch);
                        state=24;
                    }
                     else if(ch=='i')
                        {
                        arr(ch);
                        state=18;
                    }
                     break;
            case 17: ch=fgetc(fp);
                     if(ch=='0')
                        {
                        arr(ch);
                        state=18;
                    }
                     break;
            case 18: ch=fgetc(fp);
                     if(ch==']')
                        {
                        arr(ch);
                        state=19;
                    }
                     break;
            case 19: ch=fgetc(fp);
                     if(ch==';')
                        {
                        arr(ch);
                        state=0;
                    }
                     else if(ch=='>')
                        {
                        arr(ch);
                        state=4;
                    }
                     break;

            case 20: ch=fgetc(fp);
                     if(ch=='v')
                        {
                        arr(ch);
                        state=21;
                    }
                     break;

            case 21: ch=fgetc(fp);
                     if(ch=='a')
                        {
                        arr(ch);
                        state=22;
                    }
                     break;
            case 22: ch=fgetc(fp);
                     if(ch=='l')
                        {
                        arr(ch);
                        state=23;
                    }
                     break;
            case 23: ch=fgetc(fp);
                     if(ch=='=')
                        {
                        arr(ch);
                        state=4;
                    }
                     else if(ch==')')
                        {
                        arr(ch);
                        state=46;
                    }

                     break;
            case 24: ch=fgetc(fp);              //----------------------------
                     if(ch==']')
                        {
                        arr(ch);
                        state=25;
                    }
                     break;
            case 25: ch=fgetc(fp);
                     if(ch==';')
                        {
                        arr(ch);
                        state=26;
                    }              //---------------------------
                     break;

            case 26: ch=fgetc(fp);
                     if(ch=='f')
                       {
                        arr(ch);
                        state=27;
                    }
                     break;
            case 27: ch=fgetc(fp);
                     if(ch=='o')
                        {
                        arr(ch);
                        state=28;
                    }
                     break;
            case 28: ch=fgetc(fp);
                     if(ch=='r')
                        {
                        arr(ch);
                        state=29;
                    }
                     break;
            case 29: ch=fgetc(fp);
                     if(ch==' ')
                        {
                        arr(ch);
                        state=30;
                    }
                     else if(ch=='r')
                        {
                        arr(ch);
                        state=51;
                    }
                     break;
            case 30: ch=fgetc(fp);
                     if(ch=='i')
                        {
                        arr(ch);
                        state=31;
                    }
                     break;
            case 31: ch=fgetc(fp);
                     if(ch=='=')
                        {
                        arr(ch);
                        state=32;
                    }
                     break;
            case 32: ch=fgetc(fp);
                     if(ch=='1')
                        {
                        arr(ch);
                        state=33;
                    }
                     break;
            case 33: ch=fgetc(fp);
                     if(ch==' ')
                        {
                        arr(ch);
                        state=34;
                    }
                     break;
            case 34: ch=fgetc(fp);
                     if(ch=='t')
                        {
                        arr(ch);
                        state=35;
                    }
                     break;
            case 35: ch=fgetc(fp);
                     if(ch=='o')
                        {
                        arr(ch);
                        state=36;
                    }
                     break;
            case 36: ch=fgetc(fp);
                     if(ch==' ')
                        {
                        arr(ch);
                        state=37;
                    }
                     break;
            case 37: ch=fgetc(fp);
                     if(ch=='n')
                        {
                        arr(ch);
                        state=38;
                    }
                     break;
            case 38: ch=fgetc(fp);
                     if(ch=='-')
                        {
                        arr(ch);
                        state=39;
                    }
                     break;
            case 39: ch=fgetc(fp);
                     if(ch=='1')
                        {
                        arr(ch);
                        state=40;
                    }
                     break;
            case 40: ch=fgetc(fp);
                     if(ch==' ')
                        {
                        arr(ch);
                        state=41;
                    }
                     break;
            case 41: ch=fgetc(fp);
                     if(ch=='d')
                        {
                        arr(ch);
                        state=42;
                    }
                     break;
            case 42: ch=fgetc(fp);
                     if(ch=='o')
                        {
                        arr(ch);
                        state=43;
                    }
                     break;
            case 43: ch=fgetc(fp);
                     if(ch=='i')
                        {
                        arr(ch);
                        state=44;
                    }
                     break;
            case 44: ch=fgetc(fp);
                     if(ch=='f')
                        {
                        arr(ch);
                        state=45;
                    }
                     break;
            case 45: ch=fgetc(fp);
                     if(ch==' ')
                        {
                        arr(ch);
                        state=4;
                    }
                     break;
            case 46: ch=fgetc(fp);
                     if(ch=='e')
                        {
                        arr(ch);
                        state=47;
                    }
                     break;
            case 47: ch=fgetc(fp);
                     if(ch=='n')
                        {
                        arr(ch);
                        state=48;
                    }
                     break;
            case 48: ch=fgetc(fp);
                     if(ch=='d')
                        {
                        arr(ch);
                        state=49;
                    }
                     break;
            case 49: ch=fgetc(fp);
                     if(ch=='i')
                        {
                        arr(ch);
                        state=50;
                    }
                     else if(ch=='f')
                        {
                        arr(ch);
                        state=27;
                    }
                     else state=100;
                     break;
            case 50: ch=fgetc(fp);
                     if(ch=='f')
                        {
                        arr(ch);
                        state=46;
                    }
                     break;
            case 51: ch=fgetc(fp);
                     if(ch=='e')
                        {
                        arr(ch);
                        state=52;
                    }
                     break;
            case 52: ch=fgetc(fp);
                     if(ch=='t')
                        {
                        arr(ch);
                        state=53;
                    }
                     break;
            case 53: ch=fgetc(fp);
                     if(ch=='u')
                        {
                        arr(ch);
                        state=54;
                    }
                     break;
            case 54: ch=fgetc(fp);
                     if(ch=='r')
                        {
                        arr(ch);
                        state=55;
                    }
                     break;
            case 55: ch=fgetc(fp);
                     if(ch=='n')
                       {
                        arr(ch);
                        state=56;
                    }
                     break;
            case 56: ch=fgetc(fp);
                     if(ch=='(')
                       {
                        arr(ch);
                        state=4;
                    }
                     break;
            case 100: printf("\nTokens identified\n");
                      puts(a);
                      puts(b);
                     exit(0);


        }
    }
    return 0;
}
