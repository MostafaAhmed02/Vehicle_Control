/**
 * @file :Vehicle.h
 * @author : Mostafa Allam (maag7503@gmail.com)
 * @version 0.1
 * @copyright Copyright (c) 2023
 *
 */

#ifndef  VEHICLE_H

#include <stdio.h>

    /* *************** Varible declaration section *************** */

extern char color ;
extern char AC_Status;
extern char Engine_Status;
extern char Engine_Temp_Control;
extern unsigned char Vehicle_Speed;
extern unsigned char Temperature ;
extern unsigned char Engine_Temperature ;

    /* *************** Function declaration section *************** */

/**
 * @brief : This function used for setting traffic light color.
 *
 */
void Set_Traffic_Light_Color();

/**
 * @brief : This function used for setting Room temperature.
 *
 */
void Set_Room_Temp();

/**
 * @brief : This function used for setting Engine temperature.
 *
 */
void Set_Engine_Temp();

/**
 * @brief : This function used for displaying main menue.
 *
 */
void Turn_on_Menue();

/**
 * @brief : This function used for controlling vehicle speed.
 *
 */
void Vehicle_speed();

/**
 * @brief : This function used for displaying sensors statusses.
 *
 */
void Display_Sensors_Statusses();

#endif
