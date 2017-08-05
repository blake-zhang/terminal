#ifndef _QUEUE_H_
#define _QUEUE_H_

#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

typedef struct
{
	void* ptrObj;			// ��������� �� �������
	uint16_t size;			// ������ �������
	uint16_t _cntr;			// ������������� �������
	uint8_t sizeObj;		// ������ ������ �������
	uint32_t mode;			// ����� ������ �������
} Queue_s;

#define QUEUE_FORCED_PUSH_POP_Msk		(0x01)		// ������������� ��������� �������, ���� ���� ������� ���������

typedef Queue_s QueueObj;

void Q_Free(QueueObj* qd);
void Q_Init(QueueObj* qd, uint16_t sizeQueue, uint8_t sizeObj, uint32_t mode);
bool Q_Push(QueueObj* qd, const void* value);
bool Q_Pop(QueueObj* qd, void* value);
bool Q_IsFull(QueueObj* qd);
bool Q_IsEmpty(QueueObj* qd);
bool Q_IsEqual(QueueObj* qd, const void* items, uint32_t size);

#endif // _QUEUE_H_