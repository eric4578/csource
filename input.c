#include<bios.h>
#include<graphics.h>
#include"mouse.h"
#include"hz.h"
/************************************************************************
FUNCTION:Input_Vis
DESCRIPTION:ʵ�ֿ��ӻ�����
INPUT:�������ݣ���������Ͻ�����x,y���������ƣ��������ɫ
RETURN:��
************************************************************************/
void Input_Vis(char* ip,int x,int y,int lim,int color,int wordcolor) //�������ݣ���������Ͻ�����x,y���������ƣ��������ɫ
{                                                      //ע�⣺�����뺯��Ҫ���������Ϊ25
	int i=0;
	int j=0;                                           //��¼������
	char c;                                            //��ȡ�������������
	clrmous(MouseX, MouseY);
	setcolor(wordcolor);                               
	setlinestyle(SOLID_LINE,0,NORM_WIDTH);             //��������
	setfillstyle(SOLID_FILL,color);                    //���������ɫ���������ɫһ��
	settextstyle(1,HORIZ_DIR,3);
	settextjustify(LEFT_TEXT,TOP_TEXT);                 
	line(x+6,y+4,x+6,y+36);                            //��������ʾ��꣨�ڸ�����������10�����ص㣬��һ����14�����ص������
	while(bioskey(1))
	{
		i=bioskey(0);
	}
	while(1)
	{
	    c=bioskey(0);                                  //��ȡ������������
		if(j<lim)
		{
			if(c!='\n'&&c!='\r'&&c!=' '&&c!=033)       //�������ǻ��С��س����ո���˳�
			{
				if(c!='\b')                            //���������˸�
				{
					*(ip+j)=c;                         //�������c�������������ַ���ip
					*(ip+j+1)='\0';                    //�����ַ���ip
					bar(x+6+j*18,y+4,x+6+j*18,y+36);  //�����꣨ע����ԭ��������ϼ����Ѿ���������ݣ�
					outtextxy(x+8+j*18,y+5,ip+j);
                     //�����������ʾ������ַ�������ʵ����Ҳ�j*18�����ַ���
					j++;                               //��������һ
					line(x+6+j*18,y+4,x+6+j*18,y+36);//����������ַ����ػ����
				}
				else if (c=='\b'&&j>0)                 //��������˸�
				{
					bar(x+6+j*18-18,y+4,x+6+j*18,y+36);  //�����һ�����ַ�
					bar(x+6+j*18,y+4,x+6+j*18,y+36);  //������
					j--;                               //��������һ
					line(x+6+j*18,y+4,x+6+j*18,y+36);//����һ������ַ����ػ����
					*(ip+j)='\0';                      //����ַ���ip�������һ�ַ�
					*(ip+j+1)='\0';                    //�����ַ���ip
				}
			}
			else                                       //������뻻�С��س����ո���˳�
			{
				setfillstyle(SOLID_FILL, color);       //������ǰ�������
				bar(x+6+j*18,y+4,x+6+j*18,y+36);      //������
				break;
			}
		}
		else if(j>=lim)                                //����ﵽ��������
		{
			if(c!='\n'&&c!='\r'&&c!=' '&&c!=033)       //���๦�ܲ���
			{                                          //��������С��س����ո��˳����˸������ַ����ٴ洢����ʾ
				if(c=='\b'&&j>0)
				{
					bar(x+6+j*18-18,y+4,x+6+j*18,y+36);  //�����һ�����ַ�
					bar(x+6+j*18,y+4,x+6+j*18,y+36);  //������
					j--;                               //��������һ
					line(x+6+j*18,y+4,x+6+j*18,y+36);//����һ������ַ����ػ����
					*(ip+j)='\0';
				}
			}
			else
			{
				setfillstyle(SOLID_FILL, color);
				bar(x+6+j*18,y+4,x+6+j*18,y+36); 
				break;
			}
		}
	}
}

/************************************************************************
FUNCTION:Input_Invis
DESCRIPTION:ʵ�ֲ����ӻ�����
INPUT:�������ݣ���������Ͻ�����x,y���������ƣ��������ɫ
RETURN:��
************************************************************************/
void Input_Invis(char* ip,int x,int y,int lim,int color)//������Input_Vis������ͬ��������ʾ���ַ��������Ӵ���
{
	int i=0;                                       
	int j=0;                                           //��¼������ 
	char c;                                            //��ȡ�������������
	clrmous(MouseX, MouseY);
	setfillstyle(SOLID_FILL,color);                    //���������ʽ
	setlinestyle(SOLID_LINE,0,NORM_WIDTH);             //��������
	setcolor(WHITE);                                   //���������ʽ
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,2);
	settextjustify(LEFT_TEXT,TOP_TEXT);
	line(x+10,y+6, x+10,y+20);                         //��������ʾ���
	while(bioskey(1))
	{
		i=bioskey(0);
	}
	while(1)
	{
	    c=bioskey(0);                                  //��ȡ������������
		if(j<lim)
		{
			if(c!='\n'&&c!='\r'&&c!=' '&&c!=033)      //�������ǻ��С��س����ո���˳�
			{
				if(c!='\b')                           //���������˸�
				{
					*(ip+j) =c;                        //�������c�������������ַ���ip
					*(ip+j+1) = '\0';                  //�����ַ���ip
					bar(x+8+j*18,y+3,x+12+j*18,y+24);  //������
					    (x+8+j*18,y+4,"*");       //�����������ʾ�ַ���*��
					j++;                               //��������һ
					line(x+10+j*18,y+6,x+10+j*18,y+20);//�ػ����
				}
				else if (c=='\b'&&j>0)                 //��������˸�
				{
					bar(x-10+j*18,y+3,x+7+j*18,y+24);  //�����һ�����ַ�
					bar(x+8+j*18,y+3,x+12+j*18,y+24);  //������
					j--;                               //��������һ
					line(x+10+j*18,y+6,x+10+j*18,y+20);//�ػ�
					*(ip+j)='\0';                      //����ַ���ip�������һ�ַ�
					*(ip+j+1)='\0';                    //�����ַ���ip
				}
			}
			else                                       //������뻻�С��س����ո���˳�
			{
				setfillstyle(SOLID_FILL, color);       //������ǰ�������
				bar(x+8+j*18,y+3,x+12+j*18,y+24);      //������
				break;
			}
		}
		else if(j>=lim)                               //����ﵽ��������
		{
			if(c!='\n'&&c!='\r'&&c!=' '&&c!=033)      //���๦�ܲ���
			{                                         //��������С��س����ո��˳����˸������ַ����ٴ洢����ʾ
				if (c=='\b'&&j>0)
				{
					bar(x+8+j*18,y+3,x+12+j*18,y+24);
					bar(x-10+j*18,y+3,x+7+j*18,y+24);
					j--;
					line(x+10+j*18,y+6,x+10+j*18,y+20);
					*(ip+j)='\0';
				}
			}
			else
			{
				setfillstyle(SOLID_FILL, color);
				bar(x+8+j*18,y+3,x+12+j*18,y+24); 
				break;
			}
		}
	}
}

// void Input_A(struct Administrator *A)                                      //��ȡ����Ա��Ϣ
// {
//     FILE* fp;
// 	int i;
// 	if((fp=fopen(".\\TEXT\\AD_data.txt","r"))==NULL){
// 		printf("\nError on open AD_data.txt!");
// 	}
// 	while(!feof(fp))
// 	{
// 		A->unit=fgetc(fp);
// 		fgetc(fp);
// 		fgetc(fp);
// 		fgets(A->account,9,fp);
// 		fgetc(fp);
// 		fgetc(fp);
// 		fgets(A->password,9,fp);
// 		fgetc(fp);
// 		A++;
// 	}
// 	if (fclose(fp) != 0)                                            //�ر��ļ�
// 	{
// 		printf("\n cannot close AD_data.");
// 		delay(3000);
// 		exit(1);
// 	}
// }