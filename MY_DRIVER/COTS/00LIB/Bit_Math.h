#ifndef		BIT_MATH_H
#define		BIT_MATH_H


/*ADD 1 to selected BIT*/
#define		SET_BIT(REG,BIT)		(REG |=  (1<<BIT))
/*ADD 0 to selected BIT (CLEAR BIT)*/
#define		CLR_BIT(REG,BIT)		(REG &= ~(1<<BIT))
/*Change The bit from 0 to 1 and vice versa*/
#define		TOG_BIT(REG,BIT)		(REG ^=  (1<<BIT))
/*return the bit value*/
#define		GET_BIT(REG,BIT)		((REG>>BIT)&0x01)

#define CONC_BIT(b7,b6,b5,b4,b3,b2,b1,b0)  0b##b7##b6##b5##b4##b3##b2##b1##b0//Conc_help(b7,b6,b5,b4,b3,b2,b1,b0)
//#define Conc_help(b7,b6,b5,b4,b3,b2,b1,b0) 0b##b7##b6##b5##b4##b3##b2##b1##b0

#endif
