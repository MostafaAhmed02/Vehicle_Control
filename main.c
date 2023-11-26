/**
 * @file :main.c
 * @author : Mostafa Allam (maag7503@gmail.com)
 * @brief : This is a controller system of a vehicle sensersl.
 * @version 0.1
 * @copyright Copyright (c) 2023
 *
 */

#include "Vehicle.h"

int main()
{
    /* *************** Varible definitions *************** */
    char choice = 0;
    printf("Welcome to vehicle controller\n\n");

loop:
    printf("\n*************************\n\n");
    printf("a. Turn on the vehicle engine\n");
    printf("b. Turn off the vehicle engine\n");
    printf("c. Quit the system!!\n");
    printf("\n*************************\n");

/* Choose an option from upper the menue */
    scanf(" %c", &choice);
    switch (choice)
    {
    case 'a':
        printf("a. Turning on the vehicle!! \n\n");
        break;
    case 'b':
        printf("b. Turning off the vehicle!! \n\n");
        goto loop;
        break;
    case 'c':
        printf("c. System quitted...\n\n");return 0;

        break;
    default:
        printf("Please enter a valid input!!\n\n");
        break;
    }

    while (choice == 'a')
    {

        char Menue_Choice = 0;


        printf("*************************\n\n");
        printf("a.Turn off the engine \n");
        printf("b.Set the traffic color \n");
        printf("c.Set the room temperature \n");
        printf("d.Set the engine temperature \n");
        printf("\n*************************\n");
        printf("\n");

        scanf(" %c", &Menue_Choice);
        printf("\n");

/* Choose an option from upper the menue */
        switch (Menue_Choice)
        {
        case 'a':
            goto loop;
            break;

        case 'b':
            Set_Traffic_Light_Color();
            Display_Sensors_Statusses();
            break;

        case 'c':
            Set_Room_Temp();
            Display_Sensors_Statusses();
            break;
        case 'd':
            Set_Engine_Temp();
            Display_Sensors_Statusses();
            break;

        default:
            printf("Please etner a valid input!!\n\n");

            break;
        }
    }

}
