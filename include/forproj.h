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

/* Generate random position */
float RandomNumber(float x, float y) {
	return((float)rand() / RAND_MAX * (y - x) + x);
}

/*  */
void timer(int value) {
	glutPostRedisplay();
	glutTimerFunc(refreshmill, timer, 0);
}