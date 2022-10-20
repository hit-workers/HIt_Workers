基于STM32H750 64M SYSTICK测试了EVR组件及EVR重定向printf()

一些笔记：
EVR初始化：

	EventRecorderInitialize(EventRecordAll, 0);
	EventRecorderDisable(EventRecordError ^ EventRecordAll, 0xFE, 0xFE);
	EventRecorderStart();

EventStartA();
EventStopA();

printf至debug viewer效率至少比Print_to_Serial高10倍。

开关一次计时器的开销：3us
一次简单的printf开销：19us
记录一次2 * 32bit数据的开销5us
记录一次StringData：14us（可读性极差，建议直接print）
开关一次GPIO：4.3us

https://blog.csdn.net/shaynerain/article/details/117487614   编译预处理/后处理


自动输出map文件