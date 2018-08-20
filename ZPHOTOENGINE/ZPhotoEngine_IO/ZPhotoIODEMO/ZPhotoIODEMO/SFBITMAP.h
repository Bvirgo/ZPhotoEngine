#ifndef _IN_BITMAP_H_
#define _IN_BITMAP_H_
#include"f_error.h"
#define SF_IMAGE_MAX_PLANES  4
/*ͼ��ṹ��BITMAP
/*
*pixelFormat:���ظ�ʽ��BGR24,BGRA32
*lWidth:ͼ����
*lHeight:ͼ��߶�
*lBitCounts:ÿ������λ��
*lPitch:ÿ�е�bytes
*pPlandData:ͼ�����ݵ�����ָ��
*/
typedef struct _tag_SFBITMAP{
	int pixelFormat;
	int lWidth;
	int lHeight;
	int lBitCounts;
	long lPitch[SF_IMAGE_MAX_PLANES];
	unsigned char* pPlaneData[SF_IMAGE_MAX_PLANES];
	
}SFBITMAP,*LPSFBITMAP;


/*
*ͼ�����ظ�ʽ����
*/
typedef enum _sf_image_pixelformat{SF_IMAGE_PIXELFORMAT_YUV420,SF_IMAGE_PIXELFORMAT_BGR24,SF_IMAGE_PIXELFORMAT_BGRA32,SF_IMAGE_PIXELFORMAT_RGB24,SF_IMAGE_PIXELFORMAT_RGBA32
}SFPixelFormat;
/*
*ͼ���ʽ����
*/
typedef enum _sf_imageformat{SF_IMAGE_PNG,SF_IMAGE_BMP,SF_IMAGE_JPG, SF_IMAGE_GIF, SF_IMAGE_UNKNOWN}SFImageFormat;




/*
*���������ݴ����ʽͼ�����ݣ�����INBITMAP
*srcData:����ͼ���ڴ�����
*width:ͼ����
*height:ͼ��߶�
*bitCounts:ͼ�񵥸�����bit��
*pixelFormat:ͼ�����ظ�ʽ
*dstBitmap��INBITMAP����
*/
int SFBITMAP_CreateFromImage(unsigned char* srcData, int width, int height, int bitCounts, int pixelFormat,SFBITMAP* dstBitmap);
/*
*��������INBITMAPת��Ϊָ����ʽ����䵽ָ���ڴ�����
*srcBitmap:INBITMAP����
*srcData��Ŀ���ʽͼ���ڴ�Buffer
*width:Ŀ��ͼ����
*height:Ŀ��ͼ��߶�
*bitCounts:Ŀ��ͼ�񵥸�����bit��
*pixelFormat:Ŀ��ͼ�����ظ�ʽ
*/
int SFBITMAP_ConvertToImage(SFBITMAP srcBitmap, unsigned char* srcData, int width, int height, int bitCounts, int pixelFormat);
/*����������INBITMAP����
*bitmap:��Ҫ�����ͷŵ�INBITMAP����
*/
void SFBITMAP_Free(SFBITMAP* bitmap);
#endif


