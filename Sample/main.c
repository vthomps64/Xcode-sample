//
//  main.c
//  Sample
//
//  Created by Vic Thompson on 2013-08-21.
//  Copyright (c) 2013 Vic Thompson. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>

int GetArgument (bool isLeft);

int GetArgument (bool isLeft)
{
    int     vNum;
    if (isLeft)
        printf("Enter operand 1: ");
    else
        printf("Enter operand 2: ");
        scanf("%d", &vNum);
        fpurge(stdin);

    return vNum;

}

int main()
{
    int     vFirstArg,
            vSecondArg;
    char    vOperation;
    bool    vFinished;
    
    // Initialise flag
    vFinished = false;
    
    // Loop until user is done
    while (vFinished != true)
    {
        printf("What operation do you want to do?\n");
        scanf("%c", &vOperation);
        fpurge(stdin);

        if (vOperation == '+')
        {
            vFirstArg = GetArgument(true);
            vSecondArg = GetArgument(false);

            printf("\n%d + %d = %d\n",
                   vFirstArg,
                   vSecondArg,
                   vFirstArg+vSecondArg);
        }
        else

        if (vOperation == '-')
        {
            vFirstArg = GetArgument(true);
            vSecondArg = GetArgument(false);
            
            printf("\n%d - %d = %d\n",
                   vFirstArg,
                   vSecondArg,
                   vFirstArg-vSecondArg);
        }
        else
        
        if (vOperation == '*')
        {
            vFirstArg = GetArgument(true);
            vSecondArg = GetArgument(false);
            
            printf("\n%d x %d = %d\n",
                   vFirstArg,
                   vSecondArg,
                   vFirstArg*vSecondArg);
        }
        else

        if (vOperation == '/')
        {
            vFirstArg = GetArgument(true);
            vSecondArg = GetArgument(false);
            
            while (vSecondArg == 0)
            {
                printf("Invalid value, re-enter operand 2: ");
                scanf("%d", &vSecondArg);
                fpurge(stdin);
            }
            
            printf("\n%d ÷ %d = %d\n",
                   vFirstArg,
                   vSecondArg,
                   vFirstArg/vSecondArg);
        }

        else
            vFinished = true;
    }

    printf("Finished.\n");

    return 0;
}