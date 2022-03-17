#include <graphics.h>
#include "hz.h"
#include "graphpro.h"

void drawstart(){
    setbkcolor(LIGHTGRAY);
    drawtop();

    barword32(0,90,BLUE,7,7,"��ѡ���¼��ʽ",LIGHTGRAY);
    barword32(0,200,BLUE,5,4,"�˿͵�¼",LIGHTGRAY);
    barword32(0,300,BLUE,5,5,"����Ա��¼",LIGHTGRAY);
    return;
}

void drawadlogin(){
 
     setbkcolor(LIGHTGRAY);
     drawtop();
 
     barword32(0,75,BLUE,6,5,"����Ա��½",LIGHTGRAY);
     barword32(100,170,BLUE,3,2,"�˺�",LIGHTGRAY);
     barword32(100,250,BLUE,3,2,"����",LIGHTGRAY);
     barwordframe(220,170,WHITE,11,"",LIGHTGRAY,RED);
     barwordframe(220,250,WHITE,11,"",LIGHTGRAY,RED);
     barword32(0,350,BLUE,3,2,"��¼",LIGHTGRAY);
    return;
 }

void drawpalogin(){
 
     setbkcolor(LIGHTGRAY);
     drawtop();
 
     barword32(0,75,BLUE,5,4,"�˿͵�½",LIGHTGRAY);
     barword32(100,170,BLUE,3,2,"�˺�",LIGHTGRAY);
     barword32(100,250,BLUE,3,2,"����",LIGHTGRAY);
     barwordframe(220,170,WHITE,10,"",LIGHTGRAY,RED);
     barwordframe(220,250,WHITE,10,"",LIGHTGRAY,RED);
     barword32(0,350,BLUE,3,2,"��¼",LIGHTGRAY);
    return;
 }

void loginjudge1(){
    barword32(0,200,WHITE,5,4,"��½�ɹ�",GREEN);
    return;
}

void loginjudge2(){
    barword32(0,200,WHITE,5,4,"��½ʧ��",RED);
    return;            
}

void drawlabel(){
    setbkcolor(LIGHTGRAY);
    drawtop();

    puthz(320-32*3.5,90,"��¼�����Ի���",32,32,GREEN);
    barword32(80,150,GREEN,4,4,"���֤��",WHITE);
    barwordframe(230,150,WHITE,10,"",0,RED);
    barword24(80,220,GREEN,8,8,"�Ƿ���֢״��Ⱦ��",WHITE);
    return;
}
