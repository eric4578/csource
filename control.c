#include"mouse.h"

int inbarword16(int left,int top,int barcolor,int width,int n,char *s,int wordcolor){
    int right=width*16+4+left;
    int bottom=20+top;

    if(left==0){
        if(MouseX>320-8*width-2&&MouseY>top&&MouseX<320+8*width+2&&MouseY<bottom)return 1;
        else return 0;
    }

    if(MouseX>left&&MouseY>top&&MouseX<right&&MouseY<bottom)return 1;
    else return 0;
}
int pressbarword16(int left,int top,int barcolor,int width,int n,char *s,int wordcolor){
    int right=width*16+4+left;
    int bottom=20+top;

    if(left==0){
        if(mouse_press(320-8*width-2,top,320+8*width+2,bottom)==1)return 1;
        else if(mouse_press(320-8*width-2,top,320+8*width+2,bottom)==2)return 2;
        else return 0;
    }
    if(mouse_press(left,top,right,bottom)==1)return 1;
    else if(mouse_press(left,top,right,bottom)==2)return 2;
    else return 0;
}

int inbarword24(int left,int top,int barcolor,int width,int n,char *s,int wordcolor){
    int right=width*24+6+left;
    int bottom=30+top;

    if(left==0){
        if(MouseX>320-12*width-3&&MouseY>top&&MouseX<320+12*width+3&&MouseY<bottom)return 1;
        else return 0;
    }

    if(MouseX>left&&MouseY>top&&MouseX<right&&MouseY<bottom)return 1;
    else return 0;
}
int pressbarword24(int left,int top,int barcolor,int width,int n,char *s,int wordcolor){
    int right=width*24+6+left;
    int bottom=30+top;

    if(left==0){
        if(mouse_press(320-12*width-3,top,320+12*width+3,bottom)==1)return 1;
        else if(mouse_press(320-12*width-3,top,320+12*width+3,bottom)==2)return 2;
        else return 0;
    }
    if(mouse_press(left,top,right,bottom)==1)return 1;
    else if(mouse_press(left,top,right,bottom)==2)return 2;
    else return 0;
}

int inbarword32(int left,int top,int barcolor,int width,int n,char *s,int wordcolor){
    int right=width*32+8+left;
    int bottom=40+top;

    if(left==0){
        if(MouseX>320-16*width-4&&MouseY>top&&MouseX<320+16*width+4&&MouseY<bottom)return 1;
        else return 0;
    }

    if(MouseX>left&&MouseY>top&&MouseX<right&&MouseY<bottom)return 1;
    else return 0;
}
int pressbarword32(int left,int top,int barcolor,int width,int n,char *s,int wordcolor){
    int right=width*32+8+left;
    int bottom=40+top;

    if(left==0){
        if(mouse_press(320-16*width-4,top,320+16*width+4,bottom)==1)return 1;
        else if(mouse_press(320-16*width-4,top,320+16*width+4,bottom)==2)return 2;
        else return 0;
    }
    if(mouse_press(left,top,right,bottom)==1)return 1;
    else if(mouse_press(left,top,right,bottom)==2)return 2;
    else return 0;
}

int inbarword48(int left,int top,int barcolor,int width,int n,char *s,int wordcolor){
    int right=width*48+12+left;
    int bottom=60+top;

    if(left==0){
        if(MouseX>320-24*width-6&&MouseY>top&&MouseX<320+24*width+6&&MouseY<bottom)return 1;
        else return 0;
    }

    if(MouseX>left&&MouseY>top&&MouseX<right&&MouseY<bottom)return 1;
    else return 0;
}
int pressbarword48(int left,int top,int barcolor,int width,int n,char *s,int wordcolor){
    int right=width*48+12+left;
    int bottom=60+top;

    if(left==0){
        if(mouse_press(320-24*width-6,top,320+24*width+6,bottom)==1)return 1;
        else if(mouse_press(320-24*width-6,top,320+24*width+6,bottom)==2)return 2;
        else return 0;
    }
    if(mouse_press(left,top,right,bottom)==1)return 1;
    else if(mouse_press(left,top,right,bottom)==2)return 2;
    else return 0;
}

int inbarwordframe(int left,int top,int barcolor,int width,char *s,int wordcolor,int framecolor){
    int right=width*32+8+left;
    int bottom=40+top;

    if(left==0){
        if(MouseX>320-16*width-4&&MouseY>top&&MouseX<320+16*width+4&&MouseY<bottom)return 1;
        else return 0;
    }

    if(MouseX>left&&MouseY>top&&MouseX<right&&MouseY<bottom)return 1;
    else return 0;
}
int pressbarwordframe(int left,int top,int barcolor,int width,char *s,int wordcolor,int framecolorr){
    int right=width*32+8+left;
    int bottom=40+top;

    if(left==0){
        if(mouse_press(320-16*width-4,top,320+16*width+4,bottom)==1)return 1;
        else if(mouse_press(320-16*width-4,top,320+16*width+4,bottom)==2)return 2;
        else return 0;
    }
    if(mouse_press(left,top,right,bottom)==1)return 1;
    else if(mouse_press(left,top,right,bottom)==2)return 2;
    else return 0;
}


