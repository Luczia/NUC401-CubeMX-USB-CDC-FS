/*
 * usb_communication.h
 *
 *  Created on: Dec 6, 2020
 *      Author: Luczia
 */

#include "usbd_cdc_if.h"

#ifndef INC_USB_COMM_H_
#define INC_USB_COMM_H_

typedef enum {
	STOP_ALL = '0',
	START_ALL = 's',
	LOG_DATA = '1',

} USB_COMMAND;

typedef enum {
	USB_COM_FAIL = 0,
	USB_COM_OK = 's',

} USB_COMMUNICATION;


uint8_t interpretHostComand(uint8_t* Buf, uint32_t *Len);
uint8_t sendLogData(uint8_t* dataBuf);



#endif /* INC_USB_COMMUNICATION_H_ */
