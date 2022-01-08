#include<bits/stdc++.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<time.h>
#include<string.h>
 using namespace std;
 char namea[30],namex[30],matrix[3][3];
int day,f,g,a,b,c,oh=0,com=0,my=0,ns;
char check(void);
void play();
int home();
int main();
void tip(char str[]);
int f_page();
int login();
int drugs();
int pressure();
int add_b();
int v_b();
int profile();
int view_profile();
int profile_change();
int weights();
int v_w();
int add_w();
int sugar();
int v_s();
int add_s();
int temperature();
int v_t();
int add_t();
int diagnose();
int MOuse();

int main(){
diagnose();
return 0;
}
int diagnose()
{
    //logo();
    setcolor(3);
    settextstyle(4,DEFAULT_FONT,2);
    outtextxy(540,80,"DIAGNOSTIC CENTER");
    settextstyle(3,DEFAULT_FONT,1);
    outtextxy(300,210,"Choose your disease or problem what are you suffering from:");
    rectangle(295,275,360,305);
    rectangle(410,275,510,305);
    rectangle(563,275,650,305);
    rectangle(703,275,796,305);
    setcolor(15);
    outtextxy(305,280,"Fever");
    outtextxy(423,280,"Diarrhea");
    outtextxy(573,280,"Diabetic");
    outtextxy(713,280,"Pressure");
    setcolor(7);
    outtextxy(855,280,"BACK");
    rectangle(845,275,915,305);
    int f,g;
    while(1)
    {
        while(!ismouseclick(WM_LBUTTONDOWN))
        {
            delay(50);
        }
        getmouseclick(WM_LBUTTONDOWN, f,g);
        /*for fever*/
        if(f>=295 && f<=360 && g>=275 && g<=305)
        {
            cleardevice();
            logo();
            setcolor(3);
            settextstyle(4,DEFAULT_FONT,2);
            outtextxy(540,80,"DIAGNOSTIC CENTER");
            settextstyle(3,DEFAULT_FONT,1);
            setcolor(WHITE);
            int i,d,d1=0;
            float a,sum=0;
            char x[5];
            setcolor(3);
            outtextxy(300,160,"You have chosen fever.");
            setcolor(WHITE);
            outtextxy(300,200,"How many days you have been suffering from fever :");
            setcolor(3);
            rectangle(760,199,800,225);
            while(1)
            {
                while(!ismouseclick(WM_LBUTTONDOWN))
                {
                    delay(50);
                }
                getmouseclick(WM_LBUTTONDOWN, f,g);
                if(f>=760 && f<=800 && g>=199 && g<=225)
                {
                    printf("Days:");
                    scanf("%d",&d);
                    setcolor(WHITE);
                    settextstyle(3,DEFAULT_FONT,1);
                    sprintf(x,"%d",d);
                    outtextxy(770,200,x);
                    setcolor(WHITE);
                    outtextxy(300,240,"How much your body temperature was in last       days :");
                    setcolor(3);
                    rectangle(300,264,1100,290);
                    setcolor(WHITE);
                    sprintf(x,"%d",d);
                    outtextxy(688,240,x);
                    setcolor(WHITE);
                    outtextxy(1150,265,"OK");
                    setcolor(3);
                    rectangle(1149,264,1182,285);
                }
                else if(f>=300 && f<=900 && g>=255 && g<=280)
                {
                    float temperature[d];
                    printf("Temperature:");
                    int c=0,m;
                    for(i=0; i<d; i++)
                    {
                        scanf("%f",&temperature[i]);
                        sum=sum+temperature[i];
                    }
                    a=sum/d;
                }
                else if(f>=1149 && f<=1182 && g>=264 && g<=285)
                {
                    if(a<=100.4&&d<=3)
                    {
                        outtextxy(300,320,"Last       days your average body temperature was : ");
                        sprintf(x,"%d",d);
                        outtextxy(348,320,x);
                        sprintf(x,"%.2f",a);
                        outtextxy(740,320,x);
                        setcolor(RED);
                        outtextxy(300,360,"Suggestion :");
                        setcolor(WHITE);
                        line(300,383,410,383);
                        outtextxy(300,400,"Don't worry,it is a low grade fever.It's no need to take medicine.\nYou can take 'PARASITAMAL',if you feel headache.");
                        outtextxy(1100,650,"HOME PAGE");
                        rectangle(1095,648,1220,672);
                        while(1)
                        {
                            while(!ismouseclick(WM_LBUTTONDOWN))
                            {
                                delay(50);
                            }
                            getmouseclick(WM_LBUTTONDOWN, f,g);
                            if(f>=1095 && f<=1220 && g>=648 && g<=672)
                            {
                                cleardevice();
                                home();

                            }
                        }
                    }
                    else if(a>100.4&&d>=3)
                    {
                        cleardevice();
                        logo();
                        setcolor(3);
                        settextstyle(4,DEFAULT_FONT,2);
                        outtextxy(540,80,"DIAGNOSTIC CENTER");
                        settextstyle(3,DEFAULT_FONT,1);
                        setcolor(3);
                        char x[7];
                        int number,i;
                        outtextxy(280,250,"Last       days your average body temperature was : ");
                        setcolor(15);
                        sprintf(x,"%d",d);
                        outtextxy(328,250,x);
                        sprintf(x,"%.2f",a);
                        outtextxy(730,250,x);
                        setcolor(RED);
                        outtextxy(280,290,"It is something wrong.");
                        setcolor(3);
                        outtextxy(280,330,"Have you any of them :");
                        line(280,352,480,352);
                        setcolor(WHITE);
                        int b=370,c1=280;
                        for(i=1; i<=7; i++)
                        {
                            rectangle(c1,b+1,c1+29,b+21);
                            b=b+30;
                        }
                        outtextxy(317,370,"Sudden high fever(104 degree F)");
                        outtextxy(317,400,"Severe headache or pain behind the eyes");
                        outtextxy(317,430,"Joint,muscle and/or bone pain");
                        outtextxy(317,460,"Gum and nose bleeds");
                        outtextxy(317,490,"Easy bruising");
                        outtextxy(317,520,"Low white blood cell(WBC)count");
                        outtextxy(317,550,"Skin rash");
                        outtextxy(281,625,"OK");
                        setcolor(3);
                        rectangle(280,624,310,645);
                        int f,g,sum[10],m=379,n=388,c=180,d1=283,e=288,f1=305;
                        char y[2];
                        i=0;
                        long  long int num,mod;
                        while(1)
                        {
                            while(!ismouseclick(WM_LBUTTONDOWN))
                            {
                                delay(50);
                            }
                            getmouseclick(WM_LBUTTONDOWN, f,g);
                            if(f>=280 && f<=280+29 && g>=371 && g<=370+21)
                            {
                                sum[i++]=1;
                                setcolor(YELLOW);
                                line(d1,m,e,n);
                                line(e,n,f1,m-4);
                            }
                            else if(f>=295 && f<=280+29 && g>=371+30*1 && g<=370+21+30*1)
                            {
                                sum[i++]=2;
                                setcolor(YELLOW);
                                line(d1,m+30*1,e,n+30*1);
                                line(e,n+30*1,f1,m+30*1-4);
                            }
                            else if(f>=295 && f<=280+29 && g>=371+30*2 && g<=370+21+30*2)
                            {
                                sum[i++]=3;
                                setcolor(YELLOW);
                                line(d1,m+30*2,e,n+30*2);
                                line(e,n+30*2,f1,m+30*2-4);
                            }
                            else if(f>=295 && f<=280+29 && g>=371+30*3 && g<=370+21+30*3)
                            {
                                sum[i++]=4;
                                setcolor(YELLOW);
                                line(d1,m+30*3,e,n+30*3);
                                line(e,n+30*3,f1,m+30*3-4);
                            }
                            else if(f>=295 && f<=280+29 && g>=371+30*4 && g<=370+21+30*4)
                            {
                                sum[i++]=5;
                                setcolor(YELLOW);
                                line(d1,m+30*4,e,n+30*4);
                                line(e,n+30*4,f1,m+30*4-4);
                            }
                            else if(f>=295 && f<=280+29 && g>=371+30*5 && g<=370+21+30*5)
                            {
                                sum[i++]=6;
                                setcolor(YELLOW);
                                line(d1,m+30*5,e,n+30*5);
                                line(e,n+30*5,f1,m+30*5-4);
                            }
                            else if(f>=295 && f<=280+29 && g>=371+30*6 && g<=370+21+30*6)
                            {
                                sum[i++]=7;
                                setcolor(YELLOW);
                                line(d1,m+30*6,e,n+30*6);
                                line(e,n+30*6,f1,m+30*6-4);
                            }
                            else if(f>=280 && f<=310 && g>=624 && g<=645)
                            {
                                int j,k=1;
                                int m1,n1;
                                setcolor(WHITE);
                                for(m1=0; m1<i; m1++)
                                {
                                    for(n1=0; n1<i; n1++)
                                        if(m1!=n1)
                                        {
                                            if(sum[m1]==sum[n1])
                                            {
                                                sum[n1]=0;
                                            }
                                        }
                                }
                                cleardevice();
                                setcolor(3);
                                settextstyle(4,DEFAULT_FONT,2);
                                outtextxy(540,80,"DIAGNOSTIC CENTER");
                                settextstyle(3,DEFAULT_FONT,1);
                                setcolor(3);
                                outtextxy(100,150,"Your symptoms are");
                                setcolor(WHITE);
                                for(j=0; j<i; j++)
                                {
                                    if(sum[j]==1)
                                        outtextxy(100,c," - Sudden high fever(104 degree F)");
                                    else if(sum[j]==2)
                                        outtextxy(100,c," - Severe headache or pain behind the eyes");
                                    else if(sum[j]==3)
                                        outtextxy(100,c," - Joint,muscle and/or bone pain");
                                    else if(sum[j]==4)
                                        outtextxy(100,c," - Gum and nose bleeds");
                                    else if(sum[j]==5)
                                        outtextxy(100,c," - Easy bruising");
                                    else if(sum[j]==6)
                                        outtextxy(100,c," - Low white blood cell(WBC)count");
                                    else if(sum[j]==7)
                                        outtextxy(100,c," - Skin rash");
                                    c=c+30;
                                }
                                setcolor(3);
                                outtextxy(100,450,"You have to test the following tests :");
                                setcolor(3);
                                outtextxy(100,487,"Please input your test report-");
                                line(100,515,340,515);
                                outtextxy(100,400+120,"- Blood Culture :");
                                setcolor(WHITE);
                                outtextxy(240,400+120," 1. Positive  2. Negative :");
                                rectangle(455,400+119,490,400+144);
                                setcolor(3);
                                outtextxy(100,400+170,"- Antibody test :");
                                setcolor(WHITE);
                                outtextxy(240,400+170,"IgG : 1. Positive  2. Negative :");
                                rectangle(492,400+169,525,400+194);
                                outtextxy(240,400+210,"IgM : 1. Positive  2. Negative :");
                                rectangle(492,400+209,525,400+234);
                                setcolor(3);
                                outtextxy(530,400+120,"- Molecular testing(polymerase chain reaction,PCR) :");
                                setcolor(WHITE);
                                outtextxy(530,400+155,"  1. Positive  2. Negative :");
                                rectangle(750,400+155,785,400+180);
                                setcolor(3);
                                outtextxy(550,600,"- Bone Marrow test :");
                                setcolor(WHITE);
                                outtextxy(730,600,"  1. Leukemia  2. Amnesia :");
                                rectangle(950,600,985,625);
                                setcolor(WHITE);
                                outtextxy(1020,600,"OK");
                                setcolor(3);
                                rectangle(1019,598,1050,625);
                                int bc,ig,im,pcr,bm;
                                while(1)
                                {
                                    while(!ismouseclick(WM_LBUTTONDOWN))
                                    {
                                        delay(50);
                                    }
                                    getmouseclick(WM_LBUTTONDOWN, m,n);
                                    if(m>=455 && m<=400+119 && n>=490 && n<=400+143)
                                    {
                                        printf("Blood culture:\n1.Positive 2.Negative\nChoose:");
                                        scanf("%d",&bc);
                                        setcolor(WHITE);
                                        sprintf(y,"%d",bc);
                                        outtextxy(459,400+120,y);
                                    }
                                    else if(m>=492 && m<=525 && n>=400+169 && n<=400+193)
                                    {
                                        printf("IgG:\n1.Positive 2.Negative\nChoose:");
                                        scanf("%d",&ig);
                                        setcolor(WHITE);
                                        sprintf(y,"%d",ig);
                                        outtextxy(496,570,y);
                                    }
                                    else if(m>=492 && m<=525 && n>=400+209 && n<=400+233)
                                    {
                                        printf("IgM:\n1.Positive 2.Negative\nChoose:");
                                        scanf("%d",&im);
                                        setcolor(WHITE);
                                        sprintf(y,"%d",im);
                                        outtextxy(496,610,y);
                                    }
                                    else if(m>=950 && m<=985 && n>=600 && n<=625)
                                    {
                                        printf("Bone Marrow:\n1.Leukemia 2.Amnesia\nChoose:");
                                        scanf("%d",&bm);
                                        setcolor(WHITE);
                                        sprintf(y,"%d",bm);
                                        outtextxy(753,556,y);
                                    }
                                    else if(m>=1019 && m<=1050 && n>=598 && n<=625)
                                    {
                                        system("cls");
                                        cleardevice();
                                        settextstyle(4,DEFAULT_FONT,2);
                                        outtextxy(540,80,"DIAGNOSTIC CENTER");
                                        settextstyle(3,DEFAULT_FONT,1);
                                        setcolor(3);
                                        outtextxy(100,150,"Result :");
                                        line(100,172,185,172);
                                        setcolor(WHITE);
                                    }

                                }
                            }
                        }
                    }
                }
            }
        }
        else if(f>=410 && f<=510 && g>=275 && g<=305)
        {
            cleardevice();
            /*For diarrhea*/
            logo();
            setcolor(3);
            settextstyle(4,DEFAULT_FONT,2);
            outtextxy(540,80,"DIAGNOSTIC CENTER");
            settextstyle(3,DEFAULT_FONT,1);
            int i,d1=0;
            float a,sum=0;
            char x[5];
            setcolor(3);
            outtextxy(300,160,"You have chosen Diarrhea.");
            rectangle(805,239,850,266);
            rectangle(640,198,680,225);
            setcolor(WHITE);
            outtextxy(300,200,"How many days you are suffering from :");
            outtextxy(300,240,"How many times you have loose and watery stool in a day :");
            int d,t,f,g;
            while(1)
            {
                while(!ismouseclick(WM_LBUTTONDOWN))
                {
                    delay(50);
                }
                getmouseclick(WM_LBUTTONDOWN, f,g);
                if(f>=640 && f<=680 && g>=198 && g<=225)
                {
                    printf("Days:");
                    scanf("%d",&d);
                    setcolor(WHITE);
                    settextstyle(3,DEFAULT_FONT,1);
                    sprintf(x,"%d",d);
                    outtextxy(648,200,x);
                }
                else if(f>=805 && f<=850 && g>=239 && g<=266)
                {
                    printf("Times:");
                    scanf("%d",&t);
                    setcolor(WHITE);
                    settextstyle(3,DEFAULT_FONT,1);
                    sprintf(x,"%d",t);
                    outtextxy(811,240,x);
                }
                else if(d<=2&&t<4)
                {
                    setcolor(3);
                    outtextxy(100,280,"Suggestions: -");
                    line(100,302,210,302);
                    setcolor(WHITE);
                    outtextxy(100,312,"In general it lasts two or three days.It is very common.Although it feels bad,it is usually not serious.");
                    outtextxy(100,336,"You have to drink enough fluids like:");
                    outtextxy(400,360,"- saline solution");
                    outtextxy(400,384,"- pulp free juice");
                    outtextxy(400,408,"- tea with honey");
                    outtextxy(400,432,"- sports drink");
                    outtextxy(100,456,"Soft,bland foods(banana,plain rice,cheese.Avoid milkproducts,caffeine,alcohol,apple and pear");
                    outtextxy(100,480,"juice, high-fiber and fatty food.");
                    outtextxy(1100,600,"HOME PAGE");
                    rectangle(1099,600,1220,624);
                    int f,g;
                    while(1)
                    {
                        while(!ismouseclick(WM_LBUTTONDOWN))
                        {
                            delay(50);
                        }
                        getmouseclick(WM_LBUTTONDOWN, f,g);
                        if(f>=1099 && f<=1220 && g>=600 && g<=624)
                        {
                            cleardevice();
                            home();
                        }

                    }
                }
                else if(d>=3&&t>3)
                {
                    settextstyle(3,DEFAULT_FONT,1);
                    setcolor(3);
                    outtextxy(160,190,"Have you any of them :");
                    line(160,212,350,212);
                    setcolor(WHITE);
                    int b=230,i,c1=160,j;
                    for(i=1; i<=11; i++)
                    {
                        rectangle(c1,b+1,c1+29,b+21);
                        b=b+30;
                    }
                    int mn=200,yp=230;
                    outtextxy(mn,yp,"Loose & watery stool");
                    outtextxy(mn,yp+30*1,"Cramping(painful involuntary contraction of a muscle,typically caused by fatigue or strain)");
                    outtextxy(mn,yp+30*2,"Abdominal pain(Abdominal pain caused by menstruation,the part of the body containing the digestive and reproductive organs");
                    outtextxy(mn,yp+30*3,"Eating high-fiber foods");
                    outtextxy(mn,yp+30*4,"Drug reaction for over dose");
                    outtextxy(mn,yp+30*5,"Bloating");
                    outtextxy(mn,yp+30*6,"Vomiting");
                    outtextxy(mn,yp+30*7,"Nausea(a feeling of sickness with an inclination to vomit)");
                    outtextxy(mn,yp+30*8,"Fever");
                    outtextxy(mn,yp+30*9,"Blood,mucus or undigested food in the stool");
                    outtextxy(mn,yp+30*10,"Weight loose");
                    setcolor(3);
                    rectangle(160,590,197,615);
                    setcolor(WHITE);
                    outtextxy(165,591,"OK");
                    int f,g,sum[10],m=231,n=251,c=180,d=164,e=169,f1=186;
                    c1=160;
                    i=0;
                    long  long int num,mod;
                    while(1)
                    {
                        while(!ismouseclick(WM_LBUTTONDOWN))
                        {
                            delay(50);
                        }
                        getmouseclick(WM_LBUTTONDOWN, f,g);
                        if(f>=c1 && f<=c1+29 && g>=m && g<=n)
                        {
                            sum[i++]=1;
                            setcolor(YELLOW);
                            line(d,m+9,e,n-5);
                            line(e,n-5,f1,m+4);
                        }
                        else if(f>=c1 && f<=c1+29 && g>=m+30 && g<=n+30)
                        {
                            sum[i++]=2;
                            setcolor(YELLOW);
                            line(d,m+9+30,e,n-5+30);
                            line(e,n-5+30,f1,m+4+30);
                        }
                        else if(f>=c1 && f<=c1+29 && g>=m+60 && g<=n+60)
                        {
                            sum[i++]=3;
                            setcolor(YELLOW);
                            line(d,m+9+60,e,n-5+60);
                            line(e,n-5+60,f1,m+4+60);
                        }
                        else if(f>=c1 && f<=c1+29 && g>=m+90 && g<=n+90)
                        {
                            sum[i++]=4;
                            setcolor(YELLOW);
                            line(d,m+9+90,e,n-5+90);
                            line(e,n-5+90,f1,m+4+90);
                        }
                        else if(f>=c1 && f<=c1+29 && g>=m+30*4 && g<=n+30*4)
                        {
                            sum[i++]=5;
                            setcolor(YELLOW);
                            line(d,m+9+30*4,e,n-5+30*4);
                            line(e,n-5+30*4,f1,m+4+30*4);
                        }
                        else if(f>=c1 && f<=c1+29 && g>=m+30*5 && g<=n+30*5)
                        {
                            sum[i++]=6;
                            setcolor(YELLOW);
                            line(d,m+9+30*5,e,n-5+30*5);
                            line(e,n-5+30*5,f1,m+4+30*5);
                        }
                        else if(f>=c1 && f<=c1+29 && g>=m+30*6 && g<=n+30*6)
                        {
                            sum[i++]=7;
                            setcolor(YELLOW);
                            line(d,m+9+30*6,e,n-5+30*6);
                            line(e,n-5+30*6,f1,m+4+30*6);
                        }
                        else if(f>=c1 && f<=c1+29 && g>=m+30*7 && g<=n+30*7)
                        {
                            sum[i++]=8;
                            setcolor(YELLOW);
                            line(d,m+9+30*7,e,n-5+30*7);
                            line(e,n-5+30*7,f1,m+4+30*7);
                        }
                        else if(f>=c1 && f<=c1+29 && g>=m+30*8 && g<=n+30*8)
                        {
                            sum[i++]=9;
                            setcolor(YELLOW);
                            line(d,m+9+30*8,e,n-5+30*8);
                            line(e,n-5+30*8,f1,m+4+30*8);
                        }
                        else if(f>=c1 && f<=c1+29 && g>=m+30*9 && g<=n+30*9)
                        {
                            sum[i++]=10;
                            setcolor(YELLOW);
                            line(d,m+9+30*9,e,n-5+30*9);
                            line(e,n-5+30*9,f1,m+4+30*9);
                        }
                        else if(f>=c1 && f<=c1+29 && g>=m+30*10 && g<=n+30*10)
                        {
                            sum[i++]=11;
                            setcolor(YELLOW);
                            line(d,m+9+30*10,e,n-5+30*10);
                            line(e,n-5+30*10,f1,m+4+30*10);
                        }
                        else if(f>=160 && f<=197 && g>=590 && g<=615)
                        {
                            cleardevice();
                            system("cls");
                            setcolor(3);
                            settextstyle(4,DEFAULT_FONT,2);
                            outtextxy(540,80,"DIAGNOSTIC CENTER");
                            settextstyle(3,DEFAULT_FONT,1);
                            int m1,n1;
                            for(m1=0; m1<i; m1++)
                                for(n1=0; n1<i; n1++)
                                    if(m1!=n1)
                                        if(sum[m1]==sum[n1])
                                            sum[n1]=0;
                            setcolor(3);
                            outtextxy(100,150,"Your symptoms are:");
                            line(100,172,260,172);
                            setcolor(WHITE);
                            for(j=0; j<i; j++)
                            {
                                if(sum[j]==1)
                                    outtextxy(100,c," - Loose & watery stool");
                                else if(sum[j]==2)
                                    outtextxy(100,c," - Cramping(painful involuntary contraction of a muscle,typically caused by fatigue or strain)");
                                else if(sum[j]==3)
                                    outtextxy(100,c," - Abdominal pain(Abdominal pain caused by menstruation,the part of the body containing the digestive and reproductive organs the belly");
                                else if(sum[j]==4)
                                    outtextxy(100,c," - Eating high-fiber foods");
                                else if(sum[j]==5)
                                    outtextxy(100,c," - Drug reaction for over dose");
                                else if(sum[j]==6)
                                    outtextxy(100,c," - Bloating");
                                else if(sum[j]==7)
                                    outtextxy(100,c," - Vomiting");
                                else if(sum[j]==8)
                                    outtextxy(100,c," - Fever");
                                else if(sum[j]==9)
                                    outtextxy(100,c," - Nausea(a feeling of sickness with an inclination to vomit)");
                                else if(sum[j]==10)
                                    outtextxy(100,c," - Blood,mucus or undigested food in the stool");
                                else if(sum[j]==11)
                                    outtextxy(100,c," - Weight loose");
                                c=c+30;
                            }
                            setcolor(3);
                            rectangle(100,c,137,c+25);
                            setcolor(WHITE);
                            outtextxy(105,c+1,"OK");
                            int test[6];
                            while(1)
                            {
                                while(!ismouseclick(WM_LBUTTONDOWN))
                                {
                                    delay(50);
                                }
                                getmouseclick(WM_LBUTTONDOWN, f,g);
                                if(f>=100 && f<=137 && g>=c && g<=c+25)
                                {
                                    cleardevice();
                                    logo();
                                    setcolor(3);
                                    settextstyle(4,DEFAULT_FONT,2);
                                    outtextxy(540,80,"DIAGNOSTIC CENTER");
                                    settextstyle(3,DEFAULT_FONT,1);
                                    int y;
                                    i=0;
                                    m=205;
                                    setcolor(RED);
                                    outtextxy(100,150,"It's something wrong.");
                                    setcolor(3);
                                    outtextxy(100,180,"You have to do the following tests : -");
                                    setcolor(WHITE);
                                    for(y=0; y<j; y++)
                                    {
                                        if(sum[y]==8||sum[y]==3||sum[y]==7)
                                        {
                                            outtextxy(100,m,"- Blood test");
                                            test[i++]=1;
                                        }
                                        else if(sum[y]==1||sum[y]==10)
                                        {
                                            outtextxy(100,m,"- Stool culture");
                                            test[i++]=2;
                                        }
                                        else if(sum[y]==4||sum[y]==5)
                                        {
                                            outtextxy(100,m,"- Fasting test");
                                            test[i++]=3;
                                        }
                                        else if(sum[y]==2||sum[y]==10||sum[y]==11)
                                        {
                                            outtextxy(100,m,"- Colonoscopy");
                                            test[i++]=4;
                                        }
                                        /*else if(sum )
                                        outtextxy("- Imaging test");*/
                                        m=m+30;
                                    }
                                }
                                setcolor(3);
                                rectangle(100,m,137,m+25);
                                setcolor(WHITE);
                                outtextxy(105,m+1,"OK");
                                while(1)
                                {
                                    while(!ismouseclick(WM_LBUTTONDOWN))
                                    {
                                        delay(50);
                                    }
                                    getmouseclick(WM_LBUTTONDOWN, f,g);
                                    if(f>=100 && f<=137 && g>=m && g<=m+25)
                                    {
                                        cleardevice();
                                        logo();
                                        setcolor(3);
                                        settextstyle(4,DEFAULT_FONT,2);
                                        outtextxy(540,80,"DIAGNOSTIC CENTER");
                                        settextstyle(3,DEFAULT_FONT,1);
                                        outtextxy(100,145,"Input your test report : -");
                                        m=170;
                                        for(j=0; j<i; j++)
                                        {
                                            if(test[j]==1)
                                            {
                                                outtextxy(100,m,"- Blood test :");
                                            }
                                            else if(test[j]==2)
                                            {
                                                outtextxy(100,m,"- Stool culture :");
                                            }
                                            else if(test[j]==3)
                                            {
                                                outtextxy(100,m,"- Fasting test :");
                                            }
                                            else if(test[j]==4)
                                            {
                                                outtextxy(100,m,"- Colonoscopy test :");
                                            }
                                            m=m+70;
                                        }
                                        line(100,167,320,167);
                                        outtextxy(1100,600,"HOME PAGE");
                                        rectangle(1099,600,1220,624);
                                        while(1)
                                        {
                                            while(!ismouseclick(WM_LBUTTONDOWN))
                                            {
                                                delay(50);
                                            }
                                            getmouseclick(WM_LBUTTONDOWN, f,g);
                                            if(f>=1099 && f<=1220 && g>=600 && g<=624)
                                            {
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        else if(f>=563&& f<=650 && g>=275 && g<=305)
        {
            cleardevice();
            /*For Diabetic*/
            float bd,ad,a1c;
            logo();
            setcolor(3);
            settextstyle(4,DEFAULT_FONT,2);
            outtextxy(540,80,"DIAGNOSTIC CENTER");
            settextstyle(3,DEFAULT_FONT,1);
            setcolor(15);
            outtextxy(100,150,"You have chosen Diabetic.");
            setcolor(3);
            outtextxy(100,182,"Have you any of them -");
            line(100,210,320,210);
            setcolor(WHITE);
            outtextxy(142,225,"Increased thirst , usually with frequent urination");
            outtextxy(142,255,"Fatigue(extreme tiredness)");
            outtextxy(142,285,"Blurred(become unclear or less distinct)vision");
            outtextxy(142,315,"Slow-healing wounds or infections");
            outtextxy(142,345,"Overweight, obese, or physically inactive");
            int b=225,i,c1=107;
            for(i=1; i<=5; i++)
            {
                rectangle(c1,b+1,c1+29,b+21);
                b=b+30;
            }
            setcolor(3);
            rectangle(100,449,140,473);
            setcolor(15);
            outtextxy(102,450,"OK");
            int f,g,sum[10],m=226,n=247,j,c=200,c2=122;
            i=0;
            int num,mod;
            while(1)
            {
                while(!ismouseclick(WM_LBUTTONDOWN))
                {
                    delay(50);
                }
                getmouseclick(WM_LBUTTONDOWN, f,g);
                if(f>=c1 && f<=c1+29 && g>=m && g<=n)
                {
                    sum[i++]=1;
                    setcolor(YELLOW);
                    line(112,m+9,116,n-5);
                    line(116,n-5,130,m+4);
                }
                else if(f>=c1 && f<=c1+29 && g>=m+30 && g<=n+30)
                {
                    sum[i++]=2;
                    line(112,m+9+30,116,n-5+30);
                    line(116,n-5+30,130,m+4+30);
                }
                else if(f>=c1 && f<=c1+29 && g>=m+60 && g<=n+60)
                {
                    sum[i++]=3;
                    line(112,m+9+60,116,n-5+60);
                    line(116,n-5+60,130,m+4+60);
                }
                else if(f>=c1 && f<=c1+29 && g>=m+90 && g<=n+90)
                {
                    sum[i++]=4;
                    line(112,m+9+90,116,n-5+90);
                    line(116,n-5+90,130,m+4+90);
                }
                else if(f>=c1 && f<=c1+29 && g>=m+120 && g<=n+120)
                {
                    sum[i++]=5;
                    line(112,m+9+120,116,n-5+120);
                    line(116,n-5+120,130,m+4+120);
                }
                else if(f>=100 && f<=140 && g>=449 && g<=473)
                {
                    cleardevice();
                    system("cls");
                    setcolor(3);
                    settextstyle(4,DEFAULT_FONT,2);
                    outtextxy(540,80,"DIAGNOSTIC CENTER");
                    settextstyle(3,DEFAULT_FONT,1);
                    outtextxy(100,170,"Your symptoms are:");
                    line(100,197,280,197);
                    int m1,n1;
                    setcolor(WHITE);
                    for(m1=0; m1<i; m1++)
                    {
                        for(n1=0; n1<i; n1++)
                            if(m1!=n1)
                            {
                                if(sum[m1]==sum[n1])
                                {
                                    sum[n1]=0;
                                }
                            }
                    }
                    for(j=0; j<i; j++)
                    {
                        if(sum[j]==1)
                            outtextxy(100,c," - Increased thirst , usually with frequent urination");
                        else if(sum[j]==2)
                            outtextxy(100,c," - Fatigue (extreme tiredness)");
                        else if(sum[j]==3)
                            outtextxy(100,c," - Blurred (become unclear or less distinct)vision");
                        else if(sum[j]==4)
                            outtextxy(100,c," - Slow-healing wounds or infections");
                        else if(sum[j]==5)
                            outtextxy(100,c," - Overweight, obese, or physically inactive");
                        c=c+30;
                    }
                    outtextxy(102,c+40,"OK");
                    setcolor(3);
                    rectangle(100,c+38,125,c+58);
                    while(1)
                    {
                        while(!ismouseclick(WM_LBUTTONDOWN))
                        {
                            delay(50);
                        }
                        getmouseclick(WM_LBUTTONDOWN, f,g);
                        if(f>=100 && f<=125 && g>=c+38 && g<=c+58)
                        {
                            cleardevice();
                            logo();
                            setcolor(3);
                            settextstyle(4,DEFAULT_FONT,2);
                            outtextxy(540,80,"DIAGNOSTIC CENTER");
                            settextstyle(3,DEFAULT_FONT,1);
                            int y,c=210;
                            outtextxy(100,150,"It's something wrong.");
                            outtextxy(100,180,"You have to do the following tests : -");
                            setcolor(WHITE);
                            outtextxy(100,210,"- Blood test (Glucose level test)");
                            outtextxy(100,240,"- Urine test");
                            outtextxy(100,270,"- A1C test");
                            setcolor(WHITE);
                            outtextxy(102,302,"OK");
                            setcolor(3);
                            rectangle(100,300,130,322);
                            while(1)
                            {
                                while(!ismouseclick(WM_LBUTTONDOWN))
                                {
                                    delay(50);
                                }
                                getmouseclick(WM_LBUTTONDOWN, f,g);
                                if(f>=100 && f<=130 && g>=300 && g<=322)
                                {
                                    cleardevice();
                                    float bd,ad,a1c;
                                    setfillstyle(XHATCH_FILL, BLUE);
                                    settextstyle(4,HORIZ_DIR,2);
                                    setcolor(BLUE);
                                    outtextxy(580,30,"Mobile Doctor");
                                    setcolor(3);
                                    settextstyle(4,DEFAULT_FONT,2);
                                    outtextxy(540,80,"DIAGNOSTIC CENTER");
                                    settextstyle(3,DEFAULT_FONT,1);
                                    setcolor(3);
                                    outtextxy(1050,105,"Date:");
                                    outtextxy(1050,135,"Time:");
                                    setcolor(15);
                                    outtextxy(1100,105,__DATE__);
                                    outtextxy(1100,135,__TIME__);
                                    setcolor(15);
                                    outtextxy(100,145,"Input your test report : -");
                                    line(100,169,310,169);
                                    setcolor(2);
                                    outtextxy(100,180+10,"Input blood glucose level :-");
                                    setcolor(3);
                                    outtextxy(100,205+20,"- Fasting blood glucose(the level of glucose in the blood after fasting for at least 8 hours)");
                                    outtextxy(100,255+20,"- 2 hours glucose tolerance test(after FBG drinks 75mg glucose and takes again blood glucose level)");
                                    outtextxy(100,305+20,"- Hemoglobin A1c");
                                    rectangle(109,389,140,415);
                                    setcolor(YELLOW);
                                    rectangle(255,251,340,276);
                                    rectangle(255,301,340,326);
                                    rectangle(230,351,315,376);
                                    setcolor(15);
                                    outtextxy(110,230+20,"- FBG(mmol/L) :");
                                    outtextxy(110,280+20,"- GTT(mmol/L) :");
                                    outtextxy(110,330+20,"- A1c(in %) :");
                                    outtextxy(110,390,"OK");
                                    int f,g;
                                    char y[2];
                                    while(1)
                                    {
                                        while(!ismouseclick(WM_LBUTTONDOWN))
                                        {
                                            delay(50);
                                        }
                                        getmouseclick(WM_LBUTTONDOWN, f,g);
                                        if(f>=255 && f<=340 && g>=251 && g<=275)
                                        {
                                            printf("FBG(mmol/L):");
                                            scanf("%f",&bd);
                                            settextstyle(3,DEFAULT_FONT,1);
                                            setcolor(WHITE);
                                            sprintf(y,"%.2f",bd);
                                            outtextxy(260,252,y);
                                        }
                                        else  if(f>=255 && f<=340 && g>=301 && g<=325)
                                        {
                                            printf("GTT(mmol/L):");
                                            scanf("%f",&ad);
                                            settextstyle(3,DEFAULT_FONT,1);
                                            setcolor(WHITE);
                                            sprintf(y,"%.2f",ad);
                                            outtextxy(260,302,y);
                                        }
                                        else  if(f>=235 && f<=315 && g>=351 && g<=376)
                                        {
                                            printf("A1c(in percentage):");
                                            scanf("%f",&a1c);
                                            settextstyle(3,DEFAULT_FONT,1);
                                            setcolor(WHITE);
                                            sprintf(y,"%.1f",a1c);
                                            outtextxy(235,352,y);
                                        }
                                        else  if(f>=109 && f<=140 && g>=389 && g<=414)
                                        {

                                            if((3.9<=bd&&bd<=5.5&&7.8>ad)||a1c<5.7)
                                            {
                                                setcolor(2);
                                                outtextxy(100,465,"Don't worry . It is normal .");
                                            }
                                            else if((5.6<=bd&&bd<=6.9&&7.8<=ad&&ad<=11.1)||(a1c>=5.7&&a1c<=6.4))
                                            {
                                                setcolor(15);
                                                outtextxy(100,465,"Prediabeties stage . It is type 2 diabetes .");
                                            }
                                            else if((7.0<=bd&&11.1<ad)||a1c>6.4)
                                            {
                                                setcolor(RED);
                                                outtextxy(100,465,"You are suffering from Diabetes .");
                                            }
                                            setcolor(2);
                                            outtextxy(100,435,"Result :");
                                            rectangle(1219,659,1340,684);
                                            setcolor(15);
                                            outtextxy(1220,660,"HOME PAGE");
                                            while(1)
                                            {
                                                while(!ismouseclick(WM_LBUTTONDOWN))
                                                {
                                                    delay(50);
                                                }
                                                getmouseclick(WM_LBUTTONDOWN, f,g);
                                                if(f>=1219 && f<=1340 && g>=659 && g<=684)
                                                    home();
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        else if(f>=703&& f<=796 && g>=275 && g<=305)
        {
            /*Blood pressure */
            cleardevice();
            logo();
            setcolor(3);
            settextstyle(4,DEFAULT_FONT,2);
            outtextxy(540,80,"DIAGNOSTIC CENTER");
            settextstyle(3,DEFAULT_FONT,1);
            setcolor(15);
            outtextxy(100,150,"You have chosen blood pressure .");
            setcolor(3);
            outtextxy(100,182,"Have you any of them -");
            line(100,210,320,210);
            setcolor(WHITE);
            outtextxy(137,225,"Nervousness");
            outtextxy(137,257,"Sweating");
            outtextxy(137,289,"Difficulty to sleep");
            outtextxy(137,323,"Blood spots in the eye");
            outtextxy(137,356,"Facial flushing");
            outtextxy(137,389,"Severe headaches and anxiety");
            outtextxy(137,422,"Shortness of breath");
            outtextxy(137,455,"Nosebleeds");
            setcolor(3);
            outtextxy(100,499,"Choose your symptoms : ");
            rectangle(325,499,430,529);
            rectangle(100,548,137,573);
            setcolor(15);
            outtextxy(102,549,"OK");
            int f,g,sum[10],i=0,m,n,c=180;
            int num,mod;
            while(1)
            {
                while(!ismouseclick(WM_LBUTTONDOWN))
                {
                    delay(50);
                }
                getmouseclick(WM_LBUTTONDOWN, f,g);
                if(f>=325 && f<=430 && g>=499 && g<=529)
                {
                    printf("Choose:");
                    scanf("%d",&num);
                    char y[2];
                    setcolor(WHITE);
                    sprintf(y,"%d",num);
                    outtextxy(330,500,y);
                }
                else if(f>=100 && f<=137 && g>=548 && g<=572)
                {
                    cleardevice();
                    system("cls");
                    setfillstyle(XHATCH_FILL, BLUE);
                    settextstyle(4,HORIZ_DIR,2);
                    setcolor(BLUE);
                    outtextxy(580,30,"Mobile Doctor");
                    setcolor(3);
                    settextstyle(4,DEFAULT_FONT,2);
                    outtextxy(540,80,"DIAGNOSTIC CENTER");
                    settextstyle(3,DEFAULT_FONT,1);
                    setcolor(3);
                    outtextxy(1050,105,"Date:");
                    outtextxy(1050,135,"Time:");
                    setcolor(WHITE);
                    outtextxy(1100,105,__DATE__);
                    outtextxy(1100,135,__TIME__);
                    setcolor(3);
                    outtextxy(100,170,"Your symptoms are:");
                    line(100,197,280,197);
                    while(num!=0)
                    {
                        mod=num%10;
                        num=num/10;
                        sum[i]=mod;
                        i++;
                    }
                    int j;
                    setcolor(WHITE);
                    for(j=i; j>=0; j--)
                    {
                        if(sum[j]==1)
                            outtextxy(100,c," - Nervousness");
                        else if(sum[j]==2)
                            outtextxy(100,c," - Sweating");
                        else if(sum[j]==3)
                            outtextxy(100,c," - Difficulty to sleep");
                        else if(sum[j]==4)
                            outtextxy(100,c," - Blood spots in the eye");
                        else if(sum[j]==5)
                            outtextxy(100,c," - Facial flushing");
                        else if(sum[j]==6)
                            outtextxy(100,c," - Severe headaches and anxiety");
                        else if(sum[j]==7)
                            outtextxy(100,c," - Shortness of breath");
                        else if(sum[j]==8)
                            outtextxy(100,c," - Nosebleeds");
                        c=c+30;
                    }
                    outtextxy(102,c+40,"OK");
                    setcolor(3);
                    rectangle(100,c+38,125,c+58);
                    while(1)
                    {
                        while(!ismouseclick(WM_LBUTTONDOWN))
                        {
                            delay(50);
                        }
                        getmouseclick(WM_LBUTTONDOWN, f,g);
                        if(f>=100 && f<=125 && g>=c+38 && g<=c+58)
                        {
                            cleardevice();
                            logo();
                            setcolor(3);
                            settextstyle(4,DEFAULT_FONT,2);
                            outtextxy(540,80,"DIAGNOSTIC CENTER");
                            settextstyle(3,DEFAULT_FONT,1);
                            int c=210;
                            outtextxy(100,150,"It's something wrong.");
                            setcolor(2);
                            outtextxy(100,180,"You have to measure your blood pressure.");
                            setcolor(WHITE);
                            outtextxy(102,240,"OK");
                            setcolor(3);
                            rectangle(100,239,130,260);
                            while(1)
                            {
                                while(!ismouseclick(WM_LBUTTONDOWN))
                                {
                                    delay(50);
                                }
                                getmouseclick(WM_LBUTTONDOWN, f,g);
                                if(f>=100 && f<=130 && g>=239 && g<=260)
                                {
                                    cleardevice();
                                    int p1,p2;;
                                    logo();
                                    setcolor(3);
                                    settextstyle(4,DEFAULT_FONT,2);
                                    outtextxy(540,80,"DIAGNOSTIC CENTER");
                                    settextstyle(3,DEFAULT_FONT,1);
                                    setcolor(15);
                                    outtextxy(100,145,"Input your test report : -");
                                    line(100,169,310,169);
                                    setcolor(2);
                                    outtextxy(100,180+10,"Input your blood pressure,that you have measured : -");
                                    setcolor(YELLOW);
                                    rectangle(430,251,535,276);
                                    rectangle(430,301,535,326);
                                    setcolor(3);
                                    outtextxy(110,230+20,"- Systolic Pressure(upper#mm Hg) :");
                                    outtextxy(110,280+20,"- Diastolic Pressure(lower#mm Hg) :");
                                    rectangle(109,389,140,414);
                                    setcolor(15);
                                    outtextxy(110,390,"OK");
                                    int f,g;
                                    char y[7];
                                    while(1)
                                    {
                                        while(!ismouseclick(WM_LBUTTONDOWN))
                                        {
                                            delay(50);
                                        }
                                        getmouseclick(WM_LBUTTONDOWN, f,g);
                                        if(f>=430 && f<=535 && g>=251 && g<=276)
                                        {
                                            printf("Systolic Pressure(upper#mm Hg):");
                                            scanf("%d",&p1);
                                            settextstyle(3,DEFAULT_FONT,1);
                                            setcolor(WHITE);
                                            sprintf(y,"%d",p1);
                                            outtextxy(435,252,y);
                                        }
                                        else  if(f>=430 && f<=535 && g>=301 && g<=326)
                                        {
                                            printf("Diastolic Pressure(lower#mm Hg):");
                                            scanf("%d",&p2);
                                            settextstyle(3,DEFAULT_FONT,1);
                                            setcolor(WHITE);
                                            sprintf(y,"%d",p2);
                                            outtextxy(435,302,y);
                                        }
                                        else  if(f>=109 && f<=140 && g>=389 && g<=414)
                                        {

                                            if(p1<=120&&p2<=80)
                                            {
                                                setcolor(2);
                                                outtextxy(100,465,"Don't worry,its normal.Be careful and lead a healthy life .");
                                            }
                                            else if((p1>120&&p1<140)&&(p2>80&&p2<89))
                                            {
                                                setcolor(15);
                                                outtextxy(100,465,"It is not high.Almost normal(prehypertension).But you");
                                                outtextxy(100,465,"are in risk.Now you are on high pressure boundary.Take");
                                                outtextxy(100,465,"a balance diet,physical exercise and reduce your current weight");
                                            }
                                            else if((p1>=140&&p1<=159)&&(p2>=90&&p2<=99))
                                            {
                                                setcolor(RED);
                                                outtextxy(100,465,"It is hypertension(high blood pressure)-Stage 1.");
                                            }
                                            else if((p1>=160&&p1<=180)&&(p2>=99&&p2<=110))
                                            {
                                                setcolor(RED);
                                                outtextxy(100,465,"It is hypertension(high blood pressure)-Stage 2.");
                                            }
                                            else if(p1>=180&&p2>=110)
                                            {
                                                setcolor(RED);
                                                outtextxy(100,465,"It is hypertensive(Emergency care need).You should go your nearest hospital");
                                            }
                                            setcolor(2);
                                            outtextxy(100,435,"Result :");
                                            rectangle(1219,659,1340,684);
                                            setcolor(15);
                                            outtextxy(1220,660,"HOME PAGE");
                                            while(1)
                                            {
                                                while(!ismouseclick(WM_LBUTTONDOWN))
                                                {
                                                    delay(50);
                                                }
                                                getmouseclick(WM_LBUTTONDOWN, f,g);
                                                if(f>=1219 && f<=1340 && g>=659 && g<=684)
                                                {
                                                    cleardevice();
                                                    home();
                                                }
                                            }
                                        }
                                    }


                                }
                            }
                        }
                    }
                }
            }
            closegraph();
            getch();
        }
        else if(f>=845&& f<=915 && g>=275 && g<=305)
        {
            cleardevice();
            home();
        }
    }

    closegraph();
    getch();
}
void logo()
{
    setcolor(WHITE);
    setfillstyle(XHATCH_FILL, 1);
    bar3d(100, 30, 160, 90, 26, 1);
    settextstyle(10,HORIZ_DIR,4);
    setcolor(WHITE);
    outtextxy(109,31,"M");
    outtextxy(129,51,"D");
    setfillstyle(SOLID_FILL, 14);
    rectangle(170, 44, 175, 66);
    floodfill(174, 65, WHITE);
    rectangle(163,53, 181, 58);
    floodfill(170, 45, WHITE);
    floodfill(169, 57, WHITE);
    floodfill(180, 57, WHITE);
    setfillstyle(SOLID_FILL, 1);
    floodfill(140,25,15);
    floodfill(162,32,15);
    setcolor(3);
    settextstyle(4,HORIZ_DIR,2);
    outtextxy(600,20,"Mobile Doctor");
    settextstyle(3,HORIZ_DIR,1);
    setcolor(WHITE);
    outtextxy(1050,105,"Date:");
    outtextxy(1050,135,"Time:");
    setcolor(3);
    outtextxy(1100,105,__DATE__);
    outtextxy(1100,135,__TIME__);
}

