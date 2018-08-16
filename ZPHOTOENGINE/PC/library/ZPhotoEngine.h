/*****************************************************************************
Copyright:    Trent
File name:    ZPhotoEngine.h
Description:  ZPHOTO ENGINE LIBRARY FOR IMAGE PROCESSING LIKE PS
Author:       Trent
Version:      V3.6
Date:         2017-08-17
Mail:         dongtingyueh@163.com
*****************************************************************************/

#ifndef __T_PHOTOENGINE__
#define __T_PHOTOENGINE__

//////////////////////////////////////////////////////////////////////////////
//ͼ����ģʽ
const int BLEND_MODE_DARKEN                                       =  1;
const int BLEND_MODE_MULTIPLY                                     =  2;
const int BLEND_MODE_COLORBURN                                    =  3;
const int BLEND_MODE_LINEARBURN                                   =  4;
const int BLEND_MODE_DARKNESS                                     =  5;
const int BLEND_MODE_LIGHTEN                                      =  6;
const int BLEND_MODE_SCREEN                                       =  7;
const int BLEND_MODE_COLORDODGE                                   =  8;
const int BLEND_MODE_COLORLINEARDODGE                             =  9;
const int BLEND_MODE_LIGHTCOLOR                                   =  10;
const int BLEND_MODE_OVERLAY                                      =  11;
const int BLEND_MODE_SOFTLIGHT                                    =  12;
const int BLEND_MODE_HARDLIGHT                                    =  13;
const int BLEND_MODE_VIVIDLIGHT                                   =  14;
const int BLEND_MODE_LINEARLIGHT                                  =  15;
const int BLEND_MODE_PINLIGHT                                     =  16;
const int BLEND_MODE_SOLIDCOLORMIXING                             =  17;
const int BLEND_MODE_DIFFERENCE                                   =  18;
const int BLEND_MODE_EXCLUSION                                    =  19;
const int BLEND_MODE_SUBTRACTION                                  =  20;
const int BLEND_MODE_DIVIDE                                       =  21;
///////////////////////////////////////////////////////////////////////////////
#ifdef _MSC_VER

#ifdef __cplusplus
#define EXPORT extern "C" _declspec(dllexport)
#else
#define EXPORT __declspec(dllexport)
#endif

    //��������
	/*************************************************
	Function:    ZPHOTO_Saturation
	Description: ���Ͷȵ���.
	Input:       srcData-ԭʼͼ�񣬸�ʽΪ32λBGRA��ʽ��ִ�к���Ϊ���ͼ��
	             width-ԭʼͼ����
				 height-ԭʼͼ��߶�
				 stride-ԭʼͼ���Stride
				 saturation-���Ͷ�ֵ����Χ[0,512]
	Output:      ��.
	Return:      0-�ɹ�,����ʧ��.
	Others:      ��.
	*************************************************/
    EXPORT int ZPHOTO_Saturation(unsigned char* srcData,int width, int height, int stride, int saturation);
	/*************************************************
	Function:    ZPHOTO_Posterize
	Description: ɫ������.
	Input:       srcData-ԭʼͼ�񣬸�ʽΪ32λBGRA��ʽ��ִ�к���Ϊ���ͼ��
	             width-ԭʼͼ����
				 height-ԭʼͼ��߶�
				 stride-ԭʼͼ���Stride
				 clusterNum-ɫ��������Χ[2,255]
	Output:      ��.
	Return:      0-�ɹ�,����ʧ��.
	Others:      ��.
	*************************************************/
    EXPORT int ZPHOTO_Posterize(unsigned char *srcData, int width, int height, int stride, int clusterNum);
	/*************************************************
	Function:    ZPHOTO_OverExposure
	Description: �����ع�.
	Input:       srcData-ԭʼͼ�񣬸�ʽΪ32λBGRA��ʽ��ִ�к���Ϊ���ͼ��
	             width-ԭʼͼ����
				 height-ԭʼͼ��߶�
				 stride-ԭʼͼ���Stride
	Output:      ��.
	Return:      0-�ɹ�,����ʧ��.
	Others:      ��.
	*************************************************/
    EXPORT int ZPHOTO_OverExposure(unsigned char *srcData, int width, int height, int stride);//�����ع�
	/*************************************************
	Function:    ZPHOTO_Lightness    
	Description: ���ȵ���
	Input:       srcData-ԭʼͼ�񣬸�ʽΪ32λBGRA��ʽ��ִ�к���Ϊ���ͼ��
	             width-ԭʼͼ����
				 height-ԭʼͼ��߶�
				 stride-ԭʼͼ���Stride
				 lightness-����ֵ����Χ[-100,100]
	Output:      ��.
	Return:      0-�ɹ�,����ʧ��.
	Others:      ��.
	*************************************************/
    EXPORT int ZPHOTO_Lightness(unsigned char* srcData,int width, int height, int stride, int lightness);//���ȵ���
	/*************************************************
	Function:    ZPHOTO_Invert
	Description: ����
	Input:       srcData-ԭʼͼ�񣬸�ʽΪ32λBGRA��ʽ��ִ�к���Ϊ���ͼ��
	             width-ԭʼͼ����
				 height-ԭʼͼ��߶�
				 stride-ԭʼͼ���Stride
	Output:      ��.
	Return:      0-�ɹ�,����ʧ��.
	Others:      ��.
	*************************************************/
    EXPORT int ZPHOTO_Invert(unsigned char *srcData, int width, int height, int stride);//����
	/*************************************************
	Function:    ZPHOTO_HueAndSaturation
	Description: ɫ�౥�Ͷȵ���
	Input:       srcData-ԭʼͼ�񣬸�ʽΪ32λBGRA��ʽ��ִ�к���Ϊ���ͼ��
	             width-ԭʼͼ����
				 height-ԭʼͼ��߶�
				 stride-ԭʼͼ���Stride
				 hue-ɫ��ֵ����Χ[-180,180]
				 saturation-���Ͷ�ֵ����ΧΪ[-100,100]
	Output:      ��.
	Return:      0-�ɹ�,����ʧ��.
	Others:      ��.
	*************************************************/
    EXPORT int ZPHOTO_HueAndSaturation(unsigned char* srcData,int width, int height, int stride,int hue, int saturation);//ɫ�౥�Ͷȵ���
	/*************************************************
	Function:    ZPHOTO_HistagramEqualize
	Description: ɫ������
	Input:       srcData-ԭʼͼ�񣬸�ʽΪ32λBGRA��ʽ��ִ�к���Ϊ���ͼ��
	             width-ԭʼͼ����
				 height-ԭʼͼ��߶�
				 stride-ԭʼͼ���Stride
	Output:      ��.
	Return:      0-�ɹ�,����ʧ��.
	Others:      ��.
	*************************************************/
    EXPORT int ZPHOTO_HistagramEqualize(unsigned char* srcData,int width, int height, int stride);//ɫ������
	/*************************************************
	Function:    ZPHOTO_Desaturate
	Description: ȥɫ
	Input:       srcData-ԭʼͼ�񣬸�ʽΪ32λBGRA��ʽ��ִ�к���Ϊ���ͼ��
	             width-ԭʼͼ����
				 height-ԭʼͼ��߶�
				 stride-ԭʼͼ���Stride
				 ratio-ȥɫ�̶ȣ�[0-100]
	Output:      ��.
	Return:      0-�ɹ�,����ʧ��.
	Others:      ��.
	*************************************************/
    EXPORT int ZPHOTO_Desaturate(unsigned char *srcData, int width, int height, int stride, int ratio);//ȥɫ
   /*************************************************
	Function:    ZPHOTO_Curve
	Description: ���ߵ���
	Input:       srcData-ԭʼͼ�񣬸�ʽΪ32λBGRA��ʽ��ִ�к���Ϊ���ͼ��
	             width-ԭʼͼ����
				 height-ԭʼͼ��߶�
				 stride-ԭʼͼ���Stride
				 destChannel-ͨ��ѡ��Grayͨ��-0��Rͨ��-1��Gͨ��-2��Bͨ��-3
				 knotsPos-������XY�������飺��ʼ��+�м��+ĩβ�㣬���������һ��spline��������
	Output:      ��.
	Return:      0-�ɹ�,����ʧ��.
	Others:      ��.
	*************************************************/
    EXPORT int ZPHOTO_Curve(unsigned char* srcData, int width, int height, int stride, int dstChannel, int knotsPos[6]);

	/*************************************************
	Function:    ZPHOTO_CurveLevel
	Description: ɫ�׵���
	Input:       srcData-ԭʼͼ�񣬸�ʽΪ32λBGRA��ʽ��ִ�к���Ϊ���ͼ��
	             width-ԭʼͼ����
				 height-ԭʼͼ��߶�
				 stride-ԭʼͼ���Stride
				 destChannel-ͨ��ѡ��Grayͨ��-0��Rͨ��-1��Gͨ��-2��Bͨ��-3
				 inputLeftLimit-������Сֵ����Χ[0,255]
				 inputMiddle-�����м�ֵ����Χ[0,9.99]
				 inputRightLimit-�������ֵ����Χ[0,255]
				 outputLeftLimit-�����Сֵ����Χ[0,255]
				 outputRightLimit-������ֵ����Χ[0,255]
	Output:      ��.
	Return:      0-�ɹ�,����ʧ��.
	Others:      ��.
	*************************************************/
    EXPORT int ZPHOTO_ColorLevel(unsigned char * srcData , int width, int height ,int stride , int destChannel, unsigned char inputLeftLimit, float inputMiddle, unsigned char inputRightLimit, unsigned char outputLeftLimit , unsigned char outputRightLimit);//ɫ�׵���
	/*************************************************
	Function:    ZPHOTO_NLinearBrightContrastAdjust
	Description: �������ȶԱȶȵ���
	Input:       srcData-ԭʼͼ�񣬸�ʽΪ32λBGRA��ʽ��ִ�к���Ϊ���ͼ��
	             width-ԭʼͼ����
				 height-ԭʼͼ��߶�
				 stride-ԭʼͼ���Stride
				 brightness-����ֵ����Χ[-255,255]
				 contrast-�Աȶ�ֵ����Χ[-100,100]
				 threshold-������ֵ����Χ[0,255]��Ĭ��ֵΪ128
	Output:      ��.
	Return:      0-�ɹ�,����ʧ��.
	Others:      ��.
	*************************************************/
	EXPORT int ZPHOTO_LinearBrightContrast(unsigned char* srcData,int width,int height,int stride,int bright,int contrast,int threshold);//���������ȶԱȶȵ���
	/*************************************************
	Function:    ZPHOTO_LinearBrightContrast
	Description: ���������ȶԱȶȵ���
	Input:       srcData-ԭʼͼ�񣬸�ʽΪ32λBGRA��ʽ��ִ�к���Ϊ���ͼ��
	             width-ԭʼͼ����
				 height-ԭʼͼ��߶�
				 stride-ԭʼͼ���Stride
				 brightness-����ֵ����Χ[-100,100]
				 contrast-�Աȶ�ֵ����Χ[-100,100]
				 threshold-������ֵ����Χ[0,255]��Ĭ��ֵΪ128
	Output:      ��.
	Return:      0-�ɹ�,����ʧ��.
	Others:      ��.
	*************************************************/
	EXPORT int ZPHOTO_NLinearBrightContrast(unsigned char* srcData,int width, int height, int stride, int brightness, int contrast,int threshold);//�������ȶԱȶȵ���
	/*************************************************
	Function:    ZPHOTO_Blackwhite
	Description: �ڰ�
	Input:       srcData-ԭʼͼ�񣬸�ʽΪ32λBGRA��ʽ��ִ�к���Ϊ���ͼ��
	             width-ԭʼͼ����
				 height-ԭʼͼ��߶�
				 stride-ԭʼͼ���Stride
				 kRed-��ɫ����,��Χ[-200,300]
				 kGreen-��ɫ����,��Χ[-200,300]
				 kBlue-��ɫ����,��Χ[-200,300]
				 kYellow-��ɫ����,��Χ[-200,300]
				 kCyan-��ɫ����,��Χ[-200,300]
				 kMagenta-������,��Χ[-200,300]
	Output:      ��.
	Return:      0-�ɹ�,����ʧ��.
	Others:      ��.
	*************************************************/
	EXPORT int ZPHOTO_Blackwhite(unsigned char *srcData, int width, int height, int stride, int kRed, int kGreen, int kBlue, int kYellow, int kCyan, int kMagenta);//�ڰ�

	/*************************************************
	Function:    ZPHOTO_AutoContrast
	Description: �Զ��Աȶȵ���
	Input:       srcData-ԭʼͼ�񣬸�ʽΪ32λBGRA��ʽ��ִ�к���Ϊ���ͼ��
	             width-ԭʼͼ����
				 height-ԭʼͼ��߶�
				 stride-ԭʼͼ���Stride
	Output:      ��.
	Return:      0-�ɹ�,����ʧ��.
	Others:      ��.
	*************************************************/
    EXPORT int ZPHOTO_AutoContrast(unsigned char *srcData, int width, int height, int stride);//�Զ��Աȶ�
	/*************************************************
	Function:    ZPHOTO_AutoContrastAdjustWithParameters
	Description: �������Ƶ��Զ��Աȶȵ���
	Input:       srcData-ԭʼͼ�񣬸�ʽΪ32λBGRA��ʽ��ִ�к���Ϊ���ͼ��
	             width-ԭʼͼ����
				 height-ԭʼͼ��߶�
				 stride-ԭʼͼ���Stride
				 shadowCorrectRatio-��Ӱ�޼���������Χ[0.00,9.99]
				 highlightCorrectRatio-�߹��޼���������Χ[0.00,9.99]
	Output:      ��.
	Return:      0-�ɹ�,����ʧ��.
	Others:      ��.
	*************************************************/
	EXPORT int ZPHOTO_AutoContrastAdjustWithParameters(unsigned char *srcData, int width, int height, int stride, float shadowCorrectRatio, float highlightCorrectRatio);//�����Զ��Աȶ�
	/*************************************************
	Function:    ZPHOTO_AutoColorGradation
	Description: �Զ�ɫ�׵���
	Input:       srcData-ԭʼͼ�񣬸�ʽΪ32λBGRA��ʽ��ִ�к���Ϊ���ͼ��
	             width-ԭʼͼ����
				 height-ԭʼͼ��߶�
				 stride-ԭʼͼ���Stride
	Output:      ��.
	Return:      0-�ɹ�,����ʧ��.
	Others:      ��.
	*************************************************/
    EXPORT int ZPHOTO_AutoColorGradation(unsigned char *srcData, int width, int height, int stride);//�Զ�ɫ��
	/*************************************************
	Function:    ZPHOTO_AutoColorGradationAdjustWithParameters
	Description: �������Ƶ��Զ�ɫ�׵���
	Input:       srcData-ԭʼͼ�񣬸�ʽΪ32λBGRA��ʽ��ִ�к���Ϊ���ͼ��
	             width-ԭʼͼ����
				 height-ԭʼͼ��߶�
				 stride-ԭʼͼ���Stride
				 shadowCorrectRatio-��Ӱ�޼���������Χ[0.00,9.99]
				 highlightCorrectRatio-�߹��޼���������Χ[0.00,9.99]
	Output:      ��.
	Return:      0-�ɹ�,����ʧ��.
	Others:      ��.
	*************************************************/
    EXPORT int ZPHOTO_AutoColorGradationAdjustWithParameters(unsigned char *srcData, int width, int height, int stride, float shadowCorrectRatio, float highlightCorrectRatio);//�����Զ�ɫ��
	/*************************************************
	Function:    ZPHOTO_Threshold
	Description: ��ֵ(��ֵ��)
	Input:       srcData-ԭʼͼ�񣬸�ʽΪ32λBGRA��ʽ��ִ�к���Ϊ���ͼ��
	             width-ԭʼͼ����
				 height-ԭʼͼ��߶�
				 stride-ԭʼͼ���Stride
				 threshold-��ֵ����Χ[0,255]
	Output:      ��.
	Return:      0-�ɹ�,����ʧ��.
	Others:      ��.
	*************************************************/
    EXPORT int ZPHOTO_Threshold(unsigned char *srcData, int width, int height, int stride, int threshold);//��ֵ
	/*************************************************
	Function:    ZPHOTO_ChannelMixProcess
	Description: ͨ�������
	Input:       srcData-ԭʼͼ�񣬸�ʽΪ32λBGRA��ʽ��ִ�к���Ϊ���ͼ��
	             width-ԭʼͼ����
				 height-ԭʼͼ��߶�
				 stride-ԭʼͼ���Stride
				 channel-Red-0,Green-1,Blue-2,Gray-3
				 kr-Redͨ����������Χ[-200,200]
				 kg-Greenͨ����������Χ[-200,200]
				 kb-Blueͨ����������Χ[-200,200]
				 N-�������ڱ�������Χ[-200,200]
				 singleColor-�Ƿ�ɫ����ɫ-true����ɫ-false
				 constAdjust-�Ƿ�ִ�г����������ڣ�����-true,������-false
	Output:      ��.
	Return:      0-�ɹ�,����ʧ��.
	Others:      ��.
	*************************************************/
    EXPORT int ZPHOTO_ChannelMixProcess(unsigned char* srcData, int width, int height, int stride, int channel, int kr, int kg, int kb, int N, bool singleColor, bool constAdjust);
	/*************************************************
	Function:    ZPHOTO_FastestGaussFilter
	Description: ���ٸ�˹ģ��
	Input:       srcData-ԭʼͼ�񣬸�ʽΪ32λBGRA��ʽ
	             width-ԭʼͼ����
				 height-ԭʼͼ��߶�
				 stride-ԭʼͼ���Stride
				 radius-��˹ģ���뾶����Χ[0,1000]
	Output:      ��.
	Return:      0-�ɹ�,����ʧ��.
	Others:      ��.
	*************************************************/
	EXPORT int ZPHOTO_FastestGaussFilter(unsigned char* srcData,int width, int height,int stride,float radius);//��˹�˲�
	/*************************************************
	Function:    ZPHOTO_HighPass
	Description: �߷����
	Input:       srcData-ԭʼͼ�񣬸�ʽΪ32λBGRA��ʽ
	             width-ԭʼͼ����
				 height-ԭʼͼ��߶�
				 stride-ԭʼͼ���Stride
				 radius-��˹ģ���뾶����Χ[0,1000]
	Output:      ��.
	Return:      0-�ɹ�,����ʧ��.
	Others:      ��.
	*************************************************/
	EXPORT int ZPHOTO_HighPass(unsigned char* srcData,int width, int height,int stride,float mRadius);//�߷����
	/*************************************************
	Function:    ZPHOTO_USM
	Description: USM��
	Input:       srcData-ԭʼͼ�񣬸�ʽΪ32λBGRA��ʽ
	             width-ԭʼͼ����
				 height-ԭʼͼ��߶�
				 stride-ԭʼͼ���Stride
				 radius-��˹�뾶����ΧΪ[0,1000]
				 amount-�񻯳̶ȣ���ΧΪ[0,500]
				 threshold-����ֵ����ΧΪ[0,255]
	Output:      ��.
	Return:      0-�ɹ�,����ʧ��.
	Others:      ��.
	*************************************************/
    EXPORT int ZPHOTO_USM(unsigned char* srcData,int width, int height,int stride,float radius, int amount, int threshold);
	/*************************************************
	Function:    ZPHOTO_FindEdges
	Description: ���ұ�Ե
	Input:       srcData-ԭʼͼ�񣬸�ʽΪ32λBGRA��ʽ
	             width-ԭʼͼ����
				 height-ԭʼͼ��߶�
				 stride-ԭʼͼ���Stride
	Output:      ��.
	Return:      0-�ɹ�,����ʧ��.
	Others:      ��.
	*************************************************/
	EXPORT int ZPHOTO_FindEdges(unsigned char *srcData, int width, int height,int stride);//���ұ�Ե
	/////////////////////////////////////////////////////////////////////////////////////////////////////
    
    //ͼ���Ϲ���
	/*************************************************
	Function:    ZPHOTO_ModeDarken
	Description: �䰵ģʽ
	Input:       basePixel-�����������ֵ����Χ[0,255]
	             mixPixel-����������ֵ����Χ[0,255]
	Output:      ��.
	Return:      ͼ���Ͻ��ֵ����Χ[0,255].
	Others:      ��.
	*************************************************/
    EXPORT int ZPHOTO_ModeDarken(int basePixel,int mixPixel);
	/*************************************************
	Function:    ZPHOTO_ModeMultiply
	Description: ��Ƭ����ģʽ
	Input:       basePixel-�����������ֵ����Χ[0,255]
	             mixPixel-����������ֵ����Χ[0,255]
	Output:      ��.
	Return:      ͼ���Ͻ��ֵ����Χ[0,255].
	Others:      ��.
	*************************************************/
    EXPORT int ZPHOTO_ModeMultiply(int basePixel,int mixPixel);
	/*************************************************
	Function:    ZPHOTO_ModeColorBurn
	Description: ��ɫ����ģʽ
	Input:       basePixel-�����������ֵ����Χ[0,255]
	             mixPixel-����������ֵ����Χ[0,255]
	Output:      ��.
	Return:      ͼ���Ͻ��ֵ����Χ[0,255].
	Others:      ��.
	*************************************************/
    EXPORT int ZPHOTO_ModeColorBurn(int basePixel,int mixPixel);
	/*************************************************
	Function:    ZPHOTO_ModeLinearBurn
	Description: ���Խ���ģʽ
	Input:       basePixel-�����������ֵ����Χ[0,255]
	             mixPixel-����������ֵ����Χ[0,255]
	Output:      ��.
	Return:      ͼ���Ͻ��ֵ����Χ[0,255].
	Others:      ��.
	*************************************************/
    EXPORT int ZPHOTO_ModeLinearBurn(int basePixel,int mixPixel);
	/*************************************************
	Function:    ZPHOTO_ModeDarkness
	Description: ��ɫģʽ
	Input:       baseRed-�����������Rֵ����Χ[0,255]��ִ�к���Ϊ������
				 baseGreen-�����������Gֵ����Χ[0,255]��ִ�к���Ϊ������
				 baseBlue-�����������Bֵ����Χ[0,255]��ִ�к���Ϊ������
				 mixRed-����������Rֵ����Χ[0,255]
				 mixRed-����������Gֵ����Χ[0,255]
				 mixRed-����������Bֵ����Χ[0,255]
	Output:      ��.
	Return:      0-�ɹ�������ʧ��.
	Others:      ��.
	*************************************************/
    EXPORT int ZPHOTO_ModeDarkness(int *baseRed,int *baseGreen,int *baseBlue,int mixRed,int mixGreen,int mixBlue);
	/*************************************************
	Function:    ZPHOTO_ModeLighten
	Description: ����ģʽ
	Input:       basePixel-�����������ֵ����Χ[0,255]
	             mixPixel-����������ֵ����Χ[0,255]
	Output:      ��.
	Return:      ͼ���Ͻ��ֵ����Χ[0,255].
	Others:      ��.
	*************************************************/
    EXPORT int ZPHOTO_ModeLighten(int basePixel,int mixPixel);
	/*************************************************
	Function:    ZPHOTO_ModeScreen
	Description: ��ɫģʽ
	Input:       basePixel-�����������ֵ����Χ[0,255]
	             mixPixel-����������ֵ����Χ[0,255]
	Output:      ��.
	Return:      ͼ���Ͻ��ֵ����Χ[0,255].
	Others:      ��.
	*************************************************/
    EXPORT int ZPHOTO_ModeScreen(int basePixel,int mixPixel);
	/*************************************************
	Function:    ZPHOTO_ModeColorDodge
	Description: ��ɫ����ģʽ
	Input:       basePixel-�����������ֵ����Χ[0,255]
	             mixPixel-����������ֵ����Χ[0,255]
	Output:      ��.
	Return:      ͼ���Ͻ��ֵ����Χ[0,255].
	Others:      ��.
	*************************************************/
    EXPORT int ZPHOTO_ModeColorDodge(int basePixel,int mixPixel);
	/*************************************************
	Function:    ZPHOTO_ModeColorLinearDodge
	Description: ��ɫ���Լ���ģʽ
	Input:       basePixel-�����������ֵ����Χ[0,255]
	             mixPixel-����������ֵ����Χ[0,255]
	Output:      ��.
	Return:      ͼ���Ͻ��ֵ����Χ[0,255].
	Others:      ��.
	*************************************************/
    EXPORT int ZPHOTO_ModeColorLinearDodge(int basePixel,int mixPixel);
	/*************************************************
	Function:    ZPHOTO_ModeLightColor
	Description: ǳɫģʽ
	Input:       baseRed-�����������Rֵ����Χ[0,255]��ִ�к���Ϊ������
				 baseGreen-�����������Gֵ����Χ[0,255]��ִ�к���Ϊ������
				 baseBlue-�����������Bֵ����Χ[0,255]��ִ�к���Ϊ������
				 mixRed-����������Rֵ����Χ[0,255]
				 mixRed-����������Gֵ����Χ[0,255]
				 mixRed-����������Bֵ����Χ[0,255]
	Output:      ��.
	Return:      0-�ɹ�������ʧ��.
	Others:      ��.
	*************************************************/
    EXPORT int ZPHOTO_ModeLightColor(int *baseRed,int *baseGreen,int *baseBlue,int mixRed,int mixGreen,int mixBlue);
	/*************************************************
	Function:    ZPHOTO_ModeOverlay
	Description: ����ģʽ
	Input:       basePixel-�����������ֵ����Χ[0,255]
	             mixPixel-����������ֵ����Χ[0,255]
	Output:      ��.
	Return:      ͼ���Ͻ��ֵ����Χ[0,255].
	Others:      ��.
	*************************************************/
    EXPORT int ZPHOTO_ModeOverlay(int basePixel,int mixPixel);
	/*************************************************
	Function:    ZPHOTO_ModeSoftLight
	Description: ���ģʽ
	Input:       basePixel-�����������ֵ����Χ[0,255]
	             mixPixel-����������ֵ����Χ[0,255]
	Output:      ��.
	Return:      ͼ���Ͻ��ֵ����Χ[0,255].
	Others:      ��.
	*************************************************/
    EXPORT int ZPHOTO_ModeSoftLight(int basePixel,int mixPixel);
	/*************************************************
	Function:    ZPHOTO_ModeHardLight
	Description: ǿ��ģʽ
	Input:       basePixel-�����������ֵ����Χ[0,255]
	             mixPixel-����������ֵ����Χ[0,255]
	Output:      ��.
	Return:      ͼ���Ͻ��ֵ����Χ[0,255].
	Others:      ��.
	*************************************************/
    EXPORT int ZPHOTO_ModeHardLight(int basePixel,int mixPixel);
	/*************************************************
	Function:    ZPHOTO_ModeVividLight
	Description: ����ģʽ
	Input:       basePixel-�����������ֵ����Χ[0,255]
	             mixPixel-����������ֵ����Χ[0,255]
	Output:      ��.
	Return:      ͼ���Ͻ��ֵ����Χ[0,255].
	Others:      ��.
	*************************************************/
    EXPORT int ZPHOTO_ModeVividLight(int basePixel,int mixPixel);
	/*************************************************
	Function:    ZPHOTO_ModeLinearLight
	Description: ���Թ�ģʽ
	Input:       basePixel-�����������ֵ����Χ[0,255]
	             mixPixel-����������ֵ����Χ[0,255]
	Output:      ��.
	Return:      ͼ���Ͻ��ֵ����Χ[0,255].
	Others:      ��.
	*************************************************/
    EXPORT int ZPHOTO_ModeLinearLight(int basePixel,int mixPixel);
	/*************************************************
	Function:    ZPHOTO_ModePinLight
	Description: ���ģʽ
	Input:       basePixel-�����������ֵ����Χ[0,255]
	             mixPixel-����������ֵ����Χ[0,255]
	Output:      ��.
	Return:      ͼ���Ͻ��ֵ����Χ[0,255].
	Others:      ��.
	*************************************************/
    EXPORT int ZPHOTO_ModePinLight(int basePixel,int mixPixel);
	/*************************************************
	Function:    ZPHOTO_ModeSolidColorMixing
	Description: ʵɫ���ģʽ
	Input:       baseRed-�����������Rֵ����Χ[0,255]��ִ�к���Ϊ������
				 baseGreen-�����������Gֵ����Χ[0,255]��ִ�к���Ϊ������
				 baseBlue-�����������Bֵ����Χ[0,255]��ִ�к���Ϊ������
				 mixRed-����������Rֵ����Χ[0,255]
				 mixRed-����������Gֵ����Χ[0,255]
				 mixRed-����������Bֵ����Χ[0,255]
	Output:      ��.
	Return:      0-�ɹ�������ʧ��.
	Others:      ��.
	*************************************************/
    EXPORT int ZPHOTO_ModeSolidColorMixing(int *baseRed,int *baseGreen,int *baseBlue,int mixRed,int mixGreen,int mixBlue);
	/*************************************************
	Function:    ZPHOTO_ModeDifference
	Description: ��ֵģʽ
	Input:       basePixel-�����������ֵ����Χ[0,255]
	             mixPixel-����������ֵ����Χ[0,255]
	Output:      ��.
	Return:      ͼ���Ͻ��ֵ����Χ[0,255].
	Others:      ��.
	*************************************************/
    EXPORT int ZPHOTO_ModeDifference(int basePixel,int mixPixel);
	/*************************************************
	Function:    ZPHOTO_ModeExclusion
	Description: �ų�ģʽ
	Input:       basePixel-�����������ֵ����Χ[0,255]
	             mixPixel-����������ֵ����Χ[0,255]
	Output:      ��.
	Return:      ͼ���Ͻ��ֵ����Χ[0,255].
	Others:      ��.
	*************************************************/
    EXPORT int ZPHOTO_ModeExclusion(int basePixel,int mixPixel);
	/*************************************************
	Function:    ZPHOTO_ModeSubtraction
	Description: ��ȥģʽ
	Input:       basePixel-�����������ֵ����Χ[0,255]
	             mixPixel-����������ֵ����Χ[0,255]
	Output:      ��.
	Return:      ͼ���Ͻ��ֵ����Χ[0,255].
	Others:      ��.
	*************************************************/
    EXPORT int ZPHOTO_ModeSubtraction(int basePixel,int mixPixel);
	/*************************************************
	Function:    ZPHOTO_ModeDivide
	Description: ����ģʽ
	Input:       basePixel-�����������ֵ����Χ[0,255]
	             mixPixel-����������ֵ����Χ[0,255]
	Output:      ��.
	Return:      ͼ���Ͻ��ֵ����Χ[0,255].
	Others:      ��.
	*************************************************/
    EXPORT int ZPHOTO_ModeDivide(int basePixel,int mixPixel);
	/*************************************************
	Function:    ZPHOTO_ModeDesaturate
	Description: ȥɫ
	Input:       basePixel-�����������ֵ����Χ[0,255]
	             mixPixel-����������ֵ����Χ[0,255]
	Output:      ��.
	Return:      ͼ���Ͻ��ֵ����Χ[0,255].
	Others:      ��.
	*************************************************/
    EXPORT int ZPHOTO_ModeDesaturate(int red,int green,int blue);
	/*************************************************
	Function:    ZPHOTO_ModeColorInvert
	Description: ����
	Input:       basePixel-�����������ֵ����Χ[0,255]
	             mixPixel-����������ֵ����Χ[0,255]
	Output:      ��.
	Return:      ͼ���Ͻ��ֵ����Χ[0,255].
	Others:      ��.
	*************************************************/
    EXPORT int ZPHOTO_ModeColorInvert(int *red,int *green,int *blue);
	/*************************************************
	Function:    ZPHOTO_ImageBlendEffect
	Description: ͼ����
	Input:       baseData-����ͼ��ͼ��Buffer����ʽΪ32λBGRA
	             width-����ͼ����
				 height-����ͼ��߶�
				 stride-����ͼ��Stride
				 mixData-���ͼ��ͼ��Buffer����С�����ͼ��ͼ��һ��
				 blendMode-ͼ����ģʽ
	Output:      ��.
	Return:      0-�ɹ�������ʧ��.
	Others:      ��.
	*************************************************/
	EXPORT int ZPHOTO_ImageBlendEffect(unsigned char* baseData, int width, int height, int stride, unsigned char* mixData, int blendMode);
    /////////////////////////////////////////////////////////////////////////////////////////////////////
    
    //��չ����
	/*************************************************
	Function:    ZPHOTO_ColorTemperature
	Description: ɫ�µ���
	Input:       srcData-ԭʼͼ�񣬸�ʽΪ32λBGRA��ʽ
	             width-ԭʼͼ����
				 height-ԭʼͼ��߶�
				 stride-ԭʼͼ���Stride
				 intensity-ɫ��ǿ�ȣ���Χ[-50,50]��intensity < 0����ɫ��intensity = 0,ԭͼ��intensity > 0��ůɫ��
	Output:      ��.
	Return:      0-�ɹ�,����ʧ��.
	Others:      ��.
	*************************************************/
    EXPORT int ZPHOTO_ColorTemperature(unsigned char* srcData,int width, int height, int stride, int intensity);
	/*************************************************
	Function:    ZPHOTO_Shadow 
	Description: ��Ӱ����
	Input:       srcData-ԭʼͼ�񣬸�ʽΪ32λBGRA��ʽ
	             width-ԭʼͼ����
				 height-ԭʼͼ��߶�
				 stride-ԭʼͼ���Stride
				 intensity-��Ӱǿ��ֵ��ȡֵ��ΧΪ[0,100]
	Output:      ��.
	Return:      0-�ɹ�,����ʧ��.
	Others:      ��.
	*************************************************/
    EXPORT int ZPHOTO_Shadow(unsigned char* srcData,int width, int height, int stride, int intensity);
	/*************************************************
	Function:    ZPHOTO_Highlight
	Description: �߹����
	Input:       srcData-ԭʼͼ�񣬸�ʽΪ32λBGRA��ʽ
	             width-ԭʼͼ����
				 height-ԭʼͼ��߶�
				 stride-ԭʼͼ���Stride
				 intensity--�߹�ǿ��ֵ��ȡֵ��ΧΪ[0,100]
	Output:      ��.
	Return:      0-�ɹ�,����ʧ��.
	Others:      ��.
	*************************************************/
    EXPORT int ZPHOTO_Highlight(unsigned char* srcData,int width, int height, int stride, int intensity);
	/*************************************************
	Function:    ZPHOTO_HighlightShadowPrecise
	Description: �߹���Ӱ����
	Input:       srcData-ԭʼͼ�񣬸�ʽΪ32λBGRA��ʽ
	             width-ԭʼͼ����
				 height-ԭʼͼ��߶�
				 stride-ԭʼͼ���Stride
				 highlight--�߹�ǿ��ֵ��ȡֵ��ΧΪ[-200,100]
				 shadow-��Ӱǿ��ֵ��ȡֵ��ΧΪ[-200,100]
	Output:      ��.
	Return:      0-�ɹ�,����ʧ��.
	Others:      ��.
	*************************************************/
	EXPORT int ZPHOTO_HighlightShadowPrecise(unsigned char* srcData,int width, int height, int stride, float highlight, float shadow);
	/*************************************************
	Function:    ZPHOTO_Exposure
	Description: �ع����
	Input:       srcData-ԭʼͼ�񣬸�ʽΪ32λBGRA��ʽ
	             width-ԭʼͼ����
				 height-ԭʼͼ��߶�
				 stride-ԭʼͼ���Stride
				 intensity--�ع�ǿ��ֵ��ȡֵ��ΧΪ[0,100]
	Output:      ��.
	Return:      0-�ɹ�,����ʧ��.
	Others:      ��.
	*************************************************/
    EXPORT int ZPHOTO_Exposure(unsigned char* srcData,int width, int height, int stride, int intensity);
	/*************************************************
	Function:    ZPHOTO_CalcWH
	Description: ����ͼ��任֮��Ŀ�߼��任����H���ýӿ�����ZPHOTO_ImageTransformation����       
	Input:	     inputImgSize--����ͼ������Ϣ
				 angle--��ת�Ƕ�ֵ��ȡֵ��ΧΪ[-360-360]
				 scale--���ű任ֵ��ȡֵ����0
				 transform_method--�任������
									 transform_scale���ű任, ȡֵΪ0��
									 transform_rotation��ת�任, ȡֵΪ1��   
									 transform_rotation_scale������ת�任, ȡֵΪ2��
									 transform_affine����任, ȡֵΪ3��
									 transform_mirror_hˮƽ����任, ȡֵΪ4��
									 transform_mirror_v��ֱ����任, ȡֵΪ5��
									 transform_offsetƽ�Ʊ任, ȡֵΪ6��
				 outputImgSize--���ͼ������Ϣ
				 H--�任�������飬����Ϊ6
	Output:      ��.
	Return:      0-�ɹ�,����ʧ��.
	Others:      ��.
	*************************************************/
    EXPORT int ZPHOTO_CalcWH( int inputImgSize[2], float angle, float scale, int transform_method, int outputImgSize[2],float H[]);
	/*************************************************
	Function:    ZPHOTO_ImageTransformation
	Description: ͼ��任
	Input:       srcData-ԭʼͼ�񣬸�ʽΪ32λBGRA��ʽ
	             srcImgSize--ԭʼͼ������Ϣ����
                 dstData--���ͼ��Buffer����С�ɽӿ�ZPHOTO_CalcWH���
				 dstImgSize--Ŀ��ͼ������Ϣ����
				 H--�任�������飬����Ϊ6
				 Interpolation_method--��ֵ����ѡ��interpolation_bilinear,interpolation_nearest
				 Transform_method--�任������
									 transform_scale���ű任, ȡֵΪ0��
									 transform_rotation��ת�任, ȡֵΪ1��   
									 transform_rotation_scale������ת�任, ȡֵΪ2��
									 transform_affine����任, ȡֵΪ3��
									 transform_mirror_hˮƽ����任, ȡֵΪ4��
									 transform_mirror_v��ֱ����任, ȡֵΪ5��
									 transform_offsetƽ�Ʊ任, ȡֵΪ6��
	Output:      ��.
	Return:      0-�ɹ�,����ʧ��.
	Others:      ��.
	*************************************************/
    EXPORT int ZPHOTO_ImageTransformation(unsigned char *srcData, int srcImgSize[2], unsigned char *dstData, int dstImgSize[2], float H[], int Interpolation_method, int Transform_method);
	/*************************************************
	Function:    ZPHOTO_FastMeanFilter
	Description: ��ֵģ��
	Input:       srcData-ԭʼͼ�񣬸�ʽΪ32λBGRA��ʽ
	             width-ԭʼͼ����
				 height-ԭʼͼ��߶�
				 stride-ԭʼͼ���Stride
				 radius--��ֵ�˲��뾶��ȡֵ��ΧΪ[0,width / 2]
	Output:      ��.
	Return:      0-�ɹ�,����ʧ��.
	Others:      ��.
	*************************************************/
	EXPORT int ZPHOTO_FastMeanFilter(unsigned char* srcData, int width, int height ,int stride, int radius);
	/*************************************************
	Function:    ZPHOTO_SobelFilter
	Description: Sobel��Ե���
	Input:       srcData-ԭʼͼ�񣬸�ʽΪ32λBGRA��ʽ
	             width-ԭʼͼ����
				 height-ԭʼͼ��߶�
				 stride-ԭʼͼ���Stride
	Output:      ��.
	Return:      0-�ɹ�,����ʧ��.
	Others:      ��.
	*************************************************/
	EXPORT int ZPHOTO_SobelFilter(unsigned char *srcData, int width, int height,int stride);

	//For Android Development
	/*************************************************
	Function:    ZPHOTO_RGBA2BGRA
	Description: RGBA��ʽתBGRA��ʽ����ҪΪandroid����
	Input:       srcData-ԭʼͼ�񣬸�ʽΪ32λBGRA��ʽ��ִ�к�Ϊ���ͼ��
	             width-ԭʼͼ����
				 height-ԭʼͼ��߶�
				 stride-ԭʼͼ���Stride
	Output:      ��.
	Return:      0-�ɹ�,����ʧ��.
	Others:      ��.
	*************************************************/
	EXPORT int ZPHOTO_RGBA2BGRA(unsigned char* srcData, int width, int height, int stride);
	/*************************************************
	Function:    ZPHOTO_BGRA2RGBA
	Description: BGRA��ʽתRGBA��ʽ����ҪΪandroid����
	Input:       srcData-ԭʼͼ�񣬸�ʽΪ32λBGRA��ʽ��ִ�к�Ϊ���ͼ��
	             width-ԭʼͼ����
				 height-ԭʼͼ��߶�
				 stride-ԭʼͼ���Stride
	Output:      ��.
	Return:      0-�ɹ�,����ʧ��.
	Others:      ��.
	*************************************************/
    EXPORT int ZPHOTO_BGRA2RGBA(unsigned char* srcData, int width, int height, int stride);

	/*************************************************
	Function:    ZPHOTO_Fragment
	Description: ��Ƭ
	Input:       srcData-ԭʼͼ�񣬸�ʽΪ32λBGRA��ʽ��ִ�к�Ϊ���ͼ��
	             width-ԭʼͼ����
				 height-ԭʼͼ��߶�
				 stride-ԭʼͼ���Stride
	Output:      ��.
	Return:      0-�ɹ�,����ʧ��.
	Others:      ��.
	*************************************************/
	EXPORT int ZPHOTO_Fragment(unsigned char *srcData, int width, int height, int stride);
	/*************************************************
	Function:    ZPHOTO_MotionBlur
	Description: �˶�ģ��
	Input:       srcData-ԭʼͼ�񣬸�ʽΪ32λBGRA��ʽ��ִ�к�Ϊ���ͼ��
	             width-ԭʼͼ����
				 height-ԭʼͼ��߶�
				 stride-ԭʼͼ���Stride
				 angle-�˶�ģ���Ƕ�ֵ��ȡֵ��ΧΪ[0,360]
				 distance-�˶�ģ������ֵ��ȡֵ��ΧΪ[0,200]
	Output:      ��.
	Return:      0-�ɹ�,����ʧ��.
	Others:      ��.
	*************************************************/
	EXPORT int ZPHOTO_MotionBlur(unsigned char* srcData,int width, int height, int stride, int angle, int distance);
	/*************************************************
	Function:    ZPHOTO_SurfaceBlur
	Description: ����ģ��
	Input:       srcData-ԭʼͼ�񣬸�ʽΪ32λBGRA��ʽ��ִ�к�Ϊ���ͼ��
	             width-ԭʼͼ����
				 height-ԭʼͼ��߶�
				 stride-ԭʼͼ���Stride
				 threshold-����ģ����ֵֵ��ȡֵ��ΧΪ[0,255]
				 radius-����ģ���뾶ֵ��ȡֵ��ΧΪ[0,10]
	Output:      ��.
	Return:      0-�ɹ�,����ʧ��.
	Others:      ��.
	*************************************************/
	EXPORT int ZPHOTO_SurfaceBlur(unsigned char *srcData, int width, int height, int stride,int threshold, int radius);
	/*************************************************
	Function:    ZPHOTO_RadialBlur
	Description: ��תģ��
	Input:       srcData-ԭʼͼ�񣬸�ʽΪ32λBGRA��ʽ��ִ�к�Ϊ���ͼ��
	             width-ԭʼͼ����
				 height-ԭʼͼ��߶�
				 stride-ԭʼͼ���Stride
				 cenX-ѡ��ģ������X����
				 cenY-��תģ������Y����
				 amount-��תģ���̶���������ΧΪ[1-100]
	Output:      ��.
	Return:      0-�ɹ�,����ʧ��.
	Others:      ��.
	*************************************************/
	EXPORT int ZPHOTO_RadialBlur(unsigned char* srcData, int width, int height ,int stride, int cenX, int cenY, int amount);
	/*************************************************
	Function:    ZPHOTO_ZoomBlur
	Description: ����ģ��
	Input:       srcData-ԭʼͼ�񣬸�ʽΪ32λBGRA��ʽ��ִ�к�Ϊ���ͼ��
	             width-ԭʼͼ����
				 height-ԭʼͼ��߶�
				 stride-ԭʼͼ���Stride
				 cenX-����ģ������X����
				 cenY-����ģ������Y����
				 sampleRadius-����ģ���뾶����ΧΪ[0-255]
				 amount-����ģ���̶�����,��ΧΪ[1-100]
	Output:      ��.
	Return:      0-�ɹ�,����ʧ��.
	Others:      ��.
	*************************************************/
	EXPORT int ZPHOTO_ZoomBlur(unsigned char* srcData, int width, int height ,int stride, int cenX, int cenY, int sampleRadius, int amount);
	/*************************************************
	Function:    ZPHOTO_Relief
	Description: ����
	Input:       srcData-ԭʼͼ�񣬸�ʽΪ32λBGRA��ʽ��ִ�к�Ϊ���ͼ��
	             width-ԭʼͼ����
				 height-ԭʼͼ��߶�   
				 stride-ԭʼͼ���Stride
				 angle-����Ƕȣ���ΧΪ[0-360]
				 amount-����̶�����,��ΧΪ[0-500]
	Output:      ��.
	Return:      0-�ɹ�,����ʧ��.
	Others:      ��.
	*************************************************/
	EXPORT int ZPHOTO_Relief(unsigned char *srcData, int width, int height, int stride, int angle, int amount);
	/*************************************************
	Function:    ZPHOTO_Mean
	Description: ƽ��
	Input:       srcData-ԭʼͼ�񣬸�ʽΪ32λBGRA��ʽ��ִ�к�Ϊ���ͼ��
	             width-ԭʼͼ����
				 height-ԭʼͼ��߶�
				 stride-ԭʼͼ���Stride
	Output:      ��.
	Return:      0-�ɹ�,����ʧ��.
	Others:      ��.
	*************************************************/
	EXPORT int ZPHOTO_Mean(unsigned char *srcData, int width, int height, int stride);
	/*************************************************
	Function:    ZPHOTO_Mosaic
	Description: ������
	Input:       srcData-ԭʼͼ�񣬸�ʽΪ32λBGRA��ʽ��ִ�к�Ϊ���ͼ��
	             width-ԭʼͼ����
				 height-ԭʼͼ��߶�
				 stride-ԭʼͼ���Stride
				 size-Mosaic�뾶,��ΧΪ[0,200]
	Output:      ��.
	Return:      0-�ɹ�,����ʧ��.
	Others:      ��.
	*************************************************/
	EXPORT int ZPHOTO_Mosaic(unsigned char* srcData, int width, int height, int stride, int size);
	/*************************************************
	Function:    ZPHOTO_ColorBalance
	Description: ɫ��ƽ��
	Input:       srcData-ԭʼͼ�񣬸�ʽΪ32λBGRA��ʽ��ִ�к�Ϊ���ͼ��
	             width-ԭʼͼ����
				 height-ԭʼͼ��߶�
				 stride-ԭʼͼ���Stride
				 cyan-��ɫ����ΧΪ[-100,100]
				 magenta-��죬��ΧΪ[-100,100]
				 yellow-��ɫ����ΧΪ[-100,100]
				 channel-ͨ��ѡ��RGB-0,R-1,G-2,B-3
				 preserveLuminosity-true:�������ȣ�false:����������
	Output:      ��.
	Return:      0-�ɹ�,����ʧ��.
	Others:      ��.
	*************************************************/
	EXPORT int ZPHOTO_ColorBalance(unsigned char* srcData, int width, int height, int stride, int cyan, int magenta, int yellow, int channel, bool preserveLuminosity);
	/*************************************************
	Function:    ZPHOTO_Diffusion
	Description: ��ɢ
	Input:       srcData-ԭʼͼ�񣬸�ʽΪ32λBGRA��ʽ��ִ�к�Ϊ���ͼ��
	             width-ԭʼͼ����
				 height-ԭʼͼ��߶�
				 stride-ԭʼͼ���Stride
				 intensity-��ɢ�̶ȣ���ΧΪ[0,100]
	Output:      ��.
	Return:      0-�ɹ�,����ʧ��.
	Others:      ��.
	*************************************************/
	EXPORT int ZPHOTO_Diffusion(unsigned char* srcData,int width, int height,int stride,int intensity);
	/*************************************************
	Function:    ZPHOTO_LSNBlur
	Description: LSNBlur
	Input:       srcData-ԭʼͼ�񣬸�ʽΪ32λBGRA��ʽ��ִ�к�Ϊ���ͼ��
	             width-ԭʼͼ����
				 height-ԭʼͼ��߶�
				 stride-ԭʼͼ���Stride
				 radius-LSNBlur�뾶����ΧΪ[0,200]
				 delta-[0,500]
	Output:      ��.
	Return:      0-�ɹ�,����ʧ��.
	Others:      ��.
	*************************************************/
	EXPORT int ZPHOTO_LSNBlur(unsigned char* srcData, int width, int height, int stride, int radius, int delta);
	/*************************************************
	Function:    ZPHOTO_MedianFilter
	Description: ��ֵ�˲�(�м�ɫ)
	Input:       srcData-ԭʼͼ�񣬸�ʽΪ32λBGRA��ʽ��ִ�к�Ϊ���ͼ��
	             width-ԭʼͼ����
				 height-ԭʼͼ��߶�
				 stride-ԭʼͼ���Stride
				 radius-����ģ���뾶ֵ��ȡֵ��ΧΪ[0,100]
	Output:      ��.
	Return:      0-�ɹ�,����ʧ��.
	Others:      ��.
	*************************************************/
	EXPORT int ZPHOTO_MedianFilter(unsigned char *srcData, int width, int height, int stride,int radius);
	/*************************************************
	Function:    ZPHOTO_MaxFilter
	Description: ���ֵ�˲�(���ֵ)
	Input:       srcData-ԭʼͼ�񣬸�ʽΪ32λBGRA��ʽ��ִ�к�Ϊ���ͼ��
	             width-ԭʼͼ����
				 height-ԭʼͼ��߶�
				 stride-ԭʼͼ���Stride
				 radius-����ģ���뾶ֵ��ȡֵ��ΧΪ[0,100]
	Output:      ��.
	Return:      0-�ɹ�,����ʧ��.
	Others:      ��.
	*************************************************/
	EXPORT int ZPHOTO_MaxFilter(unsigned char *srcData, int width, int height, int stride, int radius);
	/*************************************************
	Function:    ZPHOTO_MinFilter
	Description: ��Сֵ�˲�(��Сֵ)
	Input:       srcData-ԭʼͼ�񣬸�ʽΪ32λBGRA��ʽ��ִ�к�Ϊ���ͼ��
	             width-ԭʼͼ����
				 height-ԭʼͼ��߶�
				 stride-ԭʼͼ���Stride
				 radius-����ģ���뾶ֵ��ȡֵ��ΧΪ[0,100]
	Output:      ��.
	Return:      0-�ɹ�,����ʧ��.
	Others:      ��.
	*************************************************/
	EXPORT int ZPHOTO_MinFilter(unsigned char *srcData, int width, int height, int stride, int radius);
	/*************************************************
	Function:    ZPHOTO_GlowingEdges
	Description: ������Ե�˾�
	Input:       srcData-ԭʼͼ�񣬸�ʽΪ32λBGRA��ʽ��ִ�к�Ϊ���ͼ��
	             width-ԭʼͼ����
				 height-ԭʼͼ��߶�
				 stride-ԭʼͼ���Stride
				 edgeSize-��Ե���ֵ��ȡֵ��ΧΪ[1,14]
				 edgeLightness-��Ե����ֵ��ȡֵ��ΧΪ[0,20]
				 edgeSmoothness-ƽ���ȣ�ȡֵ��ΧΪ[1,15]
	Output:      ��.
	Return:      0-�ɹ�,����ʧ��.
	Others:      ��.
	*************************************************/
	EXPORT int ZPHOTO_GlowingEdges(unsigned char* srcData, int width ,int height, int stride, int edgeSize, int edgeLightness, int edgeSmoothness);
	
	/*************************************************
	Function:    ZPHOTO_ImageWarpWave
	Description: Wave ����
	Input:       srcData-ԭʼͼ�񣬸�ʽΪ32λBGRA��ʽ��ִ�к�Ϊ���ͼ��
	             width-ԭʼͼ����
				 height-ԭʼͼ��߶�
				 stride-ԭʼͼ���Stride
				 intensity-���γ̶ȣ���Χ[0, 100]
	Output:      ��.
	Return:      0-�ɹ�,����ʧ��.
	Others:      ��.
	*************************************************/
	EXPORT int ZPHOTO_ImageWarpWave(unsigned char *srcData, int width, int height, int stride, int intensity);
	
	/*************************************************
	Function:    ZPHOTO_RGBToYCbCr
	Description: RGBתYCbCr
	Input:       Red-����R��������Χ[0,255]
				 Green-����G��������Χ[0,255]
				 Blue-����B��������Χ[0,255]
				 Y-����Y����
				 Cb-����Cb����
				 Cr-����Cr����
	Output:      ��.
	Return:      ��.
	Others:      ��.
	*************************************************/
	EXPORT void ZPHOTO_RGBToYCbCr(int R, int G, int B, int*Y,int*Cb, int* Cr);
	/*************************************************
	Function:    ZPHOTO_YCbCrToRGB
	Description: YCbCrתRGB	   
	Input: 	     Y-����Y����
				 Cb-����Cb����
				 Cr-����Cr����
				 Red-����R��������Χ[0,255]
				 Green-����G��������Χ[0,255]
				 Blue-����B��������Χ[0,255]
	Output:      ��.
	Return:      ��.
	Others:      ��.
	*************************************************/
    EXPORT void ZPHOTO_YCbCrToRGB(int Y, int Cb, int Cr, int*Red,int*Green, int* Blue);
	
	/*************************************************
	Function:    ZPHOTO_RGBToLab
	Description: RGBתLAB	   
	Input:    	 Red-����R��������Χ[0,255]
				 Green-����G��������Χ[0,255]
				 Blue-����B��������Χ[0,255]
				 L-����Y��������Χ[0,255]
				 A-����I��������Χ[0,255]
				 B-����Q����, ��Χ[0,255]
	Output:      ��.
	Return:      ��.
	Others:      ��.
	*************************************************/
    EXPORT void ZPHOTO_RGBToLab(int Red, int Green, int Blue, int* L, int *A, int *B);
	/*************************************************
	Function:    ZPHOTO_LabToRGB
	Description: LABתRGB	   
	Input:    	 L-����Y��������Χ[0,255]
				 A-����I��������Χ[0,255]
				 B-����Q����, ��Χ[0,255]
				 Red-����R��������Χ[0,255]
				 Green-����G��������Χ[0,255]
				 Blue-����B��������Χ[0,255]
	Output:      ��.
	Return:      ��.
	Others:      ��.
	*************************************************/
    EXPORT void ZPHOTO_LabToRGB(int L, int A, int B, int* Red, int* Green, int* Blue);
	/*************************************************
	Function:    ZPHOTO_GammaCorrect
	Description: Gamma����
	Input:       srcData-ԭʼͼ�񣬸�ʽΪ32λBGRA��ʽ
	             width-ԭʼͼ����
				 height-ԭʼͼ��߶�
				 stride-ԭʼͼ���Stride
				 intensity-Gamma��������Χ[1,50]
	Output:      ��.
	Return:      0-�ɹ�,����ʧ��.
	Others:      ��.
	*************************************************/
	EXPORT int ZPHOTO_GammaCorrect(unsigned char* srcData, int width, int height, int stride, int intensity);

    /******************************************************************************* 
    * Function Name  : Natural Saturation 
    * Description    : ��Ȼ���Ͷ�
    * Input  srcData : image data
    * Input  width   : image width
    * Input  height  : image height
    * Input  stride  : image stride
    * Input  saturation     : saturation value to adjust from -100 to 100
    * Output         : None 
    * Return         : 0-success, others failed
    *******************************************************************************/
	EXPORT int ZPHOTO_NaturalSaturation(unsigned char* srcData,int width, int height, int stride, int saturation);
	EXPORT int ZPHOTO_LUTFilter(unsigned char* srcData, int width ,int height, int stride, unsigned char*Map, int ratio);
/****************************************************Update***************************************************
****************************************************Date:2018-06-21*******************************************
Content:
Smart blur filter
Anisotropic Filter
*************************************************************************************************************/
/*************************************************
	Function:    ZPHOTO_SmartBlurFilter
	Description: Smart Blur
	Input:       srcData-ԭʼͼ�񣬸�ʽΪ32λBGRA��ʽ
	             width-ԭʼͼ����
				 height-ԭʼͼ��߶�
				 stride-ԭʼͼ���Stride
				 size-ģ���뾶ֵ��ȡֵ��ΧΪ[0,100]
				 threshold-������ֵ����Χ[0,255]
	Output:      ��.
	Return:      0-�ɹ�,����ʧ��.
	Others:      ��.
*************************************************/
	EXPORT int ZPHOTO_SmartBlurFilter(unsigned char* srcData, int width, int height, int stride, int size, int threshold);
/*************************************************
	Function:    ZPHOTO_AnisotropicFilter
	Description: Anisotropic Filter
	Input:       srcData-ԭʼͼ�񣬸�ʽΪ32λBGRA��ʽ
	             width-ԭʼͼ����
				 height-ԭʼͼ��߶�
				 stride-ԭʼͼ���Stride
				 iter-����������ȡֵ��ΧΪ[0,100]
				 k-��ɢϵ������Χ[0,]
				 lambda-[0,0.35],default 0.25
				 offset-[0,10],default 3
	Output:      ��.
	Return:      0-�ɹ�,����ʧ��.
	Others:      ��.
*************************************************/
	EXPORT int ZPHOTO_AnisotropicFilter(unsigned char* srcData, int width, int height, int stride, int iter, float k, float lambda = 0.25, int offset = 3);
#else

#ifdef __cplusplus
extern "C" {
#endif    
	//��������
	int ZPHOTO_Exposure(unsigned char* srcData,int width, int height, int stride, int intensity);
    int ZPHOTO_Saturation(unsigned char* srcData,int width, int height, int stride, int saturation);
	int ZPHOTO_Posterize(unsigned char *srcData, int width, int height, int stride, int clusterNum);
	int ZPHOTO_OverExposure(unsigned char *srcData, int width, int height, int stride);
	int ZPHOTO_Lightness(unsigned char* srcData,int width, int height, int stride, int lightness);
	int ZPHOTO_Invert(unsigned char *srcData, int width, int height, int stride);
	int ZPHOTO_HueAndSaturation(unsigned char* srcData,int width, int height, int stride,int hue, int saturation);
	int ZPHOTO_HistagramEqualize(unsigned char* srcData,int width, int height, int stride);
	int ZPHOTO_Desaturate(unsigned char *srcData, int width, int height, int stride, int ratio);
    int ZPHOTO_Curve(unsigned char* srcData, int width, int height, int stride, int dstChannel, int knotsPos[6]);
	int ZPHOTO_ColorLevel(unsigned char * srcData , int width, int height ,int stride , int destChannel, unsigned char inputLeftLimit, float inputMiddle, unsigned char inputRightLimit, unsigned char outputLeftLimit , unsigned char outputRightLimit);
	int ZPHOTO_NLinearBrightContrast(unsigned char* srcData,int width,int height,int stride,int bright,int contrast,int threshold);
    int ZPHOTO_LinearBrightContrast(unsigned char* srcData,int width, int height, int stride, int brightness, int contrast,int threshold);
    int ZPHOTO_Blackwhite(unsigned char *srcData, int width, int height, int stride, int kRed, int kGreen, int kBlue, int kYellow, int kCyan, int kMagenta);
	int ZPHOTO_AutoContrast(unsigned char *srcData, int width, int height, int stride);
	int ZPHOTO_AutoContrastAdjustWithParameters(unsigned char *srcData, int width, int height, int stride, float shadowCorrectRatio, float highlightCorrectRatio);
	int ZPHOTO_AutoColorGradation(unsigned char *srcData, int width, int height, int stride);
	int ZPHOTO_AutoColorGradationAdjustWithParameters(unsigned char *srcData, int width, int height, int stride, float shadowCorrectRatio, float highlightCorrectRatio);
	int ZPHOTO_Threshold(unsigned char *srcData, int width, int height, int stride, int threshold);
	int ZPHOTO_HighPass(unsigned char* srcData,int width, int height,int stride,float mRadius);
	int ZPHOTO_ChannelMixProcess(unsigned char *srcData, int width, int height, int stride,int rCof,int gCof, int bCof, int rRatio, int gRatio, int bRatio);
	int ZPHOTO_USM(unsigned char* srcData,int width, int height,int stride,float radius, int amount, int threshold);
	int ZPHOTO_FindEdges(unsigned char *srcData, int width, int height,int stride);
	int ZPHOTO_Fragment(unsigned char *srcData, int width, int height, int stride);
	int ZPHOTO_MotionBlur(unsigned char* srcData,int width, int height, int stride, int angle, int distance);
	int ZPHOTO_SurfaceBlur(unsigned char *srcData, int width, int height, int stride,int threshold, int radius);

	//V1.2
	int ZPHOTO_RadialBlur(unsigned char* srcData, int width, int height ,int stride, int cenX, int cenY, int amount);
	int ZPHOTO_ZoomBlur(unsigned char* srcData, int width, int height ,int stride, int cenX, int cenY, int sampleRadius, int amount);
	int ZPHOTO_Relief(unsigned char *srcData, int width, int height, int stride, int angle, int amount);
	int ZPHOTO_Mean(unsigned char *srcData, int width, int height, int stride);
	int ZPHOTO_ColorBalance(unsigned char* srcData, int width, int height, int stride, int cyan, int magenta, int yellow, int channel, bool preserveLuminosity);
	int ZPHOTO_LSNBlur(unsigned char* srcData, int width, int height, int stride, int radius, int delta);
	int ZPHOTO_Mosaic(unsigned char *srcData, int width, int height, int stride, int size);
	int ZPHOTO_Diffusion(unsigned char* srcData,int width, int height,int stride,int intensity);
	int ZPHOTO_MedianFilter(unsigned char *srcData, int width, int height, int stride, int radius);
	int ZPHOTO_MaxFilter(unsigned char *srcData, int width, int height, int stride, int radius);
	int ZPHOTO_MinFilter(unsigned char *srcData, int width, int height, int stride, int radius);
	
	void ZPHOTO_RGBToYCbCr(int R, int G, int B, int*Y,int*Cb, int* Cr);
	void ZPHOTO_YCbCrToRGB(int Y, int Cb, int Cr, int*Red,int*Green, int* Blue);
	void ZPHOTO_RGBToLab(int Red, int Green, int Blue, int* L, int *A, int *B);
	void ZPHOTO_LabToRGB(int L, int A, int B, int* Red, int* Green, int* Blue);
	///ͼ���Ϲ���
	int ZPHOTO_ModeDarken(int basePixel,int mixPixel);
	int ZPHOTO_ModeMultiply(int basePixel,int mixPixel);
	int ZPHOTO_ModeColorBurn(int basePixel,int mixPixel);
	int ZPHOTO_ModeLinearBurn(int basePixel,int mixPixel);
	int ZPHOTO_ModeDarkness(int *baseRed,int *baseGreen,int *baseBlue,int mixRed,int mixGreen,int mixBlue);
	int ZPHOTO_ModeLighten(int basePixel,int mixPixel);
	int ZPHOTO_ModeScreen(int basePixel,int mixPixel);
	int ZPHOTO_ModeColorDodge(int basePixel,int mixPixel);
	int ZPHOTO_ModeColorLinearDodge(int basePixel,int mixPixel);
	int ZPHOTO_ModeLightColor(int *baseRed,int *baseGreen,int *baseBlue,int mixRed,int mixGreen,int mixBlue);
	int ZPHOTO_ModeOverlay(int basePixel,int mixPixel);
	int ZPHOTO_ModeSoftLight(int basePixel,int mixPixel);
	int ZPHOTO_ModeHardLight(int basePixel,int mixPixel);
	int ZPHOTO_ModeVividLight(int basePixel,int mixPixel);
	int ZPHOTO_ModeLinearLight(int basePixel,int mixPixel);
	int ZPHOTO_ModePinLight(int basePixel,int mixPixel);
	int ZPHOTO_ModeSolidColorMixing(int *baseRed,int *baseGreen,int *baseBlue,int mixRed,int mixGreen,int mixBlue);
	int ZPHOTO_ModeDifference(int basePixel,int mixPixel);
	int ZPHOTO_ModeExclusion(int basePixel,int mixPixel);
	int ZPHOTO_ModeSubtraction(int basePixel,int mixPixel);
	int ZPHOTO_ModeDivide(int basePixel,int mixPixel);
	int ZPHOTO_ModeDesaturate(int red,int green,int blue);
	int ZPHOTO_ModeColorInvert(int *red,int *green,int *blue);
	int ZPHOTO_ImageBlendEffect(unsigned char* baseData, int width, int height, int stride, unsigned char* mixData, int blendMode);//ͼ����

	//��չ����
	int ZPHOTO_FastestGaussFilter(unsigned char* srcData,int width, int height,int stride,float radius);
	int ZPHOTO_ColorTemperature(unsigned char* srcData,int width, int height, int stride, int intensity);
	int ZPHOTO_CalcWH( int inputImgSize[2], float angle, float scale, int transform_method, int outputImgSize[2],float H[]);
    int ZPHOTO_ImageTransformation(unsigned char *srcData, int srcImgSize[2], unsigned char *dstData, int dstImgSize[2], float H[], int Interpolation_method, int Transform_method);
	int ZPHOTO_FastMeanFilter(unsigned char* srcData, int width, int height ,int stride, int radius);
	int ZPHOTO_SobelFilter(unsigned char *srcData, int width, int height,int stride);
	int ZPHOTO_GlowingEdges(unsigned char* srcData, int width ,int height, int stride, int edgeSize, int edgeLightness, int edgeSmoothness);
	int ZPHOTO_ImageWarpWave(unsigned char *srcData, int width, int height, int stride, int intensity);
    //For Android Development
    int ZPHOTO_RGBA2BGRA(unsigned char* srcData, int width, int height, int stride);
    int ZPHOTO_BGRA2RGBA(unsigned char* srcData, int width, int height, int stride);
	int ZPHOTO_GammaCorrect(unsigned char* srcData, int width, int height, int stride, int intensity);
	int ZPHOTO_HighlightShadowPreciseAdjust(unsigned char* srcData,int width, int height, int stride, float highlight, float shadow);
	int ZPHOTO_NaturalSaturation(unsigned char* srcData,int width, int height, int stride, int saturation);
	int ZPHOTO_LUTFilter(unsigned char* srcData, int width ,int height, int stride, unsigned char*Map, int ratio);

	int ZPHOTO_SmartBlurFilter(unsigned char* srcData, int width, int height, int stride, int size, int threshold);
	int ZPHOTO_AnisotropicFilter(unsigned char* srcData, int width, int height, int stride, int iter, float k, float lambda = 0.25, int offset = 3);
#ifdef __cplusplus
}
#endif


#endif



#endif
