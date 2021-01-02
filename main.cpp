#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>>
#include<cstdio>
# define PI           3.14159265358979323846

GLfloat position = 0.0f;
GLfloat speed = 0.0f;

GLfloat position1 = 0.0f;
GLfloat speed1 = 0.0f;

GLfloat position2 = 0.0f;
GLfloat speed2 = 0.0f;
void update(int value) {

    if(position >1.0)
        position = -1.0f;

    position += speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}

void update2(int value2) {

    if(position2 >1.0)
        position2 = -1.0f;

    position2 += speed2;

	glutPostRedisplay();


	glutTimerFunc(100, update2, 0);
}
void Background()
{
    //Background
    glBegin(GL_QUADS);
    glColor3ub(153, 204, 255);
    glVertex2f(-1.0,1.0);
    glVertex2f(-1.0,-1.0);
    glVertex2f(1.0,-1.0);
    glVertex2f(1.0,1.0);
    glEnd();
}


/*void Bird()
{
    //Bird
    glBegin(GL_LINES);
    glColor3ub(0, 0 , 0);
    glVertex2f(.9f, 0.89f);
    glVertex2f(0.95f, 0.94f);

    glVertex2f(.7f, 0.87f);
    glVertex2f(0.75f, 0.92f);

    glVertex2f(.4f, 0.90f);
    glVertex2f(0.45f, 0.95f);
    glEnd();

}*/


void Cbuilding()
{
    //Circle Start
    glColor3ub(173, 173, 133);

int i;

    GLfloat x=-0.7f; GLfloat y=0.7f; GLfloat radius =.2f;
int triangleAmount = 100;
  GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);

        glVertex2f(x, y);

        for(i = 0; i <= triangleAmount;i++) {

            glVertex2f(

                    x + (radius * cos(i *  twicePi / triangleAmount)),

                y + (radius * sin(i * twicePi / triangleAmount))

            );

        }
glEnd();
   //Gollar stand Start
    glBegin(GL_QUADS);
        glColor3ub(173, 173, 133);
        glVertex2f(-0.8f,0.3f);
        glVertex2f(-0.6f,0.3f);
        glVertex2f(-0.6f,0.55f);
        glVertex2f(-0.8f,0.55f);
        glEnd();
glColor3ub(178, 178, 102);

    int lineAmount = 100;

    glBegin(GL_LINE_LOOP);

        for(i = 0; i <= lineAmount;i++) {

            glVertex2f(

                x + (radius * cos(i *  twicePi / lineAmount)),

                y + (radius* sin(i * twicePi / lineAmount))

            );

        }

    glEnd();
    //Circle end
    //-------------------------------------------------
    //AIUB Letter Box
    glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
    glVertex2f(-0.95,0.3);
    glVertex2f(-0.4,0.3);
    glVertex2f(-0.4,0.45);
    glVertex2f(-0.95,0.45);
    glEnd();
//Letter A
    glBegin(GL_LINES);
     glColor3ub(0, 255, 0);
glVertex2f(-0.9f, 0.31f);
glVertex2f(-0.85f, 0.44f);
    glEnd();

     glBegin(GL_LINES);
     glColor3ub(0, 255, 0);
glVertex2f(-0.8f, 0.31f);
glVertex2f(-0.85f, 0.44f);
    glEnd();

     glBegin(GL_LINES);
     glColor3ub(0, 255, 0);
glVertex2f(-0.88f, 0.35f);
glVertex2f(-0.82f, 0.35f);
    glEnd();
    // I
     glBegin(GL_LINES);
     glColor3ub(0, 255, 0);
glVertex2f(-0.75f, 0.31f);
glVertex2f(-0.75f, 0.44f);
    glEnd();

     glBegin(GL_LINES);
     glColor3ub(0, 255, 0);
glVertex2f(-0.77f, 0.44f);
glVertex2f(-0.73f, 0.44f);
    glEnd();

     glBegin(GL_LINES);
     glColor3ub(0, 255, 0);
glVertex2f(-0.77f, 0.31f);
glVertex2f(-0.73f, 0.31f);
    glEnd();

    //U
     glBegin(GL_LINES);
     glColor3ub(0, 255, 0);
glVertex2f(-0.7f, 0.31f);
glVertex2f(-0.7f, 0.44f);
    glEnd();

    glBegin(GL_LINES);
     glColor3ub(0, 255, 0);
glVertex2f(-0.7f, 0.31f);
glVertex2f(-0.6f, 0.31f);
    glEnd();

glBegin(GL_LINES);
     glColor3ub(0, 255, 0);
glVertex2f(-0.6f, 0.44f);
glVertex2f(-0.6f, 0.31f);
    glEnd();

    //B
    glBegin(GL_LINES);
     glColor3ub(0, 255, 0);
glVertex2f(-0.55f, 0.31f);
glVertex2f(-0.55f, 0.44f);
    glEnd();


     glBegin(GL_LINES);
     glColor3ub(0, 255, 0);
glVertex2f(-0.55f, 0.31f);
glVertex2f(-0.45f, 0.31f);
    glEnd();

     glBegin(GL_LINES);
     glColor3ub(0, 255, 0);
glVertex2f(-0.45f, 0.44f);
glVertex2f(-0.45f, 0.31f);
    glEnd();

glBegin(GL_LINES);
     glColor3ub(0, 255, 0);
glVertex2f(-0.45f, 0.44f);
glVertex2f(-0.55f, 0.44f);
    glEnd();

    glBegin(GL_LINES);
     glColor3ub(0, 255, 0);
glVertex2f(-0.55f, 0.375f);
glVertex2f(-0.45f, 0.375f);
    glEnd();

    //Flag stand
    glBegin(GL_QUADS);
        glColor3ub(153,76,0);
        glVertex2f(-0.45,0.45);
        glVertex2f(-0.43,0.45);
        glVertex2f(-0.43,0.80);
        glVertex2f(-0.45,0.80);

        glEnd();

        //Square
        glBegin(GL_QUADS);
        glColor3ub(0,204,0);
        glVertex2f(-0.43,0.7);
        glVertex2f(-0.23,0.7);
        glVertex2f(-0.23,0.8);
        glVertex2f(-0.43,0.8);
        glEnd();

        //Red Circle
         glColor3ub(255, 0, 0);



     x=-0.33f;  y=0.75f;  radius =.04f;
 triangleAmount = 100;
   twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);

        glVertex2f(x, y);

        for(i = 0; i <= triangleAmount;i++) {

            glVertex2f(

                    x + (radius * cos(i *  twicePi / triangleAmount)),

                y + (radius * sin(i * twicePi / triangleAmount))

            );

        }
glEnd();

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.8,0.87);
glVertex2f(-0.6,0.87);
glEnd();

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.85,0.83);
glVertex2f(-0.55,0.83);
glEnd();



glLineWidth(4.5);
glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.88,0.78);
glVertex2f(-0.51,0.78 );
glEnd();

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.9,0.73);
glVertex2f(-0.5,0.73);
glEnd();

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.89,0.68);
glVertex2f(-0.5,0.68);
glEnd();

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.89,0.63);
glVertex2f(-0.51,0.63);
glEnd();

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.86,0.58);
glVertex2f(-0.54,0.58);
glEnd();

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.81,0.53);
glVertex2f(-0.58,0.53);
glEnd();

}
void Sun(){

glColor3ub(252, 196, 0);

int i;

    GLfloat x=-0.10f; GLfloat y=0.90f; GLfloat radius =.07f;
int triangleAmount = 100;
  GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);

        glVertex2f(x, y);

        for(i = 0; i <= triangleAmount;i++) {

            glVertex2f(

                    x + (radius * cos(i *  twicePi / triangleAmount)),

                y + (radius * sin(i * twicePi / triangleAmount))

            );

        }
glEnd();

}
void Dbuilding()
{
    //Building
     glBegin(GL_QUADS);
        glColor3ub(224,224,224);
        glVertex2f(-0.1,0.4);
        glVertex2f(0.9,0.4);
        glVertex2f(0.9,0.8);
        glVertex2f(-0.1,0.8);
        glEnd();


        //left stand
          glBegin(GL_QUADS);
        glColor3ub(204,102,0);
        glVertex2f(0.0,0.3);
        glVertex2f(0.04,0.3);
        glVertex2f(0.04,0.4);
        glVertex2f(0.0,0.4);
        glEnd();

        //Middle Stand
        glBegin(GL_QUADS);
        glColor3ub(204,102,0);
        glVertex2f(0.4,0.3);
        glVertex2f(0.44,0.3);
        glVertex2f(0.44,0.4);
        glVertex2f(0.4,0.4);
        glEnd();

        //Right stand

        glBegin(GL_QUADS);
        glColor3ub(204,102,0);
        glVertex2f(0.8,0.3);
        glVertex2f(0.84,0.3);
        glVertex2f(0.84,0.4);
        glVertex2f(0.8,0.4);
        glEnd();

        // Left Black
        glBegin(GL_QUADS);
        glColor3ub(0,0,0);
        glVertex2f(0.40,0.3);
        glVertex2f(0.04,0.3);
        glVertex2f(0.04,0.4);
        glVertex2f(0.40,0.4);
        glEnd();

        //Right Black
        glBegin(GL_QUADS);
        glColor3ub(0,0,0);
        glVertex2f(0.80,0.3);
        glVertex2f(0.44,0.3);
        glVertex2f(0.44,0.4);
        glVertex2f(0.80,0.4);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(13,208,219);
        glVertex2f(0.60,0.01);
        glVertex2f(0.65,0.01);
        glVertex2f(0.65,0.4);
        glVertex2f(0.60,0.4);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(13,208,219);
        glVertex2f(0.20,0.01);
        glVertex2f(0.25,0.01);
        glVertex2f(0.25,0.4);
        glVertex2f(0.20,0.4);
        glEnd();

        //Line1
        glBegin(GL_QUADS);
        glColor3ub(0,0,255);
        glVertex2f(0.0,0.7);
        glVertex2f(0.8,0.7);
        glVertex2f(0.8,0.75);
         glVertex2f(0.0,0.75);
        glEnd();
        //line2
          glBegin(GL_QUADS);
        glColor3ub(0,0,255);
        glVertex2f(0.0,0.6);
        glVertex2f(0.8,0.6);
        glVertex2f(0.8,0.65);
         glVertex2f(0.0,0.65);
        glEnd();
        //Line 3
         glBegin(GL_QUADS);
        glColor3ub(0,0,255);
        glVertex2f(0.0,0.5);
        glVertex2f(0.8,0.5);
        glVertex2f(0.8,0.55);
         glVertex2f(0.0,0.55);
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
void Road()
{
    //Create Road
glBegin(GL_QUADS);
    glColor3ub(192, 192, 192);
    glVertex2f(-1.0f,-0.5f);
    glVertex2f(1.0f,-0.5f);
    glVertex2f(1.0f,0.3f);
    glVertex2f(-1.0f,0.3f);
    glEnd();

    //upper border
    glBegin(GL_QUADS);
    glColor3ub(255, 0,127);
    glVertex2f(-1.0f,0.27f);
    glVertex2f(1.0f,0.27f);
    glVertex2f(1.0f,0.3f);
    glVertex2f(-1.0f,0.3f);
    glEnd();
//lower border
glBegin(GL_QUADS);
    glColor3ub(255,0,127);
    glVertex2f(-1.0f,-0.5f);
    glVertex2f(1.0f,-0.5f);
    glVertex2f(1.0f,-0.47f);
    glVertex2f(-1.0f,-0.47f);
    glEnd();

    //Middle lane
    glLineWidth(7.5);
    glBegin(GL_LINES);
    glColor3ub(255,0,127);
    glVertex2f(-1.0f,-0.17f);
    glVertex2f(-0.8f,-0.17f);

    glEnd();

     glLineWidth(7.5);
    glBegin(GL_LINES);
    glColor3ub(255,0,127);
    glVertex2f(-0.4f,-0.17f);
    glVertex2f(-0.6f,-0.17f);

    glEnd();

    glLineWidth(7.5);
    glBegin(GL_LINES);
    glColor3ub(255,0,127);
    glVertex2f(-0.0f,-0.17f);
    glVertex2f(-0.2f,-0.17f);

    glEnd();

    glLineWidth(7.5);
    glBegin(GL_LINES);
    glColor3ub(255,0,127);
    glVertex2f(0.2f,-0.17f);
    glVertex2f(0.4f,-0.17f);

    glEnd();

    glLineWidth(7.5);
    glBegin(GL_LINES);
    glColor3ub(255,0,127);
    glVertex2f(0.8f,-0.17f);
    glVertex2f(0.6f,-0.17f);

    glEnd();
}
void Car(){
    //Car1 body
    glTranslatef(position2,0.0f, 0.0f);
   glBegin(GL_QUADS);
     glColor3ub(0,0,255);
      glVertex2f(-0.8f, 0.0f);
      glVertex2f( -0.4f, 0.0f);
      glVertex2f( -0.4f,  0.2f);
      glVertex2f(-0.8f,  0.2f);
   glEnd();
  glBegin(GL_TRIANGLES);
     glColor3ub(0,255,0);
      glVertex2f(-0.4f, 0.0f);
      glVertex2f( -0.3f, 0.1f);
      glVertex2f( -0.4f,  0.2f);

   glEnd();

   glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(-.6,.1);
    glVertex2f(-0.5,.1);
    glVertex2f(-0.5,0.17);
    glVertex2f(-.6,0.17);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(-.66,.1);
    glVertex2f(-0.75,.1);
    glVertex2f(-0.75,0.17);
    glVertex2f(-.66,0.17);
    glEnd();

   //wheel 1.1
      glColor3ub(204, 0, 0);

int i4;

    GLfloat x4=-0.75f; GLfloat y4=0.0f; GLfloat radius4 =.03f;
int triangleAmount4 = 100;
  GLfloat twicePi4 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);

        glVertex2f(x4, y4);

        for(i4 = 0; i4 <= triangleAmount4;i4++) {

            glVertex2f(

                    x4 + (radius4 * cos(i4 *  twicePi4 / triangleAmount4)),

                y4 + (radius4 * sin(i4 * twicePi4 / triangleAmount4))

            );

        }
glEnd();
//wheel 1.2
glColor3ub(204, 0, 0);

int i5;

    GLfloat x5=-0.5f; GLfloat y5=0.0f; GLfloat radius5 =.03f;
int triangleAmount5 = 100;
  GLfloat twicePi5 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);

        glVertex2f(x5, y5);

        for(i5 = 0; i5 <= triangleAmount5;i5++) {

            glVertex2f(

                    x5 + (radius5 * cos(i5 *  twicePi5 / triangleAmount5)),

                y5 + (radius5 * sin(i5 * twicePi5 / triangleAmount5))

            );

        }
glEnd();

}
void display() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
   glClear(GL_COLOR_BUFFER_BIT);
   glPushMatrix();
  Background();
  //Bird();
  Cbuilding();
  Sun();
Dbuilding();
Road();
CrossLine();
Car();
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
    speed2 = 0.0f;
    break;
case 'w':
    speed = 0.1f;
    speed2 = 0.1f;
    break;
glutPostRedisplay();
	}}


int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(640,640);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Final Project");
   glutDisplayFunc(display);


   glutTimerFunc(100, update, 0);

   glutTimerFunc(100, update2, 0);
   glutKeyboardFunc(handleKeypress);
   glutMouseFunc(handleMouse);

   glutMainLoop();
   return 0;
}
