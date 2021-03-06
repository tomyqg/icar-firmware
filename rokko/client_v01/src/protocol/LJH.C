#include "main.h"

/**************************************************************************************************
** 函数名: GS_CalcLJH
** 输　入: P_U8  OrigData, U8 Datalen
** 输　出: U8 ~CRC_8
** 功能描述:  本函数计算长度为 Datalen 的数据串 OrigData 的累加和校验码
** 说  明:	void
** 作　者:  SIMPLE
** 日　期:  2005/05/17
** 修　改:  
** 日　期:  
** 版  本:  V0.0
**************************************************************************************************/
u8 GS_CalcLJH(u8*  OrigData, u8 Datalen)
{
	u8 i, Total;

	Total = 0;
	for(i=0; i<Datalen; i++)
		Total += OrigData[i];
	return Total;
}

/**************************************************************************************************
** 函数名: AddLJH
** 输　入: P_U8  OrigData
** 输　出: void
** 功能描述:  本函数计算长度为 Datalen 的数据串 OrigData 的CRC_8 校验码,并添加
** 说  明:	void
** 作　者:  SIMPLE
** 日　期:  2005/05/17
** 修　改:  
** 日　期:  
** 版  本:  V0.0
**************************************************************************************************/
void AddLJH(u8*  OrigData)
{
	u8* p;
	u8 LJH;

	p = OrigData;
	LJH = GS_CalcLJH(p+1, *p);
	(*p) ++;
	*(p+*p) = LJH;
}

//<=========================================== END =================================================>
