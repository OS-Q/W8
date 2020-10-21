
// #define SPI_INTERRUPT   1

#define  SPI_CK_SET( n ) (SPI0_CK_SE = n)                                     //SPIʱ�����ú���

/*******************************************************************************
* Function Name  : SPIMasterModeSet( UINT8 mode )
* Description    : SPI����ģʽ��ʼ��
* Input          : UINT8 mode
* Output         : None
* Return         : None
*******************************************************************************/
void SPIMasterModeSet(UINT8 mode);

/*******************************************************************************
* Function Name  : CH554SPIInterruptInit()
* Description    : CH554SPI�жϳ�ʼ��
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void CH554SPIInterruptInit();

/*******************************************************************************
* Function Name  : CH554SPIMasterWrite(UINT8 dat)
* Description    : CH554Ӳ��SPIд���ݣ�����ģʽ
* Input          : UINT8 dat   ����
* Output         : None
* Return         : None
*******************************************************************************/
void CH554SPIMasterWrite(UINT8 dat);

/*******************************************************************************
* Function Name  : CH554SPIMasterRead( )
* Description    : CH554Ӳ��SPI0�����ݣ�����ģʽ
* Input          : None
* Output         : None
* Return         : UINT8 ret
*******************************************************************************/
UINT8 CH554SPIMasterRead();

/*******************************************************************************
* Function Name  : SPISlvModeSet( )
* Description    : SPI�ӻ�ģʽ��ʼ��
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void SPISlvModeSet( );

/*******************************************************************************
* Function Name  : CH554SPISlvWrite(UINT8 dat)
* Description    : CH554Ӳ��SPIд���ݣ��ӻ�ģʽ
* Input          : UINT8 dat   ����
* Output         : None
* Return         : None
*******************************************************************************/
void CH554SPISlvWrite(UINT8 dat);

/*******************************************************************************
* Function Name  : CH554SPISlvRead( )
* Description    : CH554Ӳ��SPI0�����ݣ��ӻ�ģʽ
* Input          : None
* Output         : None
* Return         : UINT8 ret
*******************************************************************************/
UINT8 CH554SPISlvRead();