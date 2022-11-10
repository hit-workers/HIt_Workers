#include <task_entry.h>
#include "EventRecorder.h"

const osThreadAttr_t HelloTask = {
		.name = "HelloTask",
		.stack_size = 128 * 4,
		.priority = (osPriority_t) osPriorityNormal,
	};

extern void StartHelloTask(void * argc);
	
void vStartMyTasks(void)
{
	EventRecorderInitialize(EventRecordAll, 0);
	EventRecorderDisable(EventRecordError ^ EventRecordAll, 0xFE, 0xFE);
	EventRecorderStart();
	osThreadNew(StartHelloTask, NULL, &HelloTask);
}
