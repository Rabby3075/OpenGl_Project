#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>>
#include<cstdio>
# define PI           3.14159265358979323846

GLfloat position = 0.0f;
GLfloat speed = 0.1f;

void update(int value) {

    if(position >1.0)
        position = -1.0f;

    position += speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}
void Background(){
      glBegin(GL_QUADS);  //background
    glColor3ub(210, 250, 249);
    glVertex2f(-1.0,1.0);
    glVertex2f(-1.0,-1.0);
    glVertex2f(1.0,-1.0);
    glVertex2f(1.0,1.0);
    glEnd();
}
void TrainField(){
    glBegin(GL_QUADS);  //field
    glColor3ub(14, 101, 24);
    glVertex2f(-1.0,-0.366);
    glVertex2f(-1.0,-1.0);
    glVertex2f(1.0,-1.0);
    glVertex2f(1.0,-0.366);
    glEnd();

}
void Cbulding(){
     glBegin(GL_QUADS);    //Dline 24
    glColor3ub(102, 97, 96);
    glVertex2f(-0.65,0.2);
    glVertex2f(-0.65,0.11);
    glVertex2f(-0.45,0.11);
    glVertex2f(-0.45,0.22);

    glEnd();

     glBegin(GL_QUADS);    //Dline 24
    glColor3ub(192,192,192);
    glVertex2f(-0.65,0.35);
    glVertex2f(-0.65,0.2);
    glVertex2f(-0.45,0.2);
    glVertex2f(-0.45,0.35);
    glEnd();

    glLineWidth(10);
    glBegin(GL_LINES);      //Road line
    glColor3ub(135,206,250);
    glVertex2f(-0.63,0.32);
    glVertex2f(-0.63,0.2);
    glVertex2f(-0.6,0.32);
    glVertex2f(-0.6,0.2);
    glVertex2f(-0.57,0.32);
    glVertex2f(-0.57,0.2);
    glVertex2f(-0.56,0.32);
    glVertex2f(-0.56,0.2);
    glVertex2f(-0.54,0.32);
    glVertex2f(-0.54,0.2);
    glVertex2f(-0.53,0.32);
    glVertex2f(-0.53,0.2);
    glVertex2f(-0.50,0.32);
    glVertex2f(-0.50,0.2);
    glVertex2f(-0.47,0.32);
    glVertex2f(-0.47,0.2);
    glEnd();


    //dimmmmmmmmmmmmmmmmmmmmm

    int i;         // Clock Inside part

    GLfloat x=-0.55f; GLfloat y=.52f; GLfloat radius =.23f;
    int triangleAmount = 100;


    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub( 192,192,192 );
        glVertex2f(x, y);
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();
   // glFlush();

     int j;         // clock outside circle

    GLfloat x1=-0.55f; GLfloat y1=.52f; GLfloat radius1 =.20f;
    int triangleAmount1 = 100;


    GLfloat twicePi1 = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub( 135,206,250 );
        glVertex2f(x1, y1);
        for(j = 0; j <= triangleAmount1;j++) {
            glVertex2f(
                    x1 + (radius1 * cos(j *  twicePi1 / triangleAmount1)),
                y1 + (radius1 * sin(j * twicePi1 / triangleAmount1))
            );
        }
    glEnd();

    glLineWidth(1.5);
    glBegin(GL_LINES);      //dimm line
    glColor3ub(192,192,192);
    glVertex2f(-0.73,0.61);
    glVertex2f(-0.73,0.39);
    glVertex2f(-0.7,0.66);
    glVertex2f(-0.7,0.38);
    glVertex2f(-0.67,0.69);
    glVertex2f(-0.67,0.35);
    glVertex2f(-0.64,0.72);
    glVertex2f(-0.64,0.32);
    glVertex2f(-0.61,0.73);
    glVertex2f(-0.61,0.3);
    glVertex2f(-0.58,0.73);
    glVertex2f(-0.58,0.3);
    glVertex2f(-0.55,0.73);
    glVertex2f(-0.55,0.3);
    glVertex2f(-0.52,0.73);
    glVertex2f(-0.52,0.3);
    glVertex2f(-0.49,0.73);
    glVertex2f(-0.49,0.3);
    glVertex2f(-0.46,0.72);
    glVertex2f(-0.46,0.31);
    glVertex2f(-0.43,0.71);
    glVertex2f(-0.43,0.33);
    glVertex2f(-0.4,0.69);
    glVertex2f(-0.4,0.35);
    glVertex2f(-0.37,0.67);
    glVertex2f(-0.37,0.37);
    glEnd();

    glLineWidth(15);
    glBegin(GL_LINES);      //Road line
    glColor3ub(192,192,192);
    glVertex2f(-0.65,0.71);
    glVertex2f(-0.45,0.71);
    glVertex2f(-0.7,0.67);
    glVertex2f(-0.4,0.67);
    glVertex2f(-0.72,0.65);
    glVertex2f(-0.39,0.65);
    glVertex2f(-0.76,0.57);
    glVertex2f(-0.33,0.57);
     glVertex2f(-0.76,0.48);
    glVertex2f(-0.33,0.48);
     glVertex2f(-0.73,0.4);
    glVertex2f(-0.38,0.4);

    glEnd();

      glLineWidth(20);
    glBegin(GL_LINES);      //wall3
    glColor3ub(178, 114, 2);
    glVertex2f(-0.85,0.11);
    glVertex2f(-0.85,0.3);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(9, 205, 9);
    glVertex2f(-0.95,0.3);
    glVertex2f(-0.75,0.3);
    glVertex2f(-0.85,0.5);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(9, 205, 9);
    glVertex2f(-0.93,0.4);
    glVertex2f(-0.76,0.4);
    glVertex2f(-0.85,0.6);
    glEnd();
}
void Road(){
 glBegin(GL_QUADS);  //road
    glColor3ub(102, 97, 96);
    glVertex2f(-1.0,0.1);
    glVertex2f(-1.0,-0.35);
    glVertex2f(1.0,-0.35);
    glVertex2f(1.0,0.1);
    glEnd();

    glLineWidth(14);
    glBegin(GL_LINES);      //Road line
    glColor3ub(251, 229, 0);
    glVertex2f(-1.0,0.09);
    glVertex2f(1.0,0.09);
    glEnd();


    glBegin(GL_LINES);      //Road line
    glColor3ub(251, 229, 0);
    glVertex2f(-1.0,-0.35);
    glVertex2f(1.0,-0.35);
    glEnd();



    glLineWidth(7);
    glBegin(GL_LINES);      //Road  midle line yellow
    glColor3ub(251, 229, 0);
    glVertex2f(-0.9,-0.13);
    glVertex2f(-0.7,-0.13);
    glVertex2f(-0.5,-0.13);
    glVertex2f(-0.3,-0.13);
    glVertex2f(-0.1,-0.13);
    glVertex2f(0.1,-0.13);
    glVertex2f(0.3,-0.13);
    glVertex2f(0.5,-0.13);
    glVertex2f(0.7,-0.13);
    glVertex2f(0.9,-0.13);
    glEnd();

}
void CrossLine(){
        glLineWidth(5);
    glBegin(GL_LINES);               //Drawing RailPath
    glColor3ub(0,0,0);
    glVertex2f(-1,-.80);
    glVertex2f(1,-.80);
    glEnd();

    glBegin(GL_LINES);              //Drawing RailPath
    glColor3ub(0,0,0);
    glVertex2f(-1,-.90);
    glVertex2f(1,-.90);
    glEnd();



    glLineWidth(3);
    glBegin(GL_LINES);               //Drawing RailPath inside
    glColor3ub(0,0,0);
    glVertex2f(-.90,-.80);
    glVertex2f(-.90,-.90);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-.70,-.80);
    glVertex2f(-.70,-.90);
    glEnd();

    glBegin(GL_LINES);               //Drawing RailPath inside
    glColor3ub(0,0,0);
    glVertex2f(-.50,-.80);
    glVertex2f(-.50,-.90);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-.30,-.80);
    glVertex2f(-.30,-.90);
    glEnd();

      glBegin(GL_LINES);               //Drawing RailPath inside
    glColor3ub(0,0,0);
    glVertex2f(-.10,-.80);
    glVertex2f(-.10,-.90);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(.10,-.80);
    glVertex2f(.10,-.90);
    glEnd();

     glBegin(GL_LINES);               //Drawing RailPath inside
    glColor3ub(0,0,0);
    glVertex2f(.30,-.80);
    glVertex2f(.30,-.90);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(.50,-.80);
    glVertex2f(.50,-.90);
    glEnd();

      glBegin(GL_LINES);               //Drawing RailPath inside
    glColor3ub(0,0,0);
    glVertex2f(.70,-.80);
    glVertex2f(.70,-.90);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(.90,-.80);
    glVertex2f(.90,-.90);
    glEnd();
}

void Train(){

glTranslatef(position,0.0f, 0.0f);

glBegin(GL_QUADS);
    glColor3ub(71, 222, 245);    //Rail Body low
    glVertex2f(.15,-.85);
    glVertex2f(.15,-.75);
    glVertex2f(.65,-.75);
    glVertex2f(.75,-.85);
    glEnd();


     glBegin(GL_QUADS);
    glColor3ub(255, 85, 33);    //Rail Body Big part
    glVertex2f(.15,-.75);
    glVertex2f(.40,-.75);
    glVertex2f(.40,-.45);
    glVertex2f(.15,-.45);
    glEnd();


     glBegin(GL_QUADS);
    glColor3ub(255, 140, 33);    //Rail Body front small part
    glVertex2f(.40,-.75);
    glVertex2f(.65,-.75);
    glVertex2f(.65,-.55);
    glVertex2f(.40,-.55);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(255, 236, 33);    //Rail Body smoke can upper part
    glVertex2f(.55,-.55);
    glVertex2f(.6,-.55);
    glVertex2f(.6,-.45);
    glVertex2f(.55,-.45);
    glEnd();

     glLineWidth(9.5);
    glBegin(GL_LINES);               //smoke upper
    glColor3ub(255, 144, 33);
    glVertex2f(.53,-.45);
    glVertex2f(.62,-.45);
    glEnd();

      glLineWidth(4.5);
    glBegin(GL_LINES);               //right side train grill body
    glColor3ub(255, 252, 250);
    glVertex2f(.58,-.55);
    glVertex2f(.58,-.75);
    glEnd();


       glBegin(GL_QUADS);
    glColor3ub(255, 252, 250);    //Rail Body inner white window
    glVertex2f(.2,-.7);
    glVertex2f(.35,-.7);
    glVertex2f(.35,-.5);
    glVertex2f(.2,-.5);
    glEnd();



     glBegin(GL_QUADS);
    glColor3ub(255, 252, 250);    //Rail Body inner white window right side
    glVertex2f(.45,-.6);
    glVertex2f(.45,-.7);
    glVertex2f(.55,-.7);
    glVertex2f(.55,-.6);
    glEnd();




    int p6;         // Circle and Wheel of First Train front wheel

    GLfloat x6=.5f; GLfloat y6=-.85f; GLfloat radius6 =.05f;
    int triangleAmount6 = 25;


    GLfloat twicePi6 = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(161, 85, 85);
        glVertex2f(x6, y6);
        for(p6 = 0; p6 <= triangleAmount6;p6++) {
            glVertex2f(
                    x6 + (radius6 * cos(p6 *  twicePi6 / triangleAmount6)),
                y6 + (radius6 * sin(p6 * twicePi6 / triangleAmount6))
            );
        }
    glEnd();



    int t7;         // Circle and Wheel of First Train back wheel

    GLfloat x7=.3f; GLfloat y7=-.85f; GLfloat radius7=.05f;
    int triangleAmount7 = 25;


    GLfloat twicePi7 = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(161, 85, 85);
        glVertex2f(x7, y7);
        for(t7 = 0; t7 <= triangleAmount7;t7++) {
            glVertex2f(
                    x7 + (radius7 * cos(t7 *  twicePi7 / triangleAmount7)),
                y7 + (radius7 * sin(t7 * twicePi7 / triangleAmount7))
            );
        }
    glEnd();


      glBegin(GL_QUADS);
    glColor3ub(61, 212, 11);    //2nd body of train boggy
    glVertex2f(0.05,-.85);
    glVertex2f(0.05,-.45);
    glVertex2f(-.4,-.45);
    glVertex2f(-.4,-.85);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(237, 245, 235);    //2nd body of train boggy window right
    glVertex2f(-0.15,-.6);
    glVertex2f(0,-.6);
    glVertex2f(0,-.5);
    glVertex2f(-.15,-.5);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(237, 245, 235);    //2nd body of train boggy window left
    glVertex2f(-0.2,-.6);
    glVertex2f(-.2,-.5);
    glVertex2f(-.35,-.5);
    glVertex2f(-.35,-.6);
    glEnd();



 int k;         // Circle and Wheel of 2nd Train front wheel

    GLfloat x4=-.1f; GLfloat y4=-.85f; GLfloat radius4 =.05f;
    int triangleAmount4 = 25;


    GLfloat twicePi4 = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(161, 85, 85);
        glVertex2f(x4, y4);
        for(k = 0; k <= triangleAmount4;k++) {
            glVertex2f(
                    x4 + (radius4 * cos(k *  twicePi4 / triangleAmount4)),
                y4 + (radius4 * sin(k * twicePi4 / triangleAmount4))
            );
        }
    glEnd();







    int l;         // Circle and Wheel of First Train back wheel

    GLfloat x3=-.3f; GLfloat y3=-.85f; GLfloat radius3 =.05f;
    int triangleAmount3 = 25;


    GLfloat twicePi3 = 2.0f * PI;
int triangleAmount1 = 25;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(161, 85, 85);
        glVertex2f(x3, y3);
        for( l= 0; l<= triangleAmount1;l++) {
            glVertex2f(
                    x3 + (radius3 * cos(l *  twicePi3 / triangleAmount3)),
                y3 + (radius3 * sin(l * twicePi3 / triangleAmount3))
            );
        }
    glEnd();

     glLineWidth(9.5);
    glBegin(GL_LINES);               //Rail 1st attached line
    glColor3ub(199, 83, 6);
    glVertex2f(.15,-.8);
    glVertex2f(.05,-.80);
    glEnd();

}
void Dbuilding(){
     glBegin(GL_QUADS);    //D
    glColor3ub(135,206,250);
    glVertex2f(0.0,0.85);
    glVertex2f(0.0,0.11);
    glVertex2f(0.84,0.11);
    glVertex2f(0.84,0.85);
    glEnd();



    glBegin(GL_QUADS);  //side building1
    glColor3ub(220,220,220);
    glVertex2f(0.84,0.8);
    glVertex2f(0.84,0.11);
    glVertex2f(0.91,0.11);
    glVertex2f(0.91,0.8);
    glEnd();


    glBegin(GL_QUADS);  //side building2
    glColor3ub(135,206,250);
    glVertex2f(-0.15,0.8);
    glVertex2f(-0.15,0.11);
    glVertex2f(0.0,0.11);
    glVertex2f(0.0,0.85);
    glEnd();

     glBegin(GL_QUADS);  //side building2
    glColor3ub(192,192,192);
    glVertex2f(-0.15,0.8);
    glVertex2f(-0.15,0.77);
    glVertex2f(0.0,0.82);
    glVertex2f(0.0,0.85);
    glEnd();

     glBegin(GL_QUADS);  //side building2
    glColor3ub(192,192,192);
    glVertex2f(-0.15,0.8);
    glVertex2f(-0.15,0.11);
    glVertex2f(-0.14,0.11);
    glVertex2f(-0.14,0.8);
    glEnd();

      glBegin(GL_QUADS);  //side building2
    glColor3ub(192,192,192);
    glVertex2f(-0.06,0.8);
    glVertex2f(-0.06,0.64);
    glVertex2f(0.0,0.67);
    glVertex2f(0.0,0.85);
    glEnd();





    glBegin(GL_QUADS);    //Dline 1
    glColor3ub(102, 97, 96);
    glVertex2f(0.05,0.12);
    glVertex2f(0.05,0.11);
    glVertex2f(0.84,0.11);
    glVertex2f(0.84,0.12);
    glEnd();

     glBegin(GL_QUADS);    //Dlne 2
    glColor3ub(175,238,238);
    glVertex2f(0.0,0.18);
    glVertex2f(0.0,0.12);
    glVertex2f(0.98,0.12);
    glVertex2f(0.98,0.18);
    glEnd();

    glBegin(GL_QUADS);    //Dline 3
    glColor3ub(192,192,192);
    glVertex2f(0.0,0.2);
    glVertex2f(0.0,0.18);
    glVertex2f(0.84,0.18);
    glVertex2f(0.84,0.2);
    glEnd();

    glBegin(GL_QUADS);    //Dline 4
    glColor3ub(192,192,192);
    glVertex2f(0.0,0.27);
    glVertex2f(0.0,0.25);
    glVertex2f(0.84,0.25);
    glVertex2f(0.84,0.27);
    glEnd();

    glBegin(GL_QUADS);    //Dline 5
    glColor3ub(192,192,192);
    glVertex2f(0.0,0.34);
    glVertex2f(0.0,0.32);
    glVertex2f(0.84,0.32);
    glVertex2f(0.84,0.34);
    glEnd();

    glBegin(GL_QUADS);    //Dline 6
    glColor3ub(192,192,192);
    glVertex2f(0.0,0.41);
    glVertex2f(0.0,0.39);
    glVertex2f(0.84,0.39);
    glVertex2f(0.84,0.41);
    glEnd();

    glBegin(GL_QUADS);    //Dline 7
    glColor3ub(192,192,192);
    glVertex2f(0.0,0.48);
    glVertex2f(0.0,0.46);
    glVertex2f(0.84,0.46);
    glVertex2f(0.84,0.48);
    glEnd();

    glBegin(GL_QUADS);    //Dline 8
    glColor3ub(192,192,192);
    glVertex2f(0.0,0.55);
    glVertex2f(0.0,0.53);
    glVertex2f(0.84,0.53);
    glVertex2f(0.84,0.55);
    glEnd();

    glBegin(GL_QUADS);    //Dline 9
    glColor3ub(192,192,192);
    glVertex2f(0.0,0.62);
    glVertex2f(0.0,0.60);
    glVertex2f(0.84,0.60);
    glVertex2f(0.84,0.62);
    glEnd();

    glBegin(GL_QUADS);    //Dline 10
    glColor3ub(192,192,192);
    glVertex2f(0.0,0.85);
    glVertex2f(0.0,0.67);
    glVertex2f(0.84,0.67);
    glVertex2f(0.84,0.85);
    glEnd();

    glBegin(GL_QUADS);    //Dline 11
    glColor3ub(102, 97, 96);
    glVertex2f(0.09,0.69);
    glVertex2f(0.09,0.72);
    glVertex2f(0.84,0.72);
    glVertex2f(0.84,0.69);
    glEnd();

    glBegin(GL_QUADS);    //Dline 12
    glColor3ub(102, 97, 96);
    glVertex2f(0.09,0.77);
    glVertex2f(0.09,0.74);
    glVertex2f(0.84,0.74);
    glVertex2f(0.84,0.77);
    glEnd();

      glBegin(GL_QUADS);    //Dline 13
    glColor3ub(102, 97, 96);
    glVertex2f(0.09,0.82);
    glVertex2f(0.09,0.79);
    glVertex2f(0.84,0.79);
    glVertex2f(0.84,0.82);

    glBegin(GL_QUADS);    //Dline 14
    glColor3ub(192,192,192);
    glVertex2f(0.0,0.85);
    glVertex2f(0.0,0.11);
    glVertex2f(0.04,0.11);
    glVertex2f(0.04,0.85);
    glEnd();

     glBegin(GL_QUADS);    //Dl5
    glColor3ub(192,192,192);
    glVertex2f(0.8,0.85);
    glVertex2f(0.8,0.11);
    glVertex2f(0.84,0.11);
    glVertex2f(0.84,0.85);
    glEnd();



    glBegin(GL_QUADS);  //side building1
    glColor3ub(220,220,220);
    glVertex2f(0.84,0.82);
    glVertex2f(0.84,0.11);
    glVertex2f(0.97,0.11);
    glVertex2f(0.97,0.82);
    glEnd();


    glBegin(GL_QUADS);    //Dline 16
    glColor3ub(102, 97, 96);
    glVertex2f(0.86,0.27);
    glVertex2f(0.86,0.22);
    glVertex2f(0.89,0.22);
    glVertex2f(0.89,0.27);
    glEnd();

    glBegin(GL_QUADS);    //Dline 17
    glColor3ub(102, 97, 96);
    glVertex2f(0.86,0.35);
    glVertex2f(0.86,0.3);
    glVertex2f(0.89,0.3);
    glVertex2f(0.89,0.35);
    glEnd();

     glBegin(GL_QUADS);    //Dline 18
    glColor3ub(102, 97, 96);
    glVertex2f(0.86,0.43);
    glVertex2f(0.86,0.38);
    glVertex2f(0.89,0.38);
    glVertex2f(0.89,0.43);
    glEnd();

     glBegin(GL_QUADS);    //Dline 19
    glColor3ub(102, 97, 96);
    glVertex2f(0.86,0.43);
    glVertex2f(0.86,0.41);
    glVertex2f(0.89,0.41);
    glVertex2f(0.89,0.43);
    glEnd();

    glBegin(GL_QUADS);    //Dline 20
    glColor3ub(102, 97, 96);
    glVertex2f(0.86,0.51);
    glVertex2f(0.86,0.46);
    glVertex2f(0.89,0.46);
    glVertex2f(0.89,0.51);
    glEnd();

    glBegin(GL_QUADS);    //Dline 21
    glColor3ub(102, 97, 96);
    glVertex2f(0.86,0.59);
    glVertex2f(0.86,0.54);
    glVertex2f(0.89,0.54);
    glVertex2f(0.89,0.59);
    glEnd();

      glBegin(GL_QUADS);    //Dline 22
    glColor3ub(102, 97, 96);
    glVertex2f(0.86,0.67);
    glVertex2f(0.86,0.62);
    glVertex2f(0.89,0.62);
    glVertex2f(0.89,0.67);
    glEnd();

    glBegin(GL_QUADS);    //Dline 23
    glColor3ub(102, 97, 96);
    glVertex2f(0.86,0.75);
    glVertex2f(0.86,0.7);
    glVertex2f(0.89,0.7);
    glVertex2f(0.89,0.75);
    glEnd();

    glBegin(GL_QUADS);    //Dline 24
    glColor3ub(154, 10, 10);
    glVertex2f(0.04,0.18);
    glVertex2f(0.04,0.11);
    glVertex2f(0.06,0.11);
    glVertex2f(0.06,0.18);
    glEnd();

    glBegin(GL_QUADS);    //Dline 24
    glColor3ub(154, 10, 10);
    glVertex2f(0.82,0.18);
    glVertex2f(0.82,0.11);
    glVertex2f(0.84,0.11);
    glVertex2f(0.84,0.18);
    glEnd();

    glBegin(GL_QUADS);    //Dline 24
    glColor3ub(154, 10, 10);
    glVertex2f(0.42,0.18);
    glVertex2f(0.42,0.11);
    glVertex2f(0.44,0.11);
    glVertex2f(0.44,0.18);
    glEnd();

    //cbuilding field

    glBegin(GL_QUADS);    //Dline 24
    glColor3ub(14, 91, 4);
    glVertex2f(-1.0,0.2);
    glVertex2f(-1.0,0.11);
    glVertex2f(-0.3,0.11);
    glVertex2f(-0.3,0.2);
    glEnd();

     glBegin(GL_TRIANGLES);
    glColor3ub(14, 91, 4);
    glVertex2f(-0.3,0.11);
    glVertex2f(-0.3,0.2);
     glVertex2f(-0.15,0.11);

    glEnd();

    //DIMmmmmmmmmmmmmmmm road

     glBegin(GL_QUADS);    //Dline 24
    glColor3ub(102, 97, 96);
    glVertex2f(-0.65,0.2);
    glVertex2f(-0.65,0.11);
    glVertex2f(-0.45,0.11);
    glVertex2f(-0.45,0.22);

    glEnd();



}
void display() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
   glClear(GL_COLOR_BUFFER_BIT);
   glPushMatrix();
   Background();
   Road();
   TrainField();
   Dbuilding();
   Cbulding();
   CrossLine();
  Train();
glPopMatrix();
   glFlush();
}

void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON)
	{	speed += 0.1f;
			}
if (button == GLUT_RIGHT_BUTTON)
	{speed -= 0.1f;   }
glutPostRedisplay();}


void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
case 'a':
    speed = 0.0f;
    break;
case 'w':
    speed = 0.1f;
    break;
glutPostRedisplay();
	}}


int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(320, 320);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Final Project");
   glutDisplayFunc(display);


   glutTimerFunc(100, update, 0);
   glutKeyboardFunc(handleKeypress);
   glutMouseFunc(handleMouse);

   glutMainLoop();
   return 0;
}

