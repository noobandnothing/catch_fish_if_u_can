/*  Global Vriables  */

float translate_x = 0.0;
float translate_y = 0.0;
float translate_z = 0.0;

float a = 0.0;
float b = 0.0;
float c = 0.0;
float d = 0.0;


float fishSpeed = 0.0001;
//float dogSpeed = 0.001;


int refreshmill = 1;

int scoree = 0;

bool GameOver = false;
bool won = false;
bool start = false;

int level = 1;
int target = 10;
int seconds = 30;



/* Func */

/* FOR countdown timer*/
struct tm* getCurrentDateTime()
{
	time_t tt;
	struct tm* st;

	time(&tt);
	st = localtime(&tt);
	return st;
}

bool countdown() {

	static int prev = getCurrentDateTime()->tm_sec;
	if (seconds >= 1) {
		if (prev != getCurrentDateTime()->tm_sec) {
			prev = getCurrentDateTime()->tm_sec;
			seconds--;
		}
		return false;
	}
	else {
		return true;
	}
}


/* Keyboard Controler */
void keyboard(unsigned char key, int x, int y) {
	if (!GameOver) {
		if (key == 'd')
		{
			translate_x += 0.1;
			glutPostRedisplay();
		}
		else if (key == 'a')
		{
			translate_x -= 0.1;
			glutPostRedisplay();
		}
		else if (key == 'w')
		{
			translate_y += 0.1;
			glutPostRedisplay();
		}
		else if (key == 's')
		{
			translate_y -= 0.1;
			glutPostRedisplay();
		}
		else if (key == ' ')
		{
			if (start == 0) {
				start = 1;
			}
		}
		else if (key == 27) {
			exit(0);
		}
		else if (key == 'r') {
			if (start == 1) {
				Sleep(2000);
				seconds = 30;
				start = 0;
			}
		}

	}
}



/* For Text Lables */
char s[30];
void renderBitmapString(float x, float y, void* font, const char* string) {
	const char* c;
	glRasterPos2f(x, y);
	for (c = string; *c != '\0'; c++) {
		glutBitmapCharacter(font, *c);
	}
}

//Menu Place Holder
void menu() {

	glColor3f(1.000, 1.000, 0.000);
	renderBitmapString(-0.5, 0.7, (void*)GLUT_BITMAP_TIMES_ROMAN_24, "CATCH FISH IF U CAN");

	glColor3f(0.000, 1.000, 0.000);
	renderBitmapString(-0.5+0.1, 0.7 - 0.1, (void*)GLUT_BITMAP_HELVETICA_18, "Press SPACE to START");
	renderBitmapString(-0.5 + 0.1*2, 0.7 - 0.1*2, (void*)GLUT_BITMAP_HELVETICA_18, "Press ESC to Exit");

	glColor3f(1.000, 1.000, 1.000);
	renderBitmapString(-0.5 + 0.14 , 0.7 - 0.1 * 3, (void*)GLUT_BITMAP_8_BY_13, "Press w to MOVE FORWARD");
	renderBitmapString(-0.5 + 0.14 , 0.7 - 0.1 * 4,(void*)GLUT_BITMAP_8_BY_13, "Press s to MOVE BACKWARD");
	renderBitmapString(-0.5 + 0.14 , 0.7 - 0.1 * 5,(void*)GLUT_BITMAP_8_BY_13, "Press a to turn Left");
	renderBitmapString(-0.5 + 0.14, 0.7 - 0.1 * 6, (void*)GLUT_BITMAP_8_BY_13, "Press s to turn Right");
	renderBitmapString(-0.5 + 0.14, 0.7 - 0.1 * 7, (void*)GLUT_BITMAP_8_BY_13, "Press r to turn Play Again");


	glColor3f(0.000, 1.000, 1.000);
	renderBitmapString(30 - 5, 50 - 40, (void*)GLUT_BITMAP_8_BY_13, "Project By: ");
	renderBitmapString(30 - 5, 50 - 43, (void*)GLUT_BITMAP_8_BY_13, "CAT HEHE");

}


/* Generate random position */
float RandomNumber(float x, float y) {
	return((float)rand() / RAND_MAX * (y - x) + x);
}

/*  */
void timer(int value) {
	glutPostRedisplay();
	glutTimerFunc(refreshmill, timer, 0);
}