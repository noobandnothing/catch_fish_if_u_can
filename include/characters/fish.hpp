#pragma once

class fish {
	public:	
	
		float x;
		float y;
		float z;
		
		fish() {
			x = RandomNumber(-1, 1);
			y = RandomNumber(-1, 1);
			z = RandomNumber(-1, 1);
		}
		
		void fish_draw() {
			float translate_x2 = x;
			float translate_y2 = y;
			float translate_z2 = z;
			
			glPushMatrix();
			glLoadIdentity();
			glScalef(-1, 1, 1);
			glTranslatef(translate_x2, translate_y2, translate_z2);

			glColor3f(0.0, 0.0, 0.6);
			glBegin(GL_POLYGON);
			glVertex2f(0.7, 0.25);
			glVertex2f(0.75, 0.3);
			glVertex2f(0.775, 0.3);
			glVertex2f(0.85, 0.25);
			glVertex2f(0.775, 0.2);
			glVertex2f(0.75, 0.2);
			glEnd();

			glBegin(GL_TRIANGLES);
			glVertex2f(0.83, 0.25);
			glVertex2f(0.9, 0.29);
			glVertex2f(0.9, 0.21);
			glEnd();

			glBegin(GL_TRIANGLES);
			glVertex2f(0.775, 0.3);
			glVertex2f(0.79, 0.4);
			glVertex2f(0.75, 0.3);
			glEnd();

			glBegin(GL_TRIANGLES);
			glVertex2f(0.775, 0.2);
			glVertex2f(0.79, 0.1);
			glVertex2f(0.75, 0.2);
			glEnd();

			glColor3f(1.0, 1.0, 1.0);
			glPointSize(8.0);
			glBegin(GL_POINTS);
			glVertex2f(0.73, 0.265);
			glEnd();
			glPopMatrix();
		}

		static void fishes(fish *fishes_team, int n) {
			for (int counter = 0; counter < n; counter++) {
				fishes_team[counter].fish_draw();
			}
			
			for (int i = 0; i < n; i++) {
				fishes_team[i].x -= 20*fishSpeed;
				if (fishes_team[i].x < -2.5) {
					fishes_team[i].x = 1;
				}
			
				if ((fishes_team[i].x + 0.2) * -1 >= (translate_x + 0.4)
				&& (fishes_team[i].x + 0.2) * -1 <= (translate_x + 0.69)
				&& (fishes_team[i].y + 0.22) <= (translate_y + 0.3)
				&& (fishes_team[i].y + 0.22) >= (translate_y + 0.05)
				) {
					cout << "bonus" << endl;
					fishes_team[i].y = RandomNumber(-1, 1);
					fishes_team[i].x = 1.5;
					scoree++;
				}
			}
		}
};



