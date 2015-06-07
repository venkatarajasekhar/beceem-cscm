/*
 * (C) Copyright 2010. Beceem Communications Inc. All rights reserved.
 * 
 * Disclaimer :
 *
 * EXCEPT AS SET FORTH IN BECEEM'S TERMS AND CONDITIONS OF SALE, BECEEM
 * ASSUMES NO LIABILITY WHATSOEVER AND DISCLAIMS ANY EXPRESS, IMPLIED OR
 * STATUTORY WARRANTY RELATING TO ITS PRODUCTS INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTY OF MERCHANTABILITY, FITNESS FOR A PARTICULAR
 * PURPOSE, OR NON-INFRINGEMENT. IN NO EVENT SHALL BECEEM BE LIABLE FOR
 * ANY DIRECT, INDIRECT, CONSEQUENTIAL, PUNITIVE, SPECIAL OR INCIDENTAL
 * DAMAGES (INCLUDING, WITHOUT LIMITATION, DAMAGES FOR LOSS OF PROFITS,
 * BUSINESS INTERRUPTION OR LOSS OF INFORMATION) ARISING OUT OF THE USE
 * OR INABILITY TO USE THIS DOCUMENT, EVEN IF BECEEM HAS BEEN ADVISED OF
 * THE POSSIBILITY OF SUCH DAMAGES. 
 * 
 * Trademarks :
 *
 * Beceem, Beceem Communications, and Mobilizing Broadband are registered
 * trademarks of Beceem Communications Inc.  The Beceem logo is a
 * trademark of Beceem Communications Inc.
 *
 * Description	:	IOCTL definitions for Linux.
 * Author		:
 * Reviewer		:
 *
 */


#ifndef BECEEM_IOCTLS
#define BECEEM_IOCTLS

#include <sys/ioctl.h>

#define BCM_IOCTL	'k'

#ifdef LINUX


/* 1.Control code for CONTROL MESSAGES */
#define IOCTL_SEND_CONTROL_MESSAGE 		_IOW(BCM_IOCTL,	0x801,int)

/* 2.Control code to write a particular value to a particular register  */
#define IOCTL_BCM_REGISTER_WRITE                _IOW(BCM_IOCTL, 0x802, int)

#define IOCTL_BCM_REGISTER_READ                 _IOR(BCM_IOCTL, 0x803, int)

/* Control code to write a particular value to a particular register when device is in idle mode */
#define IOCTL_BCM_REGISTER_WRITE_PRIVATE  	    _IOW(BCM_IOCTL, 0x826, char)

#define IOCTL_BCM_REGISTER_READ_PRIVATE		    _IOR(BCM_IOCTL, 0x827, char)


/* 4.Control code to write x number of bytes to common memory  */
/* starting from address y */
#define IOCTL_BCM_COMMON_MEMORY_WRITE  	        _IOW(BCM_IOCTL, 0x804, int)

/* 5.Control code to write x number of bytes to common memory  */
/* starting from address y */
#define IOCTL_BCM_COMMON_MEMORY_READ 	       _IOR(BCM_IOCTL, 0x805, int)

/* 6.Control code for CONTROL MESSAGES */
#define IOCTL_GET_CONTROL_MESSAGE 		_IOR(BCM_IOCTL,	0x806, int)

/* 7.Control code for FIRMWARE DOWNLOAD */
#define IOCTL_BCM_FIRMWARE_DOWNLOAD 		_IOW(BCM_IOCTL, 0x807, int)

#define IOCTL_BCM_SET_SEND_VCID 	        _IOW(BCM_IOCTL,	0x808, int)

/* 9.Control code for TRANSFER MODE SWITCHING */
#define IOCTL_BCM_SWITCH_TRANSFER_MODE 		_IOW(BCM_IOCTL, 0x809, int)

/* 10.Control code for LINK UP */
#define IOCTL_LINK_REQ 				_IOW(BCM_IOCTL, 0x80A, int)

/* 11.Control code for RSSI Level Request */
#define IOCTL_RSSI_LEVEL_REQ			_IOW(BCM_IOCTL, 0x80B, int)

/* 12.Control code for IDLE MODE CONTROL */
#define IOCTL_IDLE_REQ				_IOW(BCM_IOCTL, 0x80C, int)

/* 13.Control code for SS/BS info */
#define IOCTL_SS_INFO_REQ			_IOW(BCM_IOCTL, 0x80D, int)

#define IOCTL_GET_STATISTICS_POINTER		_IOW(BCM_IOCTL, 0x80E, int)

#define IOCTL_CM_REQUEST    			_IOW(BCM_IOCTL, 0x80F, int)

#define IOCTL_CLASSIFICATION_RULE	  	_IOW(BCM_IOCTL, 0x813, char)

#define IOCTL_MAC_ADDR_REQ			_IOW(BCM_IOCTL, 0x811, int)

#define IOCTL_LINK_DOWN				_IO(BCM_IOCTL, 0x816, IOCTL_BUFFER)

/* Change this with the correct value */
#define IOCTL_CHIP_RESET			_IO(BCM_IOCTL, 0x816)	

/*  temporary */
#define IOCTL_GET_PACK_INFO			_IOR(BCM_IOCTL, 0x823, int)

#define IOCTL_DUMP_DEBUG			_IOW(BCM_IOCTL, 0x824, IOCTL_BUFFER)
#define IOCTL_GET_DUMP_PACKET_INFO              _IOR(BCM_IOCTL, 0x821, int)

#define IOCTL_BCM_GET_CURRENT_STATUS _IOW(BCM_IOCTL, 0x828, int)

#define IOCTL_BCM_GET_DRIVER_VERSION _IOR(BCM_IOCTL, 0x829, int)


#define IOCTL_BCM_GPIO_SET_REQUEST _IOW(BCM_IOCTL, 0x82A, int)
#define IOCTL_BCM_GPIO_STATUS_REQUEST _IOW(BCM_IOCTL, 0x82B, int)
#define IOCTL_BCM_GPIO_MULTI_REQUEST _IOW(BCM_IOCTL, 0x82D, IOCTL_BUFFER)
#define IOCTL_BCM_GPIO_MODE_REQUEST _IOW(BCM_IOCTL, 0x82E, IOCTL_BUFFER)

#define IOCTL_BCM_GET_HOST_MIBS _IOW(BCM_IOCTL, 0x853, int)

#define IOCTL_BCM_GET_DSX_INDICATION _IOR(BCM_IOCTL, 0x854, int)

/* buffer download start */
#define IOCTL_BCM_BUFFER_DOWNLOAD_START _IOW(BCM_IOCTL, 0x855, int)

/* buffer download start */
#define IOCTL_BCM_BUFFER_DOWNLOAD		_IOW(BCM_IOCTL, 0x856, int)

/* buffer download start */
#define IOCTL_BCM_BUFFER_DOWNLOAD_STOP	_IOW(BCM_IOCTL, 0x857, int)

#define IOCTL_BCM_EEPROM_REGISTER_WRITE _IOW(BCM_IOCTL, 0x858, int)
#define IOCTL_BCM_EEPROM_REGISTER_READ  _IOR(BCM_IOCTL, 0x859, int)
#define IOCTL_BCM_WAKE_UP_DEVICE_FROM_IDLE	_IOR(BCM_IOCTL, 0x860, int)

#define IOCTL_BCM_NVM_READ 		_IOR(BCM_IOCTL, 0x861, int) 
#define IOCTL_BCM_NVM_WRITE		_IOW(BCM_IOCTL, 0x862, int)
#define IOCTL_BCM_GET_NVM_SIZE		_IOR(BCM_IOCTL, 0x863, int)

#define IOCTL_BCM_BULK_WRM 		_IOW(BCM_IOCTL, 0x90B, int)

#define IOCTL_BCM_FLASH2X_SECTION_READ 		_IOR(BCM_IOCTL, 0x865, int)

#define IOCTL_BCM_FLASH2X_SECTION_WRITE		_IOW(BCM_IOCTL, 0x866, int)

#define IOCTL_BCM_GET_FLASH2X_SECTION_BITMAP _IOR(BCM_IOCTL,0x867, int)

#define IOCTL_BCM_SET_ACTIVE_SECTION _IOW(BCM_IOCTL, 0x868, int)

#define IOCTL_BCM_COPY_SECTION _IOW(BCM_IOCTL, 0x870,int)

#define	IOCTL_BCM_GET_FLASH_CS_INFO _IOR(BCM_IOCTL, 0x871, int)

#define IOCTL_BCM_SELECT_DSD _IOW(BCM_IOCTL, 0x872, int)

#define IOCTL_BCM_CNTRLMSG_MASK		_IOW(BCM_IOCTL, 0x874, int)	

#define IOCTL_BCM_NVM_RAW_READ  _IOR(BCM_IOCTL, 0x875, int)

#define IOCTL_BCM_TIME_SINCE_NET_ENTRY _IOR(BCM_IOCTL, 0x876,int)

#define IOCTL_BCM_GET_DEVICE_DRIVER_INFO  _IOR(BCM_IOCTL, 0x877, int)

#define IOCTL_BCM_LED_THREAD_STATE_CHANGE_REQ   _IOW(BCM_IOCTL, 0x878, int)

#define IOCTL_BCM_CONFIG_FILE_DOWNLOAD  _IOW(BCM_IOCTL, 0x87B, int)
#elif MACOS


#define IOCTL_SEND_CONTROL_MESSAGE 			_IOW(BCM_IOCTL,	0x801,IOCTL_BUFFER)
#define IOCTL_LINK_REQ 						_IOW(BCM_IOCTL, 0x80A, IOCTL_BUFFER)
#define IOCTL_LINK_DOWN						_IOW(BCM_IOCTL, 0x816, IOCTL_BUFFER)

#define IOCTL_CHIP_RESET					_IO(BCM_IOCTL, 0x816)	
#define IOCTL_CLOSE_NOTIFICATION			_IO(BCM_IOCTL, 0x814)

#define IOCTL_BCM_GET_CURRENT_STATUS 		_IOWR(BCM_IOCTL, 0x828, IOCTL_BUFFER)
#define IOCTL_BCM_GET_DRIVER_VERSION 		_IOWR(BCM_IOCTL, 0x829, IOCTL_BUFFER)

#define IOCTL_BCM_GPIO_SET_REQUEST 			_IOWR(BCM_IOCTL, 0x82A, IOCTL_BUFFER)
#define IOCTL_BCM_GPIO_STATUS_REQUEST 		_IOWR(BCM_IOCTL, 0x82B, IOCTL_BUFFER)
#define IOCTL_BCM_GPIO_MULTI_REQUEST _IOW(BCM_IOCTL, 0x82D, IOCTL_BUFFER)
#define IOCTL_BCM_GPIO_MODE_REQUEST _IOW(BCM_IOCTL, 0x82E, IOCTL_BUFFER)

#define IOCTL_BCM_GET_HOST_MIBS 			_IOW(BCM_IOCTL, 0x853, IOCTL_BUFFER)
#define IOCTL_BCM_GET_DSX_INDICATION 		_IOWR(BCM_IOCTL, 0x854, IOCTL_BUFFER)

#define IOCTL_BCM_BUFFER_DOWNLOAD_START		_IOW(BCM_IOCTL, 0x855, IOCTL_BUFFER)
#define IOCTL_BCM_BUFFER_DOWNLOAD			_IOW(BCM_IOCTL, 0x856, IOCTL_BUFFER)
#define IOCTL_BCM_BUFFER_DOWNLOAD_STOP		_IO(BCM_IOCTL, 0x857)
#define IOCTL_BCM_FIRMWARE_DOWNLOAD 		_IOW(BCM_IOCTL, 0x807, IOCTL_BUFFER)

#define IOCTL_BCM_EEPROM_REGISTER_WRITE		_IOW(BCM_IOCTL, 0x858, IOCTL_BUFFER)
#define IOCTL_BCM_EEPROM_REGISTER_READ		_IOWR(BCM_IOCTL, 0x859, IOCTL_BUFFER)
#define IOCTL_BCM_REGISTER_WRITE			_IOW(BCM_IOCTL, 0x802, IOCTL_BUFFER)
#define IOCTL_BCM_REGISTER_READ				_IOWR(BCM_IOCTL, 0x803, IOCTL_BUFFER)
#define IOCTL_BCM_REGISTER_WRITE_PRIVATE  	_IOWR(BCM_IOCTL, 0x826, IOCTL_BUFFER)
#define IOCTL_BCM_REGISTER_READ_PRIVATE		_IOWR(BCM_IOCTL, 0x827, IOCTL_BUFFER)

#define IOCTL_BCM_WAKE_UP_DEVICE_FROM_IDLE	_IO(BCM_IOCTL, 0x860)

#define IOCTL_BCM_NVM_READ 		_IOW(BCM_IOCTL, 0x861, IOCTL_BUFFER) 
#define IOCTL_BCM_NVM_WRITE		_IOW(BCM_IOCTL, 0x862, IOCTL_BUFFER)
#define IOCTL_BCM_GET_NVM_SIZE		_IOW(BCM_IOCTL, 0x863, IOCTL_BUFFER)
#define IOCTL_DUMP_DEBUG			_IOW(BCM_IOCTL, 0x824, IOCTL_BUFFER)

#define IOCTL_BCM_BULK_WRM 		_IOW(BCM_IOCTL, 0x90B, IOCTL_BUFFER)

#define IOCTL_BCM_FLASH2X_SECTION_READ 		_IOW(BCM_IOCTL, 0x865,  IOCTL_BUFFER)

#define IOCTL_BCM_FLASH2X_SECTION_WRITE		_IOW(BCM_IOCTL, 0x866,  IOCTL_BUFFER)

#define IOCTL_BCM_GET_FLASH2X_SECTION_BITMAP _IOW(BCM_IOCTL,0x867,  IOCTL_BUFFER)

#define IOCTL_BCM_SET_ACTIVE_SECTION _IOW(BCM_IOCTL, 0x868,  IOCTL_BUFFER)

#define IOCTL_BCM_COPY_SECTION _IOW(BCM_IOCTL, 0x870, IOCTL_BUFFER)

#define	IOCTL_BCM_GET_FLASH_CS_INFO _IOW(BCM_IOCTL, 0x871,  IOCTL_BUFFER)

#define IOCTL_BCM_SELECT_DSD _IOW(BCM_IOCTL, 0x872,  IOCTL_BUFFER)

#define IOCTL_BCM_NVM_RAW_READ  _IOW(BCM_IOCTL, 0x875,  IOCTL_BUFFER)

#define IOCTL_BCM_GET_DEVICE_DRIVER_INFO  _IOW(BCM_IOCTL, 0x877, IOCTL_BUFFER)

#define IOCTL_BCM_TIME_SINCE_NET_ENTRY _IOW(BCM_IOCTL, 0x876,  IOCTL_BUFFER)

#define IOCTL_BCM_LED_THREAD_STATE_CHANGE_REQ   _IOW(BCM_IOCTL, 0x878, IOCTL_BUFFER)
#define IOCTL_BCM_CONFIG_FILE_DOWNLOAD  _IOW(BCM_IOCTL, 0x87B, IOCTL_BUFFER)

#endif /* LINUX / MACOS */


#endif /* BECEEM_IOCTLS */