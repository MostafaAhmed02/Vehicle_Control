


#include "Vehicle.h"

/* *************** Golabal Varible definitions Section *************** */
char color = 'R';
char AC_Status = 0;
char Engine_Status = 0;
char Engine_Temp_Control = 0;
unsigned char Vehicle_Speed = 0;
unsigned char Temperature = 35;
unsigned char Engine_Temperature = 80;

/* *************** Function definitions section *************** */

void Turn_on_Menue()
{
    char Choice = 0;
    printf("a.Turn off the engine \n");
    printf("b.Set the traffic color \n");
    printf("c.Set the room temperature \n");
    printf("d.Set the engine temperature \n");

    scanf(" %c",&Choice);
}
void Display_Sensors_Statusses()
{
    printf("\n*************************\n\n");
    if(Engine_Status)
    {
        printf("Engine status is ON!!\n");
    }
    else
    {
        printf("Engine status is ON!!\n");
    }
    if (AC_Status)
    {
        printf("AC is ON\n");
    }
    else
    {
        printf("AC is OFF\n");
    }

    printf("Vehicle speed = %i Km/h\n",Vehicle_Speed);

    printf("Room temperature = %i degree\n", Temperature);

    if (Engine_Temp_Control)
    {
        printf("Engine temperature controller is ON\n");
    }
    else
    {
        printf("Engine temperature controller is OFF\n");
    }
    printf("Engine temperature = %i degree\n", Engine_Temperature);
    printf("\n*************************\n");
}
void Set_Traffic_Light_Color()
{

    printf("Enter the required color (G , R , O) : ");
    scanf(" %c",&color);
    printf("\n");
    switch (color)
    {
        case 'G' :
        Engine_Status = 1;
        Vehicle_Speed = 100;
        break;

        case 'O' :
        Engine_Status = 1;
        Vehicle_Speed = 30;
        break;
        case 'R' :
        Engine_Status = 1;
        Vehicle_Speed = 0;
        break;
        default:
        Engine_Status = 0;
        printf("Enter a valid color!!\n");
        break;
    }
}
void Set_Room_Temp()
{

    printf("Enter the Room Temperature: ");
    scanf(" %i",&Temperature);
    printf("\n");
    if(Temperature < 10)
    {
        printf("Enine is ON!!\n");
        AC_Status = 1;
        Temperature = 20;
    }
    else if(Temperature > 30)
    {
        printf("Enine is ON!!\n");
        AC_Status = 1;
        Temperature = 20;
    }
    else
    {
        AC_Status = 0;
    }
}
void Set_Engine_Temp()
{
    printf("Enter Engine temperature : ");
    scanf(" %i",&Engine_Temperature);
    printf("\n");
    if(Engine_Temperature<100)
    {
        Engine_Temp_Control = 1;
        Engine_Temperature = 125;
    }
    else if(Engine_Temperature>150)
    {
        Engine_Temp_Control = 1;
        Engine_Temperature = 125;
    }
    else
    {
        Engine_Temp_Control = 0;
    }
}
void Vehicle_speed()
{
    if(Vehicle_Speed == 30)
    {
        if (AC_Status == 0)
        {
            AC_Status = 1;
            Temperature = Temperature*(5/4)+1;
        }
        else
        {
            Engine_Temp_Control = 1;
            Engine_Temperature = Engine_Temperature*(5/4)+1;
        }

    }
}
