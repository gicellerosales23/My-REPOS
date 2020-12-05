#include <GL/glut.h> 
void display(); 
void reshape(int, int); 
 
int main(int argc,char**argv) 
{  
glutInit(&argc,argv);  
glutInitDisplayMode(GLUT_RGB);   
glutInitWindowPosition(300,200);   
glutInitWindowSize(500,500);     
glutCreateWindow("Hello Window");  
glutDisplayFunc(display); 
glutReshapeFunc(reshape); 
 
 glutMainLoop(); 

}

void display() { 
 
 glClear(GL_COLOR_BUFFER_BIT); 

 glLoadIdentity();

 glColor3f(0.0f,1.0f,0.0f);
 glBegin(GL_QUADS);  
 glVertex2f(-9.5,8);  
 glVertex2f(-2.5,8);
 glVertex2f(-2.5,5.8);
 glVertex2f(-9.5,5.8);
 glEnd();

 glBegin(GL_QUADS);
 glVertex2f(-9.5,6);
 glVertex2f(-7.3,6);
 glVertex2f(-7.3,-5);
 glVertex2f(-9.5,-5);
 glEnd();

 glBegin(GL_QUADS);
 glVertex2f(-9.5,-5);
 glVertex2f(-2.5,-5);
 glVertex2f(-2.5,-7);
 glVertex2f(-9.5,-7);
 glEnd();

 glBegin(GL_QUADS);
 glVertex2f(-4.3,0);
 glVertex2f(-4.3,-7);
 glVertex2f(-2.5,-7);
 glVertex2f(-2.5,0);
 glEnd();

 glBegin(GL_QUADS);
 glVertex2f(-6,0);
 glVertex2f(-6,-2);
 glVertex2f(-3.5,-2);
 glVertex2f(-3.5,-0);
 glEnd();


 glColor3f(1.0f,0.5f,0.0f);
 glBegin(GL_QUADS);
 glVertex2f(1,8);
 glVertex2f(6.5,8);
 glVertex2f(6.5,1);
 glVertex2f(1,1);
 glEnd();

 glBegin(GL_QUADS);
 glVertex2f(1,1);
 glVertex2f(3.8,1);
 glVertex2f(3.8,-7);
 glVertex2f(1,-7);
 glEnd();

 glBegin(GL_QUADS);
 glVertex2f(3.5,1);
 glVertex2f(6.5,1);
 glVertex2f(8.5,-7);
 glVertex2f(5.5,-7);
 glEnd();

 glColor3f(0.0f,0.0f,0.0f);
 glBegin(GL_TRIANGLES);
 glVertex2f(3.5,6);  
 glVertex2f(6,4.5);
 glVertex2f(3.5,3);
 glEnd();

 glColor3f(1.0f,0.5f,0.0f);
 glBegin(GL_TRIANGLES);
 glVertex2f(6.5,8);  
 glVertex2f(8.5,4.5);
 glVertex2f(6.5,1);
 glEnd();
 

 glFlush();

}

void reshape(int w, int h) 
{  
glViewport(0,0, (GLsizei)w, (GLsizei)h);  
glMatrixMode(GL_PROJECTION);  
glLoadIdentity();//reset matrixes  
gluOrtho2D(-15,15,-15,15);//size of the world  
glMatrixMode(GL_MODELVIEW); 
} 
 