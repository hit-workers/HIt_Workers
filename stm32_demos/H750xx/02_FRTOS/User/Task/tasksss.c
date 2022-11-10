#include <tasksss.h>
#include "usart.h"

void StartHelloTask(void * argc)
{
	uint8_t hel[] = "Hello\n";
	for(;;)
	{
		HAL_UART_Transmit(&huart4, hel, sizeof(hel),0xFF);
		osDelay(1);
	}
}
