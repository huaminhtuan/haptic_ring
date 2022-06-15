/******************************************************************************
 * HAPTIC DEVICE - HAND WEARABLE DEVICE
 *****************************************************************************/
/******************************************************************************
 * Brief description:
 * Module		:
 * Description	:
 * Tool			:
 * Chip			:
 * Version		:
 * Author		:
 * History		:
 *
 * Notes		:
 *****************************************************************************/

/******************************************************************************
 * INCLUDE
 *****************************************************************************/
#include "system_management.h"
#include "log.h"

/******************************************************************************
 * LOCAL DEFINITION
 *****************************************************************************/

/******************************************************************************
 * LOCAL VARIABLE DEFINITION
 *****************************************************************************/

/******************************************************************************
 * LOCAL FUNCTION PROTOTYPE
 *****************************************************************************/

/******************************************************************************
 * PUBLIC VARIABLE DEFINITION
 *****************************************************************************/

/******************************************************************************
 * PUBLIC FUNCTION DEFINITION
 *****************************************************************************/
/**
 * @brief:
 * @param:
 * @return:
 */
void SystemManagementInit(void)
{
	LogInit();
	LogPrint("\n\n\n");
	LogPrint("HAPTIC DEVICE - HAND WEARABLE DEVICE PROJECT\n");
	LogPrint("Initialising...\n");
	LogFlush();
}

/******************************************************************************
 * LOCAL FUNCTION DEFINITION
 *****************************************************************************/
/**
 * @brief:
 * @param:
 * @return:
 */

/******************************************************************************
 * END OF FILE
 *****************************************************************************/
