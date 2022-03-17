#include <graphics.h>
#include "hz.h"

void drawtop(){
    setfillstyle(1,BLUE);
    bar(0,0,640,40);
    puthz(160,4,"公共交通行程管理系统",32,32,LIGHTGRAY);
    
    setcolor(RED);
    setfillstyle(1,RED);
    pieslice(560,18,315,360,13);
    pieslice(560,18,0,225,13);
    bar(557,3,563,8);
    setcolor(BLUE);
    setfillstyle(1,BLUE);
    pieslice(560,18,315,360,10);
    pieslice(560,18,0,225,10);
    setcolor(RED);
    setfillstyle(1,RED);
    bar(553,16,567,20);
    bar(559,20,561,30);
    bar(548,30,572,32);

    return;
}

void barword16(int left,int top,int barcolor,int width,int n,char *s,int wordcolor){
    int right=width*16+4+left;
    int bottom=20+top;
    float m=n/2.0;
    float middle=(left+right)/2.0;

    if(left==0){
        setfillstyle(1,barcolor);
        bar(320-8*width-2,top,320+8*width+2,bottom);
        puthz(320-16*m,top+2,s,16,16,wordcolor);
        return;
    }//位置居中

    setfillstyle(1,barcolor);
    bar(left,top,right,bottom);
    puthz(middle-16*m,top+2,s,16,16,wordcolor);
    return;
}

void barword24(int left,int top,int barcolor,int width,int n,char *s,int wordcolor){
    int right=width*24+6+left;
    int bottom=30+top;
    float m=n/2.0;
    float middle=(left+right)/2.0;

    if(left==0){
        setfillstyle(1,barcolor);
        bar(320-12*width-3,top,320+12*width+3,bottom);
        puthz(320-12*m,top+3,s,24,24,wordcolor);
        return;
    }//位置居中

    setfillstyle(1,barcolor);
    bar(left,top,right,bottom);
    puthz(middle-24*m,top+3,s,24,24,wordcolor);
    return;
}

void barword32(int left,int top,int barcolor,int width,int n,char *s,int wordcolor){
    int right=width*32+8+left;
    int bottom=40+top;
    float m=n/2.0;
    float middle=(left+right)/2.0;

    if(left==0){
        setfillstyle(1,barcolor);
        bar(320-16*width-4,top,320+16*width+4,bottom);
        puthz(320-32*m,top+4,s,32,32,wordcolor);
        return;
    }//位置居中

    setfillstyle(1,barcolor);
    bar(left,top,right,bottom);
    puthz(middle-32*m,top+4,s,32,32,wordcolor);
    return;
}

void barword48(int left,int top,int barcolor,int width,int n,char *s,int wordcolor){
    int right=width*48+6+left;
    int bottom=60+top;
    float m=n/2.0;
    float middle=(left+right)/2.0;

    if(left==0){
        setfillstyle(1,barcolor);
        bar(320-24*width-6,top,320+24*width+6,bottom);
        puthz(320-48*m,top+6,s,48,48,wordcolor);
        return;
    }//位置居中

    setfillstyle(1,barcolor);
    bar(left,top,right,bottom);
    puthz(middle-48*m,top+6,s,48,48,wordcolor);
    return;
}

void barwordframe(int left,int top,int barcolor,int width,char *s,int wordcolor,int framecolor){
    int right=width*32+8+left;
    int bottom=40+top;
    float m=width/2.0;
    int framewidth=1;

    setfillstyle(1,framecolor);
    bar(left,top,right,bottom);

    setfillstyle(1,barcolor);
    bar(left+framewidth,top+framewidth,right-framewidth,bottom-framewidth);

    puthz(left+4,top+4,s,32,32,wordcolor);
    return;
}
