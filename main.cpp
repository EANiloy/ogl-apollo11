#include <math.h>
#include <windows.h>
#include <GL/glut.h>

GLfloat flag_x=0;
GLfloat flag_y=0;

int cnt=0;

GLfloat land1=70;
GLfloat land2=65;

GLfloat arm_x=0.25;
GLfloat arm_y=0;

GLint str_clr1=255;
GLint str_clr2=255;
GLint str_clr3=255;
GLint str_clr4=255;
GLint str_clr5=255;

void flicker1(int);

void arm_move_l(int);
void arm_move_r(int);
void arm_move(int);


void show()
{
    glClear(GL_COLOR_BUFFER_BIT);

///Star
    {

        glColor4ub(str_clr1,str_clr1,str_clr1,str_clr1);
        glBegin(GL_TRIANGLE_FAN);
    for(int i = 0; i < 500; i++)
    {
        float theta = 2.0f * 3.1415926f * float(i) / float(500);//get the current angle

        float x = 0.75 * cosf(theta);//calculate the x component
        float y = 1* sinf(theta);//calculate the y component

        glVertex2f(15+x , y+330);//output vertex
    }
    glEnd();
          glBegin(GL_TRIANGLE_FAN);
    for(int i = 0; i < 500; i++)
    {

        float theta = 2.0f * 3.1415926f * float(i) / float(500);//get the current angle

        float x = 0.75 * cosf(theta);//calculate the x component
        float y = 1 * sinf(theta);//calculate the y component

        glVertex2f(455+x , y+330);//output vertex
    }
    glEnd();
}
///Darker Background
    {

    glColor4ub(159,164,168,255);
    glBegin(GL_TRIANGLE_FAN);
    for(int ii = 0; ii < 500; ii++)
    {
        float theta = 2.0f * 3.1415926f * float(ii) / float(500);//get the current angle

        float x = 480 * cosf(theta);//calculate the x component
        float y = 300 * sinf(theta);//calculate the y component

        glVertex2f(x + 280, y + 40);//output vertex

    }
    glEnd();
    }
///Lighter Foreground
    {
    glColor4ub(190,192,194,100);
        glBegin(GL_TRIANGLE_FAN);
    for(int ii = 0; ii < 500; ii++)
    {
        float theta = 2.0f * 3.1415926f * float(ii) / float(500);//get the current angle

        float x = 450 * cosf(theta);//calculate the x component
        float y = 450 * sinf(theta);//calculate the y component

        glVertex2f(x + 480, y-150);//output vertex
    }
    glEnd();
    }
///Stars
    {
        glColor4ub(str_clr2,str_clr2,str_clr2,str_clr2);
        glBegin(GL_TRIANGLE_FAN);
    for(int i = 0; i < 500; i++)
    {
        float theta = 2.0f * 3.1415926f * float(i) / float(500);//get the current angle

        float x = 0.75 * cosf(theta);//calculate the x component
        float y = 1 * sinf(theta);//calculate the y component

        glVertex2f(80+x, y+470);//output vertex
    }
    glEnd();
        glColor4ub(str_clr3,str_clr3,str_clr3,str_clr3);
        glBegin(GL_TRIANGLE_FAN);
    for(int i = 0; i < 500; i++)
    {
        float theta = 2.0f * 3.1415926f * float(i) / float(500);//get the current angle

        float x = 0.75 * cosf(theta);//calculate the x component
        float y = 1 * sinf(theta);//calculate the y component

        glVertex2f(250+x , y+360);//output vertex
    }
    glEnd();
        glColor4ub(str_clr4,str_clr4,str_clr4,str_clr4);
        glBegin(GL_TRIANGLE_FAN);
    for(int i = 0; i < 500; i++)
    {
        float theta = 2.0f * 3.1415926f * float(i) / float(500);//get the current angle

        float x = 0.75 * cosf(theta);//calculate the x component
        float y = 1 * sinf(theta);//calculate the y component

        glVertex2f(420+x , y+455);//output vertex
    }
    glEnd();
        glColor4ub(str_clr5,str_clr5,str_clr5,str_clr5);
        glBegin(GL_TRIANGLE_FAN);
    for(int i = 0; i < 500; i++)
    {
        float theta = 2.0f * 3.1415926f * float(i) / float(500);//get the current angle

        float x = 0.75 * cosf(theta);//calculate the x component
        float y = 1 * sinf(theta);//calculate the y component

        glVertex2f(340+x, y+470);//output vertex
    }
    glEnd();
}
///Lander
    {
    ///Feet
    {
    glBegin(GL_POLYGON);
    glVertex2d(30,153);
    glVertex2d(40,153);
    glVertex2d(40,145);
    glVertex2d(30,145);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(32.5,153);
    glVertex2d(35,153);
    glVertex2d(60,195);
    glVertex2d(60,200);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(75,150);
    glVertex2d(85,150);
    glVertex2d(85,158);
    glVertex2d(75,158);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(77.5,150);
    glVertex2d(80,150);
    glVertex2d(87,180);
    glVertex2d(85,180);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(185,155);
    glVertex2d(195,155);
    glVertex2d(195,163);
    glVertex2d(185,163);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(190,155);
    glVertex2d(192.5,155);
    glVertex2d(180,190);
    glVertex2d(177,190);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(205,150);
    glVertex2d(215,150);
    glVertex2d(215,158);
    glVertex2d(205,158);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(210,150);
    glVertex2d(212.5,150);
    glVertex2d(190,205);
    glVertex2d(190,198);
    glEnd();
    glColor3ub(210,210,210);
    glBegin(GL_LINES);
    glVertex2d(28,145);
    glVertex2d(42,145);
    glEnd();
    glBegin(GL_LINES);
    glVertex2d(73,150);
    glVertex2d(87,150);
    glEnd();
    glBegin(GL_LINES);
    glVertex2d(183,155);
    glVertex2d(197,155);
    glEnd();
    glBegin(GL_LINES);
    glVertex2d(203,150);
    glVertex2d(218,150);
    glEnd();
    }
    ///Body
    {
    glColor3ub(220,220,220);
    glBegin(GL_POLYGON);
    glVertex2d(60,240);
    glVertex2d(80,240);
    glVertex2d(80,177);
    glVertex2d(60,185);
    glEnd();
    glColor3ub(250,250,250);
    glBegin(GL_POLYGON);
    glVertex2d(80,180);
    glVertex2d(155,180);
    glVertex2d(155,240);
    glVertex2d(80,240);
    glEnd();
    glColor3ub(230,230,230);
    glBegin(GL_POLYGON);
    glVertex2d(155,177);
    glVertex2d(190,195);
    glVertex2d(190,240);
    glVertex2d(155,240);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(105,180);
    glVertex2d(120,180);
    glVertex2d(125,155);
    glVertex2d(97,155);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(105,240);
    glVertex2d(120,240);
    glVertex2d(120,225);
    glVertex2d(105,225);
    glEnd();
    glColor3ub(190,190,190);
    glBegin(GL_POLYGON);
    glVertex2d(120,240);
    glVertex2d(135,240);
    glVertex2d(135,215);
    glVertex2d(120,215);
    glEnd();
    glColor3ub(200,200,200);
    glBegin(GL_POLYGON);
    glVertex2d(135,240);
    glVertex2d(155,240);
    glVertex2d(155,220);
    glVertex2d(135,220);
    glEnd();
    glColor3ub(190,190,190);
    glBegin(GL_TRIANGLES);
    glVertex2d(60,240);
    glVertex2d(75,240);
    glVertex2d(75,250);
    glEnd();
    glColor3ub(250,250,250);
    glBegin(GL_POLYGON);
    glVertex2d(75,240);
    glVertex2d(100,240);
    glVertex2d(100,255);
    glVertex2d(75,255);
    glEnd();
    glColor3ub(230,230,230);
    glBegin(GL_POLYGON);
    glVertex2d(75,255);
    glVertex2d(100,255);
    glVertex2d(100,275);
    glVertex2d(75,275);
    glEnd();
    glColor3ub(210,210,210);
    glBegin(GL_POLYGON);
    glVertex2d(75,275);
    glVertex2d(100,275);
    glVertex2d(100,300);
    glVertex2d(75,300);
    glEnd();
    glColor3ub(240,240,240);
    glBegin(GL_TRIANGLES);
    glVertex2d(75,300);
    glVertex2d(100,300);
    glVertex2d(100,325);
    glEnd();
    glColor3ub(250,250,250);
    glBegin(GL_POLYGON);
    glVertex2d(100,325);
    glVertex2d(135,325);
    glVertex2d(135,315);
    glVertex2d(175,315);
    glVertex2d(175,305);
    glVertex2d(190,305);
    glVertex2d(190,240);
    glVertex2d(100,240);
    glEnd();
    glColor3ub(210,210,210);
    glBegin(GL_POLYGON);
    glVertex2d(105,240);
    glVertex2d(150,240);
    glVertex2d(135,265);
    glVertex2d(120,265);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(135,325);
    glVertex2d(160,325);
    glVertex2d(160,300);
    glVertex2d(135,300);
    glEnd();
    }
    }
///Flag
    {
    ///Pole
    {
    glColor3ub(187,164,159);
    glBegin(GL_POLYGON);
    glVertex2d(170,100);
    glVertex2d(175,100);
    glVertex2d(175,300);
    glVertex2d(170,300);
    glEnd();
    glColor3ub(210,210,210);
    glBegin(GL_LINES);
    glVertex2d(168,100);
    glVertex2d(177,100);
    glEnd();
    }
    ///Main Flag
    {
    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);//White Base
    glVertex2d(175,245);
    glVertex2d(175,300);
    glVertex2d(230+flag_x,300+flag_y);
    glVertex2d(230+flag_x,245+flag_y);
    glEnd();
    glColor3f(0.698,0.132,0.203);
    for(int i=0;i<=50;i+=10)//Red Stripes
    {
    glBegin(GL_POLYGON);
    glVertex2d(175,245+i);
    glVertex2d(175,250+i);
    glVertex2d(230+flag_x,250+flag_y+i);
    glVertex2d(230+flag_x,245+flag_y+i);
    glEnd();
    }
    glColor3f(0.234,0.233,0.430);
    glBegin(GL_POLYGON);//Blue base
    glVertex2d(175,300);
    glVertex2d(175,270);
    glVertex2d(195+flag_x,270+flag_y);
    glVertex2d(195+flag_x,300+flag_y);
    glEnd();
    glColor3ub(255,255,255);
    for(int j=0;j<=15;j+=4)//Third Row of Stars
    {
    glBegin(GL_TRIANGLES);
    glVertex2d(176+j+flag_x,280+flag_y);
    glVertex2d(179+j+flag_x,280+flag_y);
    glVertex2d(179+j+flag_x,276.5+flag_y);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2d(177+j+flag_x,276.5+flag_y);
    glVertex2d(177+j+flag_x,280+flag_y);
    glVertex2d(180+j+flag_x,280+flag_y);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2d(177.5+j+flag_x,280+flag_y);
    glVertex2d(179+j+flag_x,280+flag_y);
    glVertex2d(178+j+flag_x,282+flag_y);
    glEnd();
    }
    for(int j=0;j<=15;j+=4)//Second Row of Stars
    {
    glBegin(GL_TRIANGLES);
    glVertex2d(178+j+flag_x,287+flag_y);
    glVertex2d(181+j+flag_x,287+flag_y);
    glVertex2d(181+j+flag_x,283.5+flag_y);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2d(179+j+flag_x,283.5+flag_y);
    glVertex2d(179+j+flag_x,287+flag_y);
    glVertex2d(182+j+flag_x,287+flag_y);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2d(179.5+j+flag_x,287+flag_y);
    glVertex2d(181+j+flag_x,287+flag_y);
    glVertex2d(180+j+flag_x,289+flag_y);
    glEnd();
    }
    for(int j=0;j<=15;j+=4)//First Row of Stars
    {
    glBegin(GL_TRIANGLES);
    glVertex2d(176+j+flag_x,294+flag_y);
    glVertex2d(179+j+flag_x,294+flag_y);
    glVertex2d(179+j+flag_x,290.5+flag_y);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2d(177+j+flag_x,290.5+flag_y);
    glVertex2d(177+j+flag_x,294+flag_y);
    glVertex2d(180+j+flag_x,294+flag_y);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2d(177.5+j+flag_x,294+flag_y);
    glVertex2d(179+j+flag_x,294+flag_y);
    glVertex2d(178+j+flag_x,296+flag_y);
    glEnd();
    }
    }
    }
///Astronaut
    {

        ///Left Leg
        {
        glColor3ub(225,225,225);
        glBegin(GL_POLYGON);
        glVertex2d(300,land1+arm_y);
        glVertex2d(300,85+arm_y);
        glVertex2d(325,85+arm_y);
        glVertex2d(325,land1+arm_y);
        glEnd();
        glColor3ub(240,240,240);
        if(land1+arm_y<=65)
        {
        glBegin(GL_LINES);
        glVertex2d(298,70+arm_y);
        glVertex2d(327,70+arm_y);
        glEnd();
        }
        glColor3ub(255,255,255);
        glBegin(GL_POLYGON);
        glVertex2d(305,85+arm_y);
        glVertex2d(305,95+arm_y);
        glVertex2d(310,140+arm_y);
        glVertex2d(338,130+arm_y);
        glVertex2d(325,95+arm_y);
        glVertex2d(325,85+arm_y);
        glEnd();
        glColor3ub(220,220,220);
        glBegin(GL_POLYGON);
        glVertex2d(310,140+arm_y);
        glVertex2d(338,130+arm_y);
        glVertex2d(340,140+arm_y);
        glVertex2d(310,150+arm_y);
        glEnd();
        }
        ///Pelvis
        {
        glColor3ub(240,240,240);
        glBegin(GL_POLYGON);
        glVertex2d(310,150+arm_y);
        glVertex2d(325,190+arm_y);
        glVertex2d(380,190+arm_y);
        glVertex2d(390,150+arm_y);
        glVertex2d(360,140+arm_y);
        glVertex2d(355,160+arm_y);
        glVertex2d(345,160+arm_y);
        glVertex2d(340,140+arm_y);
        glEnd();
        }
        ///Right Leg
        {
        glColor3ub(225,225,225);
        glBegin(GL_POLYGON);
        glVertex2d(375,land2+arm_y);
        glVertex2d(375,80+arm_y);
        glVertex2d(395,80+arm_y);
        glVertex2d(395,land2+arm_y);
        glEnd();
        glColor3ub(255,255,255);
        if(land2+arm_y<=60)
        {
        glBegin(GL_LINES);
        glVertex2d(373,65+arm_y);
        glVertex2d(397,65+arm_y);
        glEnd();
        }
        glBegin(GL_POLYGON);
        glVertex2d(375,80+arm_y);
        glVertex2d(363,130+arm_y);
        glVertex2d(390,140+arm_y);
        glVertex2d(390,80+arm_y);
        glEnd();
        glColor3ub(220,220,220);
        glBegin(GL_POLYGON);
        glVertex2d(363,130+arm_y);
        glVertex2d(390,140+arm_y);
        glVertex2d(390,150+arm_y);
        glVertex2d(360,140+arm_y);
        glEnd();
        }
        ///Body
        {
            glColor3ub(255,255,255);
            glBegin(GL_POLYGON);
            glVertex2d(325,190+arm_y);
            glVertex2d(380,190+arm_y);
            glVertex2d(380,205+arm_y);
            glVertex2d(375,215+arm_y);
            glVertex2d(330,210+arm_y);
            glVertex2d(325,205+arm_y);
            glVertex2d(325,190+arm_y);
            glEnd();
            glBegin(GL_POLYGON);
            glVertex2d(377,250+arm_y);
            glVertex2d(390,260+arm_y);
            glVertex2d(315,260+arm_y);
            glVertex2d(328,250+arm_y);
            glVertex2d(330,240+arm_y);
            glVertex2d(375,240+arm_y);
            glEnd();
            glBegin(GL_POLYGON);
            glVertex2d(375,215+arm_y);
            glVertex2d(375,240+arm_y);
            glVertex2d(330,240+arm_y);
            glVertex2d(330,210+arm_y);
            glEnd();
            //Shoulder
            glBegin(GL_TRIANGLE_FAN);
            for(int i = 250;i<=500;i++)
            {
            float theta = 2.0f * 3.1416 *(float) i / 500;
            float x = -37 * cos(theta);
            float y = -20 * sin(theta);
            glVertex2d(352+x,260+y+arm_y);
            }
    glEnd();
        }
        ///Belt
        {
        glColor3ub(220,220,220);
        glBegin(GL_POLYGON);
        glVertex2d(325,205+arm_y);
        glVertex2d(380,205+arm_y);
        glVertex2d(375,215+arm_y);
        glVertex2d(330,215+arm_y);
        glEnd();
        for(int i=0;i<=44;i+=4)
        {
            glColor3ub(0,0,0);
            glBegin(GL_LINES);
            glVertex2d(327+i,206+arm_y);
            glVertex2d(332+i,215+arm_y);
            glEnd();
        }
            glBegin(GL_LINES);
            glVertex2d(375,206+arm_y);
            glVertex2d(377,210+arm_y);
            glEnd();
            glColor3ub(220,220,220);
            glBegin(GL_TRIANGLE_FAN);
            for(int i = 0;i<=500;i++)
            {
            float theta = 2.0f * 3.1416 *(float) i / 500;
            float x = 8* cos(theta);
            float y = 8* sin(theta);
            glVertex2d(352+x,210+y+arm_y);
            }
            glEnd();
        }
        ///Head
        {
            glColor3ub(255,255,255);
            glBegin(GL_TRIANGLE_FAN);
            for(int i = 0;i<=500;i++)
            {
            float theta = 2.0f * 3.1416 *(float) i / 500;
            float x = 18* cos(theta);
            float y = 28* sin(theta);
            glVertex2d(352+x,295+y+arm_y);
            }
            glEnd();
            glColor3ub(192,192,192);
            glBegin(GL_TRIANGLE_FAN);
            for(int i = 0;i<=500;i++)
            {
            float theta = 2.0f * 3.1416 *(float) i / 500;
            float x = 12* cos(theta);
            float y = 22* sin(theta);
            glVertex2d(352+x,295+y+arm_y);
            }
            glEnd();
            glColor3ub(240,240,240);
            glBegin(GL_TRIANGLE_FAN);
            for(int i = 0;i<=500;i++)
            {
            float theta = 2.0f * 3.1416 *(float) i / 500;
            float x = 2* cos(theta);
            float y = 6* sin(theta);
            glVertex2d(358+x,295+y+arm_y);
            }
            glEnd();

        }
        ///Left Arm
        {
            glColor3ub(252,252,252);
            glBegin(GL_POLYGON);
            glVertex2d(377,250+arm_y);
            glVertex2d(389,260+arm_y);
            glVertex2d(395,235+arm_y);
            glVertex2d(385,235+arm_y);
            glEnd();
            glBegin(GL_POLYGON);
            glVertex2d(395,235+arm_y);
            glVertex2d(396,215+arm_y);
            glVertex2d(387,210+arm_y);
            glVertex2d(385,235+arm_y);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            for(int i = 0;i<=500;i++)
            {
            float theta = 2.0f * 3.1416 *(float) i / 500;
            float x = 6* cos(theta);
            float y = 8* sin(theta);
            glVertex2d(390+x,213+y+arm_y);
            }
            glEnd();
        }
        ///Right Arm
        {
                glColor3ub(242,242,242);
                glBegin(GL_POLYGON);
                glVertex2d(315,260+arm_y);
                glVertex2d(328,250+arm_y);
                glVertex2d(315,225+arm_y);
                glVertex2d(305,235+arm_y);
                glEnd();
                glColor3ub(255,255,255);
                glBegin(GL_POLYGON);
                glVertex2d(315,225+arm_y);
                glVertex2d(305,235+arm_y);
                glVertex2d(300+arm_x,275+arm_y);
                glVertex2d(313+arm_x,275+arm_y);
                glEnd();
                glBegin(GL_TRIANGLE_FAN);
            for(int i = 0;i<=500;i++)
            {
            float theta = 2.0f * 3.1416 *(float) i / 500;
            float x = 8* cos(theta);
            float y = 18* sin(theta);
            glVertex2d(307+x+arm_x,280+y+arm_y);
            }
            glEnd();
        }
    }
    glutSwapBuffers();
glFlush();

}



int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(1280,650);
    glutInitWindowPosition(40,45);
    glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
    glutCreateWindow("Apollo 11");
    glOrtho(0.0,500.0,0.0,500.0,-1,1);
    glutDisplayFunc(show);
    glutTimerFunc(0,arm_move,0);
    glutTimerFunc(0,flicker1,0);
    glutMainLoop();
    return 0;
}

void arm_move(int)
{
    glutPostRedisplay();
    if(arm_x>=0.25)
    {
    glutTimerFunc(1000/20,arm_move_l,0);
    }
    if(arm_x<=-5)
    {
       glutTimerFunc(1000/20,arm_move_r,0);
    }
    glutTimerFunc(1000/20,arm_move,0);
}
void arm_move_r(int)
{
    glutPostRedisplay();
    arm_x+=0.25;
    arm_y+=0.3;
    flag_x-=0.025;
    flag_y-=0.05;

    if(arm_x>=12)
    {
        return;
    }
    glutTimerFunc(1000/20,arm_move_r,0);
}
void arm_move_l(int)
{
    glutPostRedisplay();
    arm_x-=0.25;
    arm_y-=0.3;
    flag_x+=0.025;
    flag_y+=0.05;
    if(arm_x<=-12)
    {
        return;
    }
    glutTimerFunc(1000/20,arm_move_l,0);
}
void flicker1(int)
{
    glutPostRedisplay();
    cnt++;
    str_clr2=0;
    str_clr4=0;
    str_clr3=255;
    if(str_clr2==0 && cnt%4==0)
    {
        str_clr2=255;
    }
    if(str_clr4==0 && cnt%5==0)
    {
        str_clr4=255;
    }
    if(str_clr3==255 && cnt%3==0)
    {
        str_clr3=0;
    }
    if(cnt>=15)
    {
        cnt=0;
    }
    glutTimerFunc(1000,flicker1,0);
}
