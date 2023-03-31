/*********************************************************
 *  des.h
 *  �û�ʹ��des�㷨ͷ�ļ�
 *	
 *********************************************************/
#ifndef _OPENDESS_H_
#define _OPENDESS_H_

#ifdef __cplusplus
extern "C" {
#endif


//����С��4k�����ݣ�encrypt�����ܣ�
//pInData����������
//nInDataLen���������ݳ���
//pOutData�����ܺ������
//pOutDataLen���������ݵĳ���
int DesEnc(
		unsigned char *pInData,
		int            nInDataLen,
		unsigned char *pOutData,
		int           *pOutDataLen);

//���ܵ���4k������
int DesEnc_raw(
	unsigned char *pInData,
	int            nInDataLen,
	unsigned char *pOutData,
	int           *pOutDataLen);

//����С��4k������(decrypt������)
//pInData����������
//nInDataLen���������ݳ���
//pOutData�����ܺ������
//pOutDataLen���������ݵĳ���
int DesDec(
	   unsigned char *pInData,
	   int            nInDataLen,
	   unsigned char *pOutData,
	   int           *pOutDataLen);

//���ܵ���4k������
int DesDec_raw(
	unsigned char *pInData,
	int            nInDataLen,
	unsigned char *pOutData,
	int           *pOutDataLen);



#ifdef __cplusplus
}
#endif

#endif

