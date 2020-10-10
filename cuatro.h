
typedef unsigned char 	uint8;
typedef unsigned short 	uint16;
typedef unsigned int 	uint32;
typedef unsigned char 	u8Target;


#define ValZero 						0
#define MinVal 							2
#define MaxVal 							4
#define ASCII_CONVERTION_FACTOR 		32
#define ASCII_LOW_THRESHOLD_OFF_ON_2 	64
#define ASCII_LOW_THRESHOLD_OFF_ON 		96
#define ASCII_HIGH_THRESHOLD_OFF_ON_2 	91
#define ASCII_HIGH_THRESHOLD_OFF_ON 	123
#define END_SOFT_2 						254
#define END_SOFT 						255


void  GENFUN_vCapsOn 		(uint8 *pu8Src, uint8 u8SizeOfList);
void  GENFUN_vCapsOff 		(uint8 *pu8Src, uint8 u8SizeOfList);
void  GENFUN_u8MemSet 		(uint8 *pu8Src, uint8 u8Char, uint8 u8SizeOfList);
void  GENFUN_u8MemCopy 		(uint8 *pu8Src, uint8 *pu8Dest, uint8 u8SizeOfList);
void  GENFUN_vSortList 		(uint8 *pu8Src, uint8 *pu8Dest, uint8 u8SizeOfList);
void  GENFUN_vSoftSignal 	(uint32 *pu8Src, uint32 *pu8Dest);
void  GENFUN_vFilterSignal 	(uint32 *pu32Src, uint32 *pu32Dest, uint32 u32maximo, uint32 u32minimo);
uint8 GENFUN_u8GetOccurence (uint8 *pu8Src, uint8 u8Target, uint8 u8SizeOfList);
uint8 GENFUN_u8GetAverage 	(uint8 *pu8Src2, uint8 u8SizeOfList); 