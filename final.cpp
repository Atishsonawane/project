#include <simplecpp>
void color(int sizeofGrid, int x, int y, int z, int a, int b, int c, int d)
{
    for(int j=50; j<50+(sizeofGrid*30); j=j+30)
    {
        for(int i=50; i<50+(sizeofGrid*30); i=i+30)
        {
            Rectangle r(j,i,30,30);
            r.imprint();
        }
    }
    Rectangle r1(a, b, 30, 30), r2(c, d, 30, 30);
    repeat(100)
    {
        int clickPos = getClick();
        int cx = clickPos/65536;
        int cy = clickPos % 65536;

        if(a-15<= cx && cx<= a+15 &&
                b-15 <= cy && cy <= b+15)
        {
            XEvent event;
             if(mouseButtonPressEvent(event))
                {
                    a = event.xbutton.x;
                    b = event.xbutton.y;
                }
            while(true)
            {
                nextEvent(event);
                 if(mouseButtonReleaseEvent(event))
                {
                    a = event.xbutton.x;
                    b = event.xbutton.y;
                }

                if(mouseDragEvent(event))
                {
                    if((a-event.xmotion.x>=15)&&(b-event.xmotion.y<15||event.xmotion.y-b<15))
                    {
                        Rectangle r1(a, b, 30, 30);
                        r1.setColor(COLOR(x,y,z));
                        r1.setFill ();
                        r1.imprint();
                        a -= 30;
                    }
                    if((b-event.xmotion.y>=15)&&(a-event.xmotion.x<=15||event.xmotion.x-a<=15))
                    {
                        Rectangle r1(a, b, 30, 30);
                        r1.setColor(COLOR(x,y,z));
                        r1.setFill ();
                        r1.imprint();
                        a = a;
                        b -=30;
                    }
                    if((event.xmotion.x-a>=15)&&(b-event.xmotion.y<=15||event.xmotion.y-b<=15))
                    {
                        Rectangle r1(a, b, 30, 30);
                        r1.setColor(COLOR(x,y,z));
                        r1.setFill ();
                        r1.imprint();
                        a += 30;
                    }
                    if((a-event.xmotion.x<=15||event.xmotion.x-a<=15)&&(event.xmotion.y-b>=15))
                    {
                        Rectangle r1(a, b, 30, 30);
                        r1.setColor(COLOR(x,y,z));
                        r1.setFill ();
                        r1.imprint();
                        b += 30;
                    }
                    if(event.xmotion.x<=c+15&&event.xmotion.x>=c-15&&event.xmotion.y<=d+15&&event.xmotion.y>=d-15)
                    {
                        goto r1;
                    }
                }
                if(event.xmotion.x)
                if(event.xmotion.x<=c+15&&event.xmotion.x>=c-15&&event.xmotion.y<=d+15&&event.xmotion.y>=d-15)
                {
                    break;
                }
            }
        }
        {
            if(c-15<= cx && cx<= c+15 &&
                    d-15 <= cy && cy <= d+15)
            {
                XEvent event;
                 if(mouseButtonPressEvent(event))
                {
                    c = event.xbutton.x;
                    d = event.xbutton.y;
                }
                while(true)
                {
                    nextEvent(event);
                    if(mouseButtonReleaseEvent(event))
                    {
                        c = event.xbutton.x;
                        d = event.xbutton.y;
                    }
                    if(mouseDragEvent(event))
                    {
                        if((c-event.xmotion.x>=15)&&(d-event.xmotion.y<15||event.xmotion.y-d<15))
                        {
                            Rectangle r2(c, d, 30, 30);
                            r2.setColor(COLOR(x,y,z));
                            r2.setFill ();
                            r2.imprint();
                            c -= 30;
                        }
                        if((d-event.xmotion.y>=15)&&(c-event.xmotion.x<=15||event.xmotion.x-c<=15))
                        {
                            Rectangle r2(c, d, 30, 30);
                            r2.setColor(COLOR(x,y,z));
                            r2.setFill ();
                            r2.imprint();
                            c = c;
                            d -=30;
                        }
                        if((event.xmotion.x-c>=15)&&(d-event.xmotion.y<=15||event.xmotion.y-d<=15))
                        {
                            Rectangle r2(c, d, 30, 30);
                            r2.setColor(COLOR(x,y,z));
                            r2.setFill ();
                            r2.imprint();
                            c += 30;
                        }
                        if((c-event.xmotion.x<=15||event.xmotion.x-c<=15)&&(event.xmotion.y-d>=15))
                        {
                            Rectangle r2(c, d, 30, 30);
                            r2.setColor(COLOR(x,y,z));
                            r2.setFill ();
                            r2.imprint();
                            d += 30;
                        }
                        if(event.xmotion.x<=a+15 && event.xmotion.x>=a-15 && event.xmotion.y<=b+15 && event.xmotion.y>=b-15)
                        {
                            goto r2;
                        }

                    }
                    if(event.xmotion.x<=a+15 && event.xmotion.x>=a-15 && event.xmotion.y<=b+15 && event.xmotion.y>=b-15)
                    {
                        break;
                    }
                }
            }
        }
    }
r1:
    ;
r2:
    ;
}
main_program
{
    int n;
    cout<<"press 1 to play."<<endl;
    cin>>n;
    if(n==1)
    {
        initCanvas("Colour Connection",350,350);
        Rectangle red1(80,80,30,30);
        Rectangle red2(140,50,30,30);
        Rectangle blue1(50,80,30,30);
        Rectangle blue2(110,110,30,30);
        Rectangle green1(50,110,30,30);
        Rectangle green2(170,50,30,30);
        red1.setColor(COLOR(255,0,0));
        red1.setFill ();
        red2.setColor(COLOR(255,0,0));
        red2.setFill ();
        blue1.setColor(COLOR(0,0,255));
        blue1.setFill ();
        blue2.setColor(COLOR(0,0,255));
        blue2.setFill ();
        green1.setColor(COLOR(0,255,0));
        green1.setFill ();
        green2.setColor(COLOR(0,255,0));
        green2.setFill ();
        cout<<"Connect Red colour"<<endl;
        color(5, 255, 0, 0, 80, 80, 140, 50);
        cout<<"Connect Blue colour"<<endl;
        color(5, 0, 0, 255, 50, 80, 110, 110);
        cout<<"Connect Green colour"<<endl;
        color(5, 0, 255, 0, 50, 110, 170, 50);
        cout<<"you won!!!!!!!!!"<<endl;
    }
}
