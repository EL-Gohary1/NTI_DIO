
/*
 * DIO_cfg.h
 *
 * Created: 29/2/2024 5:50:00 PM
 *  Author: mahmoud elgohary
 */ 

#ifndef DIO_CFG_H_
#define DIO_CFG_H_

#include "Utils.h"
#include "StdType.h"

/* SET PIN CONFIGRATION INPUT(free) OR OUTPUT OR DIO_PIN_INPUT_PULL_UP
DIO_PIN_INPUT
DIO_PIN_OUTPUT
DIO_PIN_INPUT_PULL_UP
*/

/*********************PORTA*************/
#define  DIO_PINA0    DIO_PIN_OUTPUT
#define  DIO_PINA1	  DIO_PIN_INPUT
#define  DIO_PINA2	  DIO_PIN_OUTPUT
#define  DIO_PINA3	  DIO_PIN_OUTPUT
#define  DIO_PINA4	  DIO_PIN_INPUT
#define  DIO_PINA5	  DIO_PIN_INPUT
#define  DIO_PINA6	  DIO_PIN_OUTPUT
#define  DIO_PINA7	  DIO_PIN_OUTPUT
/*********************PORTB*************/
#define  DIO_PINB0	  DIO_PIN_INPUT
#define  DIO_PINB1	  DIO_PIN_OUTPUT
#define  DIO_PINB2	  DIO_PIN_INPUT
#define  DIO_PINB3	  DIO_PIN_OUTPUT
#define  DIO_PINB4	  DIO_PIN_INPUT
#define  DIO_PINB5	  DIO_PIN_OUTPUT
#define  DIO_PINB6	  DIO_PIN_INPUT
#define  DIO_PINB7	  DIO_PIN_OUTPUT
/*********************PORTC*************/
#define  DIO_PINC0	  DIO_PIN_INPUT
#define  DIO_PINC1	  DIO_PIN_INPUT
#define  DIO_PINC2	  DIO_PIN_INPUT
#define  DIO_PINC3	  DIO_PIN_INPUT
#define  DIO_PINC4	  DIO_PIN_INPUT
#define  DIO_PINC5	  DIO_PIN_INPUT
#define  DIO_PINC6	  DIO_PIN_INPUT
#define  DIO_PINC7	  DIO_PIN_INPUT
/*********************PORTD*************/
#define  DIO_PIND0	  DIO_PIN_OUTPUT
#define  DIO_PIND1	  DIO_PIN_OUTPUT
#define  DIO_PIND2	  DIO_PIN_OUTPUT
#define  DIO_PIND3	  DIO_PIN_OUTPUT
#define  DIO_PIND4	  DIO_PIN_OUTPUT
#define  DIO_PIND5	  DIO_PIN_OUTPUT
#define  DIO_PIND6	  DIO_PIN_OUTPUT
#define  DIO_PIND7	  DIO_PIN_OUTPUT


#endif