//{==============================================================================================
//!@brief THis programme solves the quadratic equations
//! @file obese1.c
//! @author NIkita Berenkov 414 group
//! @version 1.1.2
//! @details This programme uses the function
//!
//! @see
//! @code int SolveSquare( db a, db b, db c, db *x1,db *x2)
//!
//{=====================================================================================================




#include<stdio.h>
#include<math.h>
#include<string.h>
#define DEBUG
#include<assert.h>
double st;

 typedef double db;
  db x1=-1,x2=-1;

//{=========================================================================================================
/// @brief          The function SolveSquare calculate the roots of the quaratic equation
///
/// @param          a, b ,c  - coefficients of the equation
///
/// @param[out]     x1 - the first root of the equation
/// @param[out]     x2 - the second root of the equation
///
/// @return          1 - it means that the root exists and it is only one
///                 2 - it means that the equation has 2 roots
///                 0 - it means that there are no roots
///                 -1- it means that the solution of the root is infinity
//}=============================================================================================================

int SolveSquare( db a, db b, db c, db *x1,db *x2)
{
#ifdef DEBUG

    if(a==0)
    {
        if(b!=0) {*x1 = (-c/b); return 1;}
        else if (b==0)
        {
            if(c==0) return -1;
            else return 0;
        }
    }
    db d = b*b - 4*a*c;
    if (d<0) return 0;
    else
        if(d==0) { *x1 = (-b+sqrt(d))/(2*a); return 1; }
        else
        {
            d= sqrt(d);
            *x1 = (-b+d)/(2*a);
            *x2 = (-b-d)/(2*a);
        return 2;

        }


//error:assert('s');
#endif
//error:
}

int main()
{
    db a=0, b=0, c=0;
    printf("put here the coeffcients of quadratic equation(2.3 3.23 1)");
        printf("\n");

    #ifdef DEBUG
//*
/// This verification tests whether are any parametres put in a wrong way
//*
    while (scanf("%lg %lg %lg",&a,&b,&c)<=2)
    {


    do getchar();
        while (getchar()!='\n');
    printf("write the right parametres, please!!!");
    printf("\n");
    }
     #endif // DEBUG

    int ans = SolveSquare(a,b,c,&x1,&x2);
    switch (ans)
    {
        case -1  : printf("infinity"); return 0;break;
        case 0   : printf("no roots");break;
        case 1   : printf("answer(s): "); printf("%0.2f",x1);break;
        default :printf("answer(s): ");printf("%0.2f  %0.2f",x1,x2);break;

    }


    return 0;
}
