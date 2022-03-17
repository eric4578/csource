#include <graphics.h>
#include "hz.h"
#include "graphpro.h"

void drawstart(){
    setbkcolor(LIGHTGRAY);
    drawtop();

    barword32(0,90,BLUE,7,7,"请选择登录方式",LIGHTGRAY);
    barword32(0,200,BLUE,5,4,"乘客登录",LIGHTGRAY);
    barword32(0,300,BLUE,5,5,"管理员登录",LIGHTGRAY);
    return;
}

void drawadlogin(){
 
     setbkcolor(LIGHTGRAY);
     drawtop();
 
     barword32(0,75,BLUE,6,5,"管理员登陆",LIGHTGRAY);
     barword32(100,170,BLUE,3,2,"账号",LIGHTGRAY);
     barword32(100,250,BLUE,3,2,"密码",LIGHTGRAY);
     barwordframe(220,170,WHITE,11,"",LIGHTGRAY,RED);
     barwordframe(220,250,WHITE,11,"",LIGHTGRAY,RED);
     barword32(0,350,BLUE,3,2,"登录",LIGHTGRAY);
    return;
 }

void drawpalogin(){
 
     setbkcolor(LIGHTGRAY);
     drawtop();
 
     barword32(0,75,BLUE,5,4,"乘客登陆",LIGHTGRAY);
     barword32(100,170,BLUE,3,2,"账号",LIGHTGRAY);
     barword32(100,250,BLUE,3,2,"密码",LIGHTGRAY);
     barwordframe(220,170,WHITE,10,"",LIGHTGRAY,RED);
     barwordframe(220,250,WHITE,10,"",LIGHTGRAY,RED);
     barword32(0,350,BLUE,3,2,"登录",LIGHTGRAY);
    return;
 }

void loginjudge1(){
    barword32(0,200,WHITE,5,4,"登陆成功",GREEN);
    return;
}

void loginjudge2(){
    barword32(0,200,WHITE,5,4,"登陆失败",RED);
    return;            
}

void drawlabel(){
    setbkcolor(LIGHTGRAY);
    drawtop();

    puthz(320-32*3.5,90,"请录入阳性患者",32,32,GREEN);
    barword32(80,150,GREEN,4,4,"身份证号",WHITE);
    barwordframe(230,150,WHITE,10,"",0,RED);
    barword24(80,220,GREEN,8,8,"是否无症状感染者",WHITE);
    return;
}
