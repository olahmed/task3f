/**
 ******************************************************************************
 * @file           : task3
 * @author         : ola ahmed
 * @brief          : Contains the functionality of my application
 ******************************************************************************
 */

/* ********************** Includes Section Start ********************** */
#include <stdio.h>
#include <stdlib.h>
/* ********************** Includes Section End   ********************** */

/* ********************** Macro Section Start ************************* */

/* ********************** Macro Section End   ************************* */

/* ******************* Global Variables Section Start ************** */

/* ********************** Global Variables  Section End   ************* */

/* ********************** Global Decleration Section Start ************* */

/* ********************** Global Decleration  Section End   ************ */

/* ********************** Sub-Program Declerations Section Start ******* */

/* ********************** Sub-Program Declerations Section End ******* */

/* ********************** Sub-Program Section Start ************* */
int main()
{
    unsigned char number;
    unsigned char reminder;
    unsigned char indecator;
    printf("enter the number:");
    scanf("%d",&number);
    for(indecator=1; indecator<=100; indecator++)
    {
        reminder=(indecator%number);
        if(reminder==0)
        {
            printf("%d   ",indecator);
        }
        else {}
    }
    return 0;
}
/* ********************** Sub-Program Section End ************* */

/**
 ******************************************************************************
 User          Date                 Brief
 ******************************************************************************
 ola ahmed      30jan2024           third task d
*/
