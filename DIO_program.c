/*
 * DIO_program.c
 *
 * Created: 29/2/2024 5:50:00 PM
 *  Author: mahmoud elgohary
 */ 

#include "DIO_cfg.h"
#include "DIO_interface.h"
#include "DIO_private.h"

void DIO_voidInit(void)
{
/********************PORTA*************/
	#if(DIO_PINA0==DIO_PIN_INPUT)
	DIO_voidSetPinDirection(DIO_PORTA,DIO_PIN0,DIO_PIN_INPUT);
	CLR_BIT(PORTA,DIO_PIN0);
	#elif(DIO_PINA0==DIO_PIN_INPUT_PULL_UP)
	DIO_voidSetPinDirection(DIO_PORTA,DIO_PIN0,DIO_PIN_INPUT);
	DIO_voidActivePinInPullUpResistance(DIO_PORTA,DIO_PIN0);
    #else
	DIO_voidSetPinDirection(DIO_PORTA,DIO_PIN0,DIO_PIN_OUTPUT);
    #endif
	#if(DIO_PINA1==DIO_PIN_INPUT)
	DIO_voidSetPinDirection(DIO_PORTA,DIO_PIN1,DIO_PIN_INPUT);
	CLR_BIT(PORTA,DIO_PIN1);
	#elif(DIO_PINA1==DIO_PIN_INPUT_PULL_UP)
	DIO_voidSetPinDirection(DIO_PORTA,DIO_PIN1,DIO_PIN_INPUT);
	DIO_voidActivePinInPullUpResistance(DIO_PORTA,DIO_PIN1);
	#else
	DIO_voidSetPinDirection(DIO_PORTA,DIO_PIN1,DIO_PIN_OUTPUT);
	#endif
	#if(DIO_PINA2==DIO_PIN_INPUT)
	DIO_voidSetPinDirection(DIO_PORTA,DIO_PIN2,DIO_PIN_INPUT);
	CLR_BIT(PORTA,DIO_PIN2);
	#elif(DIO_PINA2==DIO_PIN_INPUT_PULL_UP)
	DIO_voidSetPinDirection(DIO_PORTA,DIO_PIN2,DIO_PIN_INPUT);
	DIO_voidActivePinInPullUpResistance(DIO_PORTA,DIO_PIN2);
	#else
	DIO_voidSetPinDirection(DIO_PORTA,DIO_PIN2,DIO_PIN_OUTPUT);
	#endif
	#if(DIO_PINA3==DIO_PIN_INPUT)
	DIO_voidSetPinDirection(DIO_PORTA,DIO_PIN3,DIO_PIN_INPUT);
	CLR_BIT(PORTA,DIO_PIN3);
	#elif(DIO_PINA3==DIO_PIN_INPUT_PULL_UP)
	DIO_voidSetPinDirection(DIO_PORTA,DIO_PIN3,DIO_PIN_INPUT);
	DIO_voidActivePinInPullUpResistance(DIO_PORTA,DIO_PIN3);
	#else
	DIO_voidSetPinDirection(DIO_PORTA,DIO_PIN3,DIO_PIN_OUTPUT);
	#endif
	#if(DIO_PINA4==DIO_PIN_INPUT)
	DIO_voidSetPinDirection(DIO_PORTA,DIO_PIN4,DIO_PIN_INPUT);
	CLR_BIT(PORTA,DIO_PIN4);
	#elif(DIO_PINA4==DIO_PIN_INPUT_PULL_UP)
	DIO_voidSetPinDirection(DIO_PORTA,DIO_PIN4,DIO_PIN_INPUT);
	DIO_voidActivePinInPullUpResistance(DIO_PORTA,DIO_PIN4);
	#else
	DIO_voidSetPinDirection(DIO_PORTA,DIO_PIN4,DIO_PIN_OUTPUT);
	#endif
	#if(DIO_PINA5==DIO_PIN_INPUT)
	DIO_voidSetPinDirection(DIO_PORTA,DIO_PIN5,DIO_PIN_INPUT);
	CLR_BIT(PORTA,DIO_PIN5);
	#elif(DIO_PINA5==DIO_PIN_INPUT_PULL_UP)
	DIO_voidSetPinDirection(DIO_PORTA,DIO_PIN5,DIO_PIN_INPUT);
	DIO_voidActivePinInPullUpResistance(DIO_PORTA,DIO_PIN5);
	#else
	DIO_voidSetPinDirection(DIO_PORTA,DIO_PIN5,DIO_PIN_OUTPUT);
	#endif
	#if(DIO_PINA6==DIO_PIN_INPUT)
	DIO_voidSetPinDirection(DIO_PORTA,DIO_PIN6,DIO_PIN_INPUT);
	CLR_BIT(PORTA,DIO_PIN6);
	#elif(DIO_PINA6==DIO_PIN_INPUT_PULL_UP)
	DIO_voidSetPinDirection(DIO_PORTA,DIO_PIN6,DIO_PIN_INPUT);
	DIO_voidActivePinInPullUpResistance(DIO_PORTA,DIO_PIN6);
	#else
	DIO_voidSetPinDirection(DIO_PORTA,DIO_PIN6,DIO_PIN_OUTPUT);
	#endif
	#if(DIO_PINA7==DIO_PIN_INPUT)
	DIO_voidSetPinDirection(DIO_PORTA,DIO_PIN7,DIO_PIN_INPUT);
	CLR_BIT(PORTA,DIO_PIN7);
	#elif(DIO_PINA7==DIO_PIN_INPUT_PULL_UP)
	DIO_voidSetPinDirection(DIO_PORTA,DIO_PIN7,DIO_PIN_INPUT);
	DIO_voidActivePinInPullUpResistance(DIO_PORTA,DIO_PIN7);
	#else
	DIO_voidSetPinDirection(DIO_PORTA,DIO_PIN7,DIO_PIN_OUTPUT);
	#endif
/********************************PORTB****************/	
	#if(DIO_PINB0==DIO_PIN_INPUT)
	DIO_voidSetPinDirection(DIO_PORTB,DIO_PIN0,DIO_PIN_INPUT);
	CLR_BIT(PORTB,DIO_PIN0);
	#elif(DIO_PINB0==DIO_PIN_INPUT_PULL_UP)
	DIO_voidSetPinDirection(DIO_PORTB,DIO_PIN0,DIO_PIN_INPUT);
	DIO_voidActivePinInPullUpResistance(DIO_PORTB,DIO_PIN0);
	#else
	DIO_voidSetPinDirection(DIO_PORTB,DIO_PIN0,DIO_PIN_OUTPUT);
	#endif
	#if(DIO_PINB1==DIO_PIN_INPUT)
	DIO_voidSetPinDirection(DIO_PORTB,DIO_PIN1,DIO_PIN_INPUT);
	CLR_BIT(PORTB,DIO_PIN1);
	#elif(DIO_PINB1==DIO_PIN_INPUT_PULL_UP)
	DIO_voidSetPinDirection(DIO_PORTB,DIO_PIN1,DIO_PIN_INPUT);
	DIO_voidActivePinInPullUpResistance(DIO_PORTB,DIO_PIN1);
	#else
	DIO_voidSetPinDirection(DIO_PORTB,DIO_PIN1,DIO_PIN_OUTPUT);
	#endif
	#if(DIO_PINB2==DIO_PIN_INPUT)
	DIO_voidSetPinDirection(DIO_PORTB,DIO_PIN2,DIO_PIN_INPUT);
	CLR_BIT(PORTB,DIO_PIN2);
	#elif(DIO_PINB2==DIO_PIN_INPUT_PULL_UP)
	DIO_voidSetPinDirection(DIO_PORTB,DIO_PIN2,DIO_PIN_INPUT);
	DIO_voidActivePinInPullUpResistance(DIO_PORTB,DIO_PIN2);
	#else
	DIO_voidSetPinDirection(DIO_PORTB,DIO_PIN2,DIO_PIN_OUTPUT);
	#endif
	#if(DIO_PINB3==DIO_PIN_INPUT)
	DIO_voidSetPinDirection(DIO_PORTB,DIO_PIN3,DIO_PIN_INPUT);
	CLR_BIT(PORTB,DIO_PIN3);
	#elif(DIO_PINB3==DIO_PIN_INPUT_PULL_UP)
	DIO_voidSetPinDirection(DIO_PORTB,DIO_PIN3,DIO_PIN_INPUT);
	DIO_voidActivePinInPullUpResistance(DIO_PORTB,DIO_PIN3);
	#else
	DIO_voidSetPinDirection(DIO_PORTB,DIO_PIN3,DIO_PIN_OUTPUT);
	#endif
	#if(DIO_PINB4==DIO_PIN_INPUT)
	DIO_voidSetPinDirection(DIO_PORTB,DIO_PIN4,DIO_PIN_INPUT);
	CLR_BIT(PORTB,DIO_PIN4);
	#elif(DIO_PINB4==DIO_PIN_INPUT_PULL_UP)
	DIO_voidSetPinDirection(DIO_PORTB,DIO_PIN4,DIO_PIN_INPUT);
	DIO_voidActivePinInPullUpResistance(DIO_PORTB,DIO_PIN4);
	#else
	DIO_voidSetPinDirection(DIO_PORTB,DIO_PIN4,DIO_PIN_OUTPUT);
	#endif
	#if(DIO_PINB5==DIO_PIN_INPUT)
	DIO_voidSetPinDirection(DIO_PORTB,DIO_PIN5,DIO_PIN_INPUT);
	CLR_BIT(PORTB,DIO_PIN5);
	#elif(DIO_PINB5==DIO_PIN_INPUT_PULL_UP)
	DIO_voidSetPinDirection(DIO_PORTB,DIO_PIN5,DIO_PIN_INPUT);
	DIO_voidActivePinInPullUpResistance(DIO_PORTB,DIO_PIN5);
	#else
	DIO_voidSetPinDirection(DIO_PORTB,DIO_PIN5,DIO_PIN_OUTPUT);
	#endif
	#if(DIO_PINB6==DIO_PIN_INPUT)
	DIO_voidSetPinDirection(DIO_PORTB,DIO_PIN6,DIO_PIN_INPUT);
	CLR_BIT(PORTB,DIO_PIN6);
	#elif(DIO_PINB6==DIO_PIN_INPUT_PULL_UP)
	DIO_voidSetPinDirection(DIO_PORTB,DIO_PIN6,DIO_PIN_INPUT);
	DIO_voidActivePinInPullUpResistance(DIO_PORTB,DIO_PIN6);
	#else
	DIO_voidSetPinDirection(DIO_PORTB,DIO_PIN6,DIO_PIN_OUTPUT);
	#endif
	#if(DIO_PINB7==DIO_PIN_INPUT)
	DIO_voidSetPinDirection(DIO_PORTB,DIO_PIN7,DIO_PIN_INPUT);
	CLR_BIT(PORTB,DIO_PIN7);
	#elif(DIO_PINB7==DIO_PIN_INPUT_PULL_UP)
	DIO_voidSetPinDirection(DIO_PORTB,DIO_PIN7,DIO_PIN_INPUT);
	DIO_voidActivePinInPullUpResistance(DIO_PORTB,DIO_PIN7);
	#else
	DIO_voidSetPinDirection(DIO_PORTB,DIO_PIN7,DIO_PIN_OUTPUT);
	#endif
/********************************PORTC******************/
	#if(DIO_PINC0==DIO_PIN_INPUT)
	DIO_voidSetPinDirection(DIO_PORTC,DIO_PIN0,DIO_PIN_INPUT);
	CLR_BIT(PORTC,DIO_PIN0);
	#elif(DIO_PINC0==DIO_PIN_INPUT_PULL_UP)
	DIO_voidSetPinDirection(DIO_PORTC,DIO_PIN0,DIO_PIN_INPUT);
	DIO_voidActivePinInPullUpResistance(DIO_PORTC,DIO_PIN0);
	#else
	DIO_voidSetPinDirection(DIO_PORTC,DIO_PIN0,DIO_PIN_OUTPUT);
	#endif
	#if(DIO_PINC1==DIO_PIN_INPUT)
	DIO_voidSetPinDirection(DIO_PORTC,DIO_PIN1,DIO_PIN_INPUT);
	CLR_BIT(PORTC,DIO_PIN1);
	#elif(DIO_PINC1==DIO_PIN_INPUT_PULL_UP)
	DIO_voidSetPinDirection(DIO_PORTC,DIO_PIN1,DIO_PIN_INPUT);
	DIO_voidActivePinInPullUpResistance(DIO_PORTC,DIO_PIN1);
	#else
	DIO_voidSetPinDirection(DIO_PORTC,DIO_PIN1,DIO_PIN_OUTPUT);
	#endif
	#if(DIO_PINC2==DIO_PIN_INPUT)
	DIO_voidSetPinDirection(DIO_PORTC,DIO_PIN2,DIO_PIN_INPUT);
	CLR_BIT(PORTC,DIO_PIN2);
	#elif(DIO_PINC2==DIO_PIN_INPUT_PULL_UP)
	DIO_voidSetPinDirection(DIO_PORTC,DIO_PIN2,DIO_PIN_INPUT);
	DIO_voidActivePinInPullUpResistance(DIO_PORTC,DIO_PIN2);
	#else
	DIO_voidSetPinDirection(DIO_PORTC,DIO_PIN2,DIO_PIN_OUTPUT);
	#endif
	#if(DIO_PINC3==DIO_PIN_INPUT)
	DIO_voidSetPinDirection(DIO_PORTC,DIO_PIN3,DIO_PIN_INPUT);
	CLR_BIT(PORTC,DIO_PIN3);
    #elif(DIO_PINC3==DIO_PIN_INPUT_PULL_UP)
    DIO_voidSetPinDirection(DIO_PORTC,DIO_PIN3,DIO_PIN_INPUT);
    DIO_voidActivePinInPullUpResistance(DIO_PORTC,DIO_PIN3);	
	#else
	DIO_voidSetPinDirection(DIO_PORTC,DIO_PIN3,DIO_PIN_OUTPUT);
	#endif
	#if(DIO_PINC4==DIO_PIN_INPUT)
	DIO_voidSetPinDirection(DIO_PORTC,DIO_PIN4,DIO_PIN_INPUT);
	CLR_BIT(PORTC,DIO_PIN4);
	#elif(DIO_PINC4==DIO_PIN_INPUT_PULL_UP)
	DIO_voidSetPinDirection(DIO_PORTC,DIO_PIN4,DIO_PIN_INPUT);
	DIO_voidActivePinInPullUpResistance(DIO_PORTC,DIO_PIN4);
	#else
	DIO_voidSetPinDirection(DIO_PORTC,DIO_PIN4,DIO_PIN_OUTPUT);
	#endif
	#if(DIO_PINC5==DIO_PIN_INPUT)
	DIO_voidSetPinDirection(DIO_PORTC,DIO_PIN5,DIO_PIN_INPUT);
	CLR_BIT(PORTC,DIO_PIN5);
	#elif(DIO_PINC5==DIO_PIN_INPUT_PULL_UP)
	DIO_voidSetPinDirection(DIO_PORTC,DIO_PIN5,DIO_PIN_INPUT);
	DIO_voidActivePinInPullUpResistance(DIO_PORTC,DIO_PIN5);
	#else
	DIO_voidSetPinDirection(DIO_PORTC,DIO_PIN5,DIO_PIN_OUTPUT);
	#endif
	#if(DIO_PINC6==DIO_PIN_INPUT)
	DIO_voidSetPinDirection(DIO_PORTC,DIO_PIN6,DIO_PIN_INPUT);
	CLR_BIT(PORTC,DIO_PIN6);
	#elif(DIO_PINC6==DIO_PIN_INPUT_PULL_UP)
	DIO_voidSetPinDirection(DIO_PORTC,DIO_PIN6,DIO_PIN_INPUT);
	DIO_voidActivePinInPullUpResistance(DIO_PORTC,DIO_PIN6);
	#else
	DIO_voidSetPinDirection(DIO_PORTC,DIO_PIN6,DIO_PIN_OUTPUT);
	#endif
	#if(DIO_PINC7==DIO_PIN_INPUT)
	DIO_voidSetPinDirection(DIO_PORTC,DIO_PIN7,DIO_PIN_INPUT);
	CLR_BIT(PORTC,DIO_PIN7);
	#elif(DIO_PINC7==DIO_PIN_INPUT_PULL_UP)
	DIO_voidSetPinDirection(DIO_PORTC,DIO_PIN7,DIO_PIN_INPUT);
	DIO_voidActivePinInPullUpResistance(DIO_PORTC,DIO_PIN7);
	#else
	DIO_voidSetPinDirection(DIO_PORTC,DIO_PIN7,DIO_PIN_OUTPUT);
	#endif
/********************************PORTC******************/	
	#if(DIO_PIND0==DIO_PIN_INPUT)
	DIO_voidSetPinDirection(DIO_PORTD,DIO_PIN0,DIO_PIN_INPUT);
	CLR_BIT(PORTD,DIO_PIN0);
	#elif(DIO_PIND0==DIO_PIN_INPUT_PULL_UP)
	DIO_voidSetPinDirection(DIO_PORTD,DIO_PIN0,DIO_PIN_INPUT);
	DIO_voidActivePinInPullUpResistance(DIO_PORTC,DIO_PIN0);
	#else
	DIO_voidSetPinDirection(DIO_PORTD,DIO_PIN0,DIO_PIN_OUTPUT);
	#endif
	#if(DIO_PIND1==DIO_PIN_INPUT)
	DIO_voidSetPinDirection(DIO_PORTD,DIO_PIN1,DIO_PIN_INPUT);
	CLR_BIT(PORTD,DIO_PIN1);
	#elif(DIO_PIND1==DIO_PIN_INPUT_PULL_UP)
	DIO_voidSetPinDirection(DIO_PORTD,DIO_PIN1,DIO_PIN_INPUT);
	DIO_voidActivePinInPullUpResistance(DIO_PORTD,DIO_PIN1);
	#else
	DIO_voidSetPinDirection(DIO_PORTD,DIO_PIN1,DIO_PIN_OUTPUT);
	#endif
	#if(DIO_PIND2==DIO_PIN_INPUT)
	DIO_voidSetPinDirection(DIO_PORTD,DIO_PIN2,DIO_PIN_INPUT);
	CLR_BIT(PORTD,DIO_PIN2);
	#elif(DIO_PIND2==DIO_PIN_INPUT_PULL_UP)
	DIO_voidSetPinDirection(DIO_PORTD,DIO_PIN2,DIO_PIN_INPUT);
	DIO_voidActivePinInPullUpResistance(DIO_PORTD,DIO_PIN2);
	#else
	DIO_voidSetPinDirection(DIO_PORTC,DIO_PIN2,DIO_PIN_OUTPUT);
	#endif
    #if(DIO_PIND3==DIO_PIN_INPUT)
    DIO_voidSetPinDirection(DIO_PORTD,DIO_PIN3,DIO_PIN_INPUT);
	CLR_BIT(PORTD,DIO_PIN3);
	#elif(DIO_PIND3==DIO_PIN_INPUT_PULL_UP)
    DIO_voidSetPinDirection(DIO_PORTD,DIO_PIN3,DIO_PIN_INPUT);
	DIO_voidActivePinInPullUpResistance(DIO_PORTD,DIO_PIN3);
    #else
    DIO_voidSetPinDirection(DIO_PORTD,DIO_PIN3,DIO_PIN_OUTPUT);
    #endif
	#if(DIO_PIND4==DIO_PIN_INPUT)
	DIO_voidSetPinDirection(DIO_PORTD,DIO_PIN4,DIO_PIN_INPUT);
	CLR_BIT(PORTD,DIO_PIN4);
	#elif(DIO_PIND4==DIO_PIN_INPUT_PULL_UP)
	DIO_voidSetPinDirection(DIO_PORTD,DIO_PIN4,DIO_PIN_INPUT);
	DIO_voidActivePinInPullUpResistance(DIO_PORTD,DIO_PIN4);
	#else
	DIO_voidSetPinDirection(DIO_PORTD,DIO_PIN4,DIO_PIN_OUTPUT);
	#endif
	#if(DIO_PIND5==DIO_PIN_INPUT)
	DIO_voidSetPinDirection(DIO_PORTD,DIO_PIN5,DIO_PIN_INPUT);
	CLR_BIT(PORTD,DIO_PIN5);
	#elif(DIO_PIND5==DIO_PIN_INPUT_PULL_UP)
	DIO_voidSetPinDirection(DIO_PORTD,DIO_PIN5,DIO_PIN_INPUT);
	DIO_voidActivePinInPullUpResistance(DIO_PORTD,DIO_PIN5);
	#else
	DIO_voidSetPinDirection(DIO_PORTD,DIO_PIN5,DIO_PIN_OUTPUT);
	#endif
	#if(DIO_PIND6==DIO_PIN_INPUT)
	DIO_voidSetPinDirection(DIO_PORTD,DIO_PIN6,DIO_PIN_INPUT);
	CLR_BIT(PORTD,DIO_PIN6);
	#elif(DIO_PIND6==DIO_PIN_INPUT_PULL_UP)
	DIO_voidSetPinDirection(DIO_PORTD,DIO_PIN6,DIO_PIN_INPUT);
	DIO_voidActivePinInPullUpResistance(DIO_PORTD,DIO_PIN6);
	#else
	DIO_voidSetPinDirection(DIO_PORTD,DIO_PIN6,DIO_PIN_OUTPUT);
	#endif
	#if(DIO_PIND7==DIO_PIN_INPUT)
	DIO_voidSetPinDirection(DIO_PORTD,DIO_PIN7,DIO_PIN_INPUT);
	CLR_BIT(PORTD,DIO_PIN7);
	#elif(DIO_PIND7==DIO_PIN_INPUT_PULL_UP)
	DIO_voidSetPinDirection(DIO_PORTD,DIO_PIN7,DIO_PIN_INPUT);
	DIO_voidActivePinInPullUpResistance(DIO_PORTD,DIO_PIN7);
	#else
	DIO_voidSetPinDirection(DIO_PORTD,DIO_PIN7,DIO_PIN_OUTPUT);
	#endif
}

void DIO_voidSetPinDirection            (u8 copy_u8PortId, u8 copy_u8PinId, u8 copy_u8PinDirection)
{
	switch (copy_u8PinDirection)
	{
		case DIO_PIN_INPUT:
		switch (copy_u8PortId)
		{
			case DIO_PORTA:
			CLR_BIT(DDRA,copy_u8PinId);
			break;
			case DIO_PORTB:
			CLR_BIT(DDRB,copy_u8PinId);
			break;
			case DIO_PORTC:
			CLR_BIT(DDRC,copy_u8PinId);
			break;
			case DIO_PORTD:
			CLR_BIT(DDRD,copy_u8PinId);
			break;
		}
		break;
		case DIO_PIN_OUTPUT:
		switch (copy_u8PortId)
		{
			case DIO_PORTA:
			SET_BIT(DDRA,copy_u8PinId);
			break;
			case DIO_PORTB:
			SET_BIT(DDRB,copy_u8PinId);
			break;
			case DIO_PORTC:
			SET_BIT(DDRC,copy_u8PinId);
			break;
			case DIO_PORTD:
			SET_BIT(DDRD,copy_u8PinId);
			break;
		}
		break;
	}
}
void DIO_voidSetPinValue                (u8 copy_u8PortId, u8 copy_u8PinId, u8 copy_u8PinValue)
{
	switch (copy_u8PinValue)
	{
		case DIO_PIN_LOW:
		switch (copy_u8PortId)
		{
			case DIO_PORTA:
			SET_BIT(DDRA,copy_u8PinId);
			CLR_BIT(PORTA,copy_u8PinId);
			break;
			case DIO_PORTB:
			SET_BIT(DDRB,copy_u8PinId);
			CLR_BIT(PORTB,copy_u8PinId);
			break;
			case DIO_PORTC:
			SET_BIT(DDRC,copy_u8PinId);
			CLR_BIT(PORTC,copy_u8PinId);
			break;
			case DIO_PORTD:
			SET_BIT(DDRD,copy_u8PinId);
			CLR_BIT(PORTD,copy_u8PinId);
			break;
		}
		break;
		case DIO_PIN_HIGH:
		switch (copy_u8PortId)
		{
			case DIO_PORTA:
			SET_BIT(DDRA,copy_u8PinId);
			SET_BIT(PORTA,copy_u8PinId);
			break;
			case DIO_PORTB:
			SET_BIT(DDRB,copy_u8PinId);
			SET_BIT(PORTB,copy_u8PinId);
			break;
			case DIO_PORTC:
			SET_BIT(DDRC,copy_u8PinId);
			SET_BIT(PORTC,copy_u8PinId);
			break;
			case DIO_PORTD:
			SET_BIT(DDRD,copy_u8PinId);
			SET_BIT(PORTD,copy_u8PinId);
			break;
		}
		break;
	}
}
void DIO_voidGetPinValue                (u8 copy_u8PortId, u8 copy_u8PinId, u8* copy_pu8PinValue)
{
	switch (copy_u8PortId)
	{
		case DIO_PORTA:
		*copy_pu8PinValue=READ_BIT(PINA,copy_u8PinId);
		break;
		case DIO_PORTB:
		*copy_pu8PinValue=READ_BIT(PINB,copy_u8PinId);
		break;
		case DIO_PORTC:
		*copy_pu8PinValue=READ_BIT(PINC,copy_u8PinId);
		break;
		case DIO_PORTD:
		*copy_pu8PinValue=READ_BIT(PIND,copy_u8PinId);
		break;
	}
}
void DIO_voidTogglePinValue             (u8 copy_u8PortId, u8 copy_u8PinId)
{
	switch (copy_u8PortId)
	{
		case DIO_PORTA:
		SET_BIT(DDRA,copy_u8PinId);
		TOG_BIT(PORTA,copy_u8PinId);
		break;
		case DIO_PORTB:
		SET_BIT(DDRB,copy_u8PinId);
		TOG_BIT(PORTB,copy_u8PinId);
		break;
		case DIO_PORTC:
		SET_BIT(DDRC,copy_u8PinId);
		TOG_BIT(PORTC,copy_u8PinId);
		break;
		case DIO_PORTD:
		SET_BIT(DDRD,copy_u8PinId);
		TOG_BIT(PORTD,copy_u8PinId);
		break;
	}
}
void DIO_voidActivePinInPullUpResistance(u8 copy_u8PortId, u8 copy_u8PinId)
{
	switch (copy_u8PortId)
	{
		case DIO_PORTA:
		CLR_BIT(DDRA,copy_u8PinId);
		SET_BIT(PORTA,copy_u8PinId);
		break;
		case DIO_PORTB:
		CLR_BIT(DDRB,copy_u8PinId);
		SET_BIT(PORTB,copy_u8PinId);
		break;
		case DIO_PORTC:
		CLR_BIT(DDRC,copy_u8PinId);
		SET_BIT(PORTC,copy_u8PinId);
		break;
		case DIO_PORTD:
		CLR_BIT(DDRD,copy_u8PinId);
		SET_BIT(PORTD,copy_u8PinId);
		break;
	}
}


void DIO_voidSetPortDirection            (u8 copy_u8PortId, u8 copy_u8PortDirection)
{
	switch (copy_u8PortId)
	{
		case DIO_PORTA:
		DDRA=copy_u8PortDirection;
		break;
		case DIO_PORTB:
		DDRB=copy_u8PortDirection;
		break;
		case DIO_PORTC:
		DDRC=copy_u8PortDirection;
		break;
		case DIO_PORTD:
		DDRD=copy_u8PortDirection;
		break;
	}
}


void DIO_voidSetPortValue                (u8 copy_u8PortId, u8 copy_u8PortValue)
{
	DIO_voidSetPortDirection(copy_u8PortId,DIO_PORT_OUTPUT);
	switch (copy_u8PortValue)
	{
		case DIO_PORT_LOW:
		switch (copy_u8PortId)
		{
			case DIO_PORTA:
			PORTA=DIO_PORT_LOW;
			break;
			case DIO_PORTB:
			PORTB=DIO_PORT_LOW;
			break;
			case DIO_PORTC:
			PORTC=DIO_PORT_LOW;
			break;
			case DIO_PORTD:
			PORTD=DIO_PORT_LOW;
			break;
		}
		break;
		case DIO_PORT_HIGH:
		switch (copy_u8PortId)
		{
			case DIO_PORTA:
			PORTA=DIO_PORT_HIGH;
			break;
			case DIO_PORTB:
			PORTB=DIO_PORT_HIGH;
			break;
			case DIO_PORTC:
			PORTC=DIO_PORT_HIGH;
			break;
			case DIO_PORTD:
			PORTD=DIO_PORT_HIGH;
			break;
		}
		break;
	}	
	
}
void DIO_voidGetPortValue                (u8 copy_u8PortId, u8* copy_pu8PortValue)
{
	switch (copy_u8PortId)
	{
		case DIO_PORTA:
		*copy_pu8PortValue=PINA;
		break;
		case DIO_PORTB:
		*copy_pu8PortValue=PINB;
		break;
		case DIO_PORTC:
		*copy_pu8PortValue=PINC;
		break;
		case DIO_PORTD:
		*copy_pu8PortValue=PIND;
		break;
	}
}
void DIO_voidTogglePortValue             (u8 copy_u8PortId)
{
	switch (copy_u8PortId)
	{
		case DIO_PORTA:
		PORTA^=0XFF;
		break;
		case DIO_PORTB:
		PORTB^=0XFF;
		break;
		case DIO_PORTC:
		PORTC^=0XFF;
		break;
		case DIO_PORTD:
		PORTD^=0XFF;
		break;
	}
}
void DIO_voidActivePortInPullUpResistance(u8 copy_u8PortId)
{
	DIO_voidSetPortDirection(copy_u8PortId,DIO_PORT_INPUT);
	switch (copy_u8PortId)
	{
		case DIO_PORTA:
		PORTA=DIO_PORTINPULLUP;
		break;
		case DIO_PORTB:
		PORTB=DIO_PORTINPULLUP;
		break;
		case DIO_PORTC:
		PORTC=DIO_PORTINPULLUP;
		break;
		case DIO_PORTD:
		PORTD=DIO_PORTINPULLUP;
		break;
	}
	
}
