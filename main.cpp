#include "getheader.hpp"
#include "characters/cat.hpp"
#include "characters/fish.hpp"
fish fishes_team[10];



void score(int Score) {
	glColor3f(1.0, 0.0, 0.0);

	char int_str[20];

	if (!GameOver) {
		if (!countdown()) {
			//define position on the screen
			glRasterPos2f(-1, 0.9);
			// LEVEL
			/*if (Score < 10) {
			}
			else */
			if (Score == 10 && level == 1) {
				seconds = 30;
				scoree = 0;
				level = 2;
				fishSpeed += 0.0002;
				target = 12;
			}
			else if (Score == 12 && level == 2) {
				target = 15;				
				seconds = 60;
				scoree = 0;
				level = 3;
				fishSpeed += 0.0001;
			}
			else if (Score == 15 && level == 3) {
				target = 20;
				seconds = 80;
				scoree = 0;
				level = 4;
				fishSpeed += 0.0002;
			}
			else if (Score == 20 && level == 3) {
				target = 22;
				seconds = 80;
				scoree = 0;
				level = 4;
				fishSpeed += 0.0001;
			}
			else if (Score == 22 && level == 4) {
				target = 25;
				seconds = 80;
				scoree = 0;
				level = 5;
				fishSpeed += 0.0003;
			}
			else if (Score == 25 && level == 5) {
				seconds = 100;
				cout << "YOU WON kk" << endl;
				fishSpeed = 0;
				GameOver = true;
				won = true;

			}
			sprintf_s(int_str,"%d", level);
			char str[20] = "Level : ";
			strcat_s(str, int_str);
			char* string = (str);
			while (*string) {
				glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *string++);
			}

			sprintf_s(int_str, "%d", Score);
			char str0[20] = "  || Score : ";
			strcat_s(str0, int_str);
			char* string0 = (str0);
			while (*string0) {
				glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *string0++);
			}

			sprintf_s(int_str, "%d", target);
			char str1[20] = "  || Target : ";
			strcat_s(str1, int_str);
			char* string1 = (str1);
			while (*string1) {
				glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *string1++);
			}

			sprintf_s(int_str, "%d", seconds);
			char str2[20] = "  || Timer : ";
			strcat_s(str2, int_str);
			char* string2 = (str2);
			while (*string2) {
				glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *string2++);
			}


		}
		else {
			GameOver = true;
			fishSpeed = 0;
		}

	}
	else {
		if (!won) {
			glColor3f(1.0, 0.0, 0.0);
			glRasterPos2f(-1, 0.9);
			char str[20] = "Game Over";
			char* string = (str);
			while (*string) {
				glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *string++);
			}
		}
		else {
			glColor3f(0.0, 1.0, 0.0);
			glRasterPos2f(-1, 0.9);
			char str[20] = "YOU WON";
			char* string = (str);
			while (*string) {
				glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *string++);
			}
		}
	}


}


void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	if (start) {
		glClearColor(0.0f, 0.5f, 1.0f, 0);
		fish::fishes(fishes_team,10);
		cat main_character = cat();
		main_character.cat_draw();
		score(scoree);
	}else {
		glClearColor(0.0, 0.0, 1.0, 1);
		menu();
    }

	glFlush();
	glutSwapBuffers();
	glutPostRedisplay();
}

//----------------------------------------------------------------------------------main
void reshape(GLsizei width, GLsizei height) {  // GLsizei for non-negative integer
	// Compute aspect ratio of the new window
	if (height == 0) height = 1;                // To prevent divide by 0
	GLfloat aspect = (GLfloat)width / (GLfloat)height;

	// Set the viewport to cover the new window
	glViewport(0, 0, width, height);

	// Set the aspect ratio of the clipping area to match the viewport
	glMatrixMode(GL_PROJECTION);  // To operate on the Projection matrix
	glLoadIdentity();             // Reset the projection matrix
	if (width >= height) {
		// aspect >= 1, set the height from -1 to 1, with larger width
		gluOrtho2D(-1.0 * aspect, 1.0 * aspect, -1.0, 1.0);
	}
	else {
		// aspect < 1, set the width to -1 to 1, with larger height
		gluOrtho2D(-1.0, 1.0, -1.0 / aspect, 1.0 / aspect);
	}
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	glutInitWindowSize(500, 650);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Catch Fish If you can");
	glutDisplayFunc(display);
	glutKeyboardFunc(keyboard);

	glutReshapeFunc(reshape);
	glutTimerFunc(1000, timer, 0);
	//glutIdleFunc(display);
	glutMainLoop();
	return 0;
}