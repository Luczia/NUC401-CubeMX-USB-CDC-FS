/*
 * usb_communication.c
 *
 *  Created on: Dec 6, 2020
 *      Author: Luczia
 */

#include "usb_comm.h"


uint8_t interpretHostComand(uint8_t* Buf, uint32_t *Len)
{
	switch(Buf[0]){
	case LOG_DATA : {
				return LOG_DATA ;
		}
	}
}

uint8_t sendLogData(uint8_t* dataBuf)
{
	CDC_Transmit_FS(dataBuf, sizeof(dataBuf));
	return USB_COM_OK;
}


