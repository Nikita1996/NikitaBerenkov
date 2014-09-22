#include<stdio.h>
#include<math.h>
#include<string.h>


float x1=-1,x2=-1;

int quadratic( float a, float b, float c)
{
    if(a==0)
    {
        if(b!=0) {x1 = (-c/b); return 1;}
        else if (b==0)
        {
            if(c==0) return -1;
            else return 0;
        }
    }
    float d = b*b - 4*a*c;
    if (d<0) return 0;
    else
        if(d==0) { x1 = (-b+sqrt(d))/(2*a); return 1; }
        else
        {
            d= sqrt(d);
            x1 = (-b+d)/(2*a);
            x2 = (-b-d)/(2*a);
            return 2;
        }
}


int main()
{
    float a=0, b=0, c=0;
   scanf("%f  %f  %f",&a,&b,&c);
    int ans = quadratic(a,b,c);

    if (ans==-1) { printf("infinity"); return 0; }

    printf("answer(s): ");

    if (ans==2) printf("%0.1f  %0.1f",x1,x2);
    else if (ans==1) printf("%0.1f",x1);
        else if (ans==0) printf("no roots");

    return 0;
}
