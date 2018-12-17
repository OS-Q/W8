#ifndef __LCD_H
#define __LCD_H	

//#include "sys.h"

/******************************************************
GND=GND
VCC=3.3V
P00=CLK
P01=MOSI
P02=RES
P03=DC
P04=CS1
BLKΪLCD������ƹܽţ��͵�ƽ�رձ��⣬�ߵ�ƽ�򿪣�Ĭ�Ͽ��Բ��Ӵ򿪱���
////////////////////////������LCD��������Ҫ��/////////////////////////////////////
P05=FSO
P06=CS2

******************************************************/

 //����LCD�ĳߴ�	
#define LCD_W 128
#define LCD_H 160

sbit LCD_CS1    =P0^4;    //Ƭѡ	
sbit LCD_DC     =P0^3;	  //����/�����л�
sbit LCD_SDI    =P0^1;	  //����
sbit LCD_SCK    =P0^0;	  //ʱ��
//sbit LCD_REST   =P0^2;	  //��λ 
sbit LCD_REST   =P0^5;	  //��λ 

sbit ZK_MISO    =P0^7;	  //ʱ��
sbit ZK_CS2   =P0^6;	  //��λ 

extern  u16 BACK_COLOR, POINT_COLOR;   //����ɫ������ɫ

void Lcd_Init(void); 
void LCD_Clear(u16 Color);
void Address_set(unsigned int x1,unsigned int y1,unsigned int x2,unsigned int y2);
void LCD_WR_DATA8(char da); //��������-8λ����
void LCD_WR_DATA(int da);
void LCD_WR_REG(char da);

void LCD_DrawPoint(u16 x,u16 y);//����
void LCD_DrawPoint_big(u16 x,u16 y);//��һ�����
u16  LCD_ReadPoint(u16 x,u16 y); //����
void Draw_Circle(u16 x0,u16 y0,u8 r);
void LCD_DrawLine(u16 x1, u16 y1, u16 x2, u16 y2);
void LCD_DrawRectangle(u16 x1, u16 y1, u16 x2, u16 y2);		   
void LCD_Fill(u16 xsta,u16 ysta,u16 xend,u16 yend,u16 color);
void LCD_ShowChar(u16 x,u16 y,u8 num,u8 mode);//��ʾһ���ַ�
void LCD_ShowNum(u16 x,u16 y,u32 num,u8 len);//��ʾ����
void LCD_Show2Num(u16 x,u16 y,u16 num,u8 len);//��ʾ2������
void LCD_ShowString(u16 x,u16 y,const u8 *p);		 //��ʾһ���ַ���,16����
 
void showhanzi(unsigned int x,unsigned int y,unsigned char index);

void CL_Mem(void);
void GBZK_ROMOUTSET(void);		//�ֿ��������
void GBZK_ROMOUTRESET(void);	 	//�ֿ��������
void GBZK_GPIO_Config(void);	 //�ֿ�оƬ��ʼ��
void ZK_command( unsigned char  dat );
unsigned char  get_data_from_ROM(void);
void get_n_bytes_data_from_ROM(unsigned char  AddrHigh,unsigned char  AddrMid,unsigned char  AddrLow,unsigned char  *pBuff,unsigned char  DataLen );
void Display_Asc_String(unsigned char zk_num,unsigned int x, unsigned int y, unsigned char  text[]);
void Display_Asc( unsigned char zk_num,unsigned int x, unsigned int y );
void zk_map(  unsigned char *getdate, unsigned char *putdata, unsigned char high, unsigned char width);
void Display_GB2312_String(unsigned char zk_num,unsigned int  x,unsigned int  y, unsigned char  text[]);
void Display_GB2312( unsigned char zk_num,unsigned int x, unsigned int y );


//������ɫ
#define WHITE         	 0xFFFF
#define BLACK         	 0x0000	  
#define BLUE         	 0x001F  
#define BRED             0XF81F
#define GRED 			 0XFFE0
#define GBLUE			 0X07FF
#define RED           	 0xF800
#define MAGENTA       	 0xF81F
#define GREEN         	 0x07E0
#define CYAN          	 0x7FFF
#define YELLOW        	 0xFFE0
#define BROWN 			 0XBC40 //��ɫ
#define BRRED 			 0XFC07 //�غ�ɫ
#define GRAY  			 0X8430 //��ɫ
//GUI��ɫ

#define DARKBLUE      	 0X01CF	//����ɫ
#define LIGHTBLUE      	 0X7D7C	//ǳ��ɫ  
#define GRAYBLUE       	 0X5458 //����ɫ
//������ɫΪPANEL����ɫ 
 
#define LIGHTGREEN     	 0X841F //ǳ��ɫ
#define LGRAY 			 0XC618 //ǳ��ɫ(PANNEL),���屳��ɫ

#define LGRAYBLUE        0XA651 //ǳ����ɫ(�м����ɫ)
#define LBBLUE           0X2B12 //ǳ����ɫ(ѡ����Ŀ�ķ�ɫ)


					  		 
#endif  
	 
	 


