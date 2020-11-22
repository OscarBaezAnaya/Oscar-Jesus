
#define CocaColaTime 987654321
#define WhiskyTime   987654321
#define VodkaTime    987654321
#define SpriteTime   987654321
#define LimaTime     987654321
#define RonTime      987654321
#define JarabeTime   987654321
#define hieloTime    987654321
#define inicioTime   987654321
#define vasoTime     987654321

typedef unsigned char 	uint8; 
typedef unsigned short 	uint16; 
typedef unsigned int 	uint32;

uint8 hielo;
uint8 bebida         = 0;
uint8 bebida1        = 0;
uint8 bebida2        = 0;
uint8 bebida3        = 0;
uint8 precio         = 0;
uint8 CocaCola       = 0;
uint8 Whisky         = 0; 
uint8 Vodka          = 0; 
uint8 Sprite         = 0; 
uint8 Lima           = 0; 
uint8 Ron            = 0;
uint8 Jarabe         = 0;
uint8 vaso           = 1;
uint8 preciobebida   = 0;
typedef enum
{
	PrecioCocaCola = 20,
	PrecioWhisky   = 35, 
	PrecioVodka    = 25, 
	PrecioSprite   = 15, 
	PrecioLima     = 10, 
	PrecioRon      = 30,
	PrecioJarabe   = 50,

}SM_tenStates;
