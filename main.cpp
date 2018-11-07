#include <iostream>
#include <GL/freeglut.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <fstream>
#include <bits/stdc++.h>

using namespace std;

#define LARGURA_JANELA 900
#define ALTURA_JANELA 700

char nome_arquivo[100];

void contaTriangulos(){}

void calculaFrames(){}

void submenu(){}

void criaViewports(){}

void leObj(){

    ifstream arquivo;

	cin >> nome_arquivo;

	arquivo.open(nome_arquivo);

	if(arquivo.fail()){
		cerr << "Erro ao abrir arquivo." << endl;
		exit(1);
	}

	string tipo;
    GLfloat aux;
	GLfloat aux2;
	GLfloat aux3;

	while(!arquivo.eof()){

		arquivo>>tipo;
		if(tipo == "v"){
            //getline(arquivo, aux);
            arquivo>>aux;
            arquivo>>aux2;
            arquivo>>aux3;
            cout<<tipo<<" "<<aux<<" "<<aux2<<" "<<aux3<<endl;
            //glColor3fv(1.0,0.0,0.0);
            //glBegin(GL_TRIANGLES);
              //  glVertex3fv(aux);
              //  glVertex3fv(aux2);
              //  glVertex3fv(aux3);
           // glEnd();

		}

		//cout<<aux<<endl;
	}
}

void keyboardHandler(unsigned char key, int x, int y){}

void mouseHandler(int button, int state, int x, int y){}

void display(){}

void init(){
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    criaViewports();
    leObj();

}

int main(int argc, char **argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(LARGURA_JANELA, ALTURA_JANELA);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Blender HD");
    init();
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboardHandler);
    glutMouseFunc(mouseHandler);

    glEnable(GL_DEPTH_TEST);
    glutMainLoop();
}
