#pragma once

class dog {
public:

	float x;
	float y;
	float z;
	dog() {
		x = RandomNumber(-1, 1)*-2;
		y = RandomNumber(-1, 1);
		z = RandomNumber(-1, 1);

	}
	void dog_draw()
	{
		float translate_x2 = x;
		float translate_y2 = y;
		float translate_z2 = z;
		glMatrixMode(GL_MODELVIEW);

		glPushMatrix();
		glLoadIdentity();

		//###################
		//ears
		//glScalef((GLfloat)-0.3, (GLfloat)0.3, (GLfloat)1.0);
		glScalef((GLfloat)-0.3, (GLfloat)0.3, (GLfloat)1.0);

		glTranslatef(translate_x2, translate_y2, translate_z2);


		glBegin(GL_TRIANGLES);
		glColor3f(0.6, 0.6, 0.6);
		glVertex2d(-0.5038957884867, 0.6690886023084);
		glVertex2d(-0.3059533025937, 0.6663838245631);
		glVertex2d(-0.4827871087385, 0.0965156641377);
		glEnd();
		glBegin(GL_LINE_LOOP);
		glColor3f(0, 0, 0);
		glVertex2d(-0.5038957884867, 0.6690886023084);
		glVertex2d(-0.3059533025937, 0.6663838245631);
		glVertex2d(-0.4827871087385, 0.0965156641377);
		glEnd();
		glBegin(GL_TRIANGLES);
		glColor3f(0.6, 0.6, 0.6);
		glVertex2d(0.3651365771902, 0.6663838245631);
		glVertex2d(0.5712698594853, 0.6640642156426);
		glVertex2d(0.547079552983, 0.093250921191);
		glEnd();
		glBegin(GL_LINE_LOOP);
		glColor3f(0, 0, 0);
		glVertex2d(0.3651365771902, 0.6663838245631);
		glVertex2d(0.5712698594853, 0.6640642156426);
		glVertex2d(0.547079552983, 0.093250921191);
		glEnd();

		//body
		glBegin(GL_POLYGON);
		glColor3f(0.6, 0.6, 0.6);
		glVertex2d(-0.3059533025937, 0.6663838245631);
		glVertex2d(0.3651365771902, 0.6663838245631);
		glVertex2d(0.3666358316399, -0.720206412095);
		glVertex2d(-0.3115785573063, -0.72132832546);

		glEnd();
		glBegin(GL_LINE_LOOP);
		glColor3f(0, 0, 0);
		glVertex2d(-0.3059533025937, 0.6663838245631);
		glVertex2d(0.3651365771902, 0.6663838245631);
		glVertex2d(0.3666358316399, -0.720206412095);
		glVertex2d(-0.3115785573063, -0.72132832546);

		glEnd();


		//leg
		glBegin(GL_POLYGON);
		glColor3f(0.6, 0.6, 0.6);
		glVertex2d(0.0722719052275, -0.5987813464109);
		glVertex2d(0.25, -0.5981939613301);
		glVertex2d(0.2497940826709, -0.7673683081499);
		glVertex2d(0.0733446622161, -0.7674966502403);

		glEnd();
		glBegin(GL_LINE_LOOP);
		glColor3f(0, 0, 0);
		glVertex2d(0.0722719052275, -0.5987813464109);
		glVertex2d(0.25, -0.5981939613301);
		glVertex2d(0.2497940826709, -0.7673683081499);
		glVertex2d(0.0733446622161, -0.7674966502403);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(0.6, 0.6, 0.6);
		glVertex2d(-0.2000957903704, -0.5997161842743);
		glVertex2d(-0.0145877736362, -0.5987758155165);
		glVertex2d(-0.0138257944288, -0.7682339036885);
		glVertex2d(-0.2005936306983, -0.7685666907446);
		glEnd();
		glBegin(GL_LINE_LOOP);
		glColor3f(0, 0, 0);
		glVertex2d(-0.2000957903704, -0.5997161842743);
		glVertex2d(-0.0145877736362, -0.5987758155165);
		glVertex2d(-0.0138257944288, -0.7682339036885);
		glVertex2d(-0.2005936306983, -0.7685666907446);
		glEnd();


		//leg2
		glBegin(GL_POLYGON);
		glColor3f(0.6, 0.6, 0.6);
		glVertex2d(-0.4826713580156, -0.2252881007683);
		glVertex2d(-0.3091671534316, -0.2226128108503);
		glVertex2d(-0.3115785573063, -0.72132832546);
		glVertex2d(-0.4797176468036, -0.721618651986);
		glEnd();
		glBegin(GL_LINE_LOOP);
		glColor3f(0, 0, 0);
		glVertex2d(-0.4826713580156, -0.2252881007683);
		glVertex2d(-0.3091671534316, -0.2226128108503);
		glVertex2d(-0.3115785573063, -0.72132832546);
		glVertex2d(-0.4797176468036, -0.721618651986);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(0.6, 0.6, 0.6);
		glVertex2d(0.5464109668511, -0.2236741487066);
		glVertex2d(0.3657115882791, -0.2265692996924);
		glVertex2d(0.3666358316399, -0.720206412095);
		glVertex2d(0.5464109668511, -0.7188965746976);
		glEnd();
		glBegin(GL_LINE_LOOP);
		glColor3f(0, 0, 0);
		glVertex2d(0.5464109668511, -0.2236741487066);
		glVertex2d(0.3657115882791, -0.2265692996924);
		glVertex2d(0.3666358316399, -0.720206412095);
		glVertex2d(0.5464109668511, -0.7188965746976);
		glEnd();


		//eyes
		glBegin(GL_TRIANGLE_FAN);
		glColor3f(0, 0, 0);
		glVertex2d(-0.0315545210869, 0.4973514537668);
		double rdies = 0.03;
		for (float angle = 0.0; angle < 360.0; angle += 0.2)
		{
			glVertex2f(-0.0315545210869 + cos(angle * 3.14159265359 / 180) * rdies, 0.4973514537668 + sin(angle * 3.14159265359 / 180) * rdies);
		}

		glEnd();
		glBegin(GL_TRIANGLE_FAN);
		glVertex2d(0.0894866892518, 0.4955317317046);
		double rdiess = 0.03;
		for (float angle = 0.0; angle < 360.0; angle += 0.2)
		{

			glVertex2f(0.0894866892518 + cos(angle * 3.14159265359 / 180) * rdies, 0.4955317317046 + sin(angle * 3.14159265359 / 180) * rdies);
		}

		glEnd();

		//nose


		glBegin(GL_POLYGON);
		glColor3f(0.4f, 0.1f, 0.0f);
		glVertex2d(-0.06, 0.369469640147);
		glVertex2d(-0.06, 0.2859623660185);
		glVertex2d(0.12, 0.2859623660185);
		glVertex2d(0.12, 0.369469640147);
		glEnd();
		glBegin(GL_LINE_LOOP);
		glColor3f(0, 0, 0);
		glVertex2d(-0.06, 0.369469640147);
		glVertex2d(-0.06, 0.2859623660185);
		glVertex2d(0.12, 0.2859623660185);
		glVertex2d(0.12, 0.369469640147);
		glEnd();


		//mouth

		glBegin(GL_LINES);
		glVertex2f(0.0305766337318, 0.2553864055446);
		glVertex2f(0.0383954177946, 0.1725072944792);
		glEnd();

		glBegin(GL_LINES);
		glVertex2f(0.211972423988, 0.1787623217295);
		glVertex2f(0.2760864533027, 0.2444401078567);
		glEnd();


		glBegin(GL_LINES);

		glVertex2f(-0.1414366156491, 0.180326078542);
		glVertex2f(-0.2024231313387, 0.2428763510442);
		glEnd();

		glBegin(GL_LINES);

		glVertex2f(0.0383954177946, 0.1725072944792);
		glVertex2f(-0.1414366156491, 0.180326078542);
		glEnd();

		glBegin(GL_LINES);

		glVertex2f(0.0383954177946, 0.1725072944792);
		glVertex2f(0.211972423988, 0.1787623217295);
		glEnd();


		//
		glBegin(GL_LINES);
		glVertex2f(0.5163696276553, -0.6487292561568);
		glVertex2f(0.5159228082664, -0.7166458032763);
		glEnd();

		glBegin(GL_LINES);
		glVertex2f(0.4819645347066, -0.6657083929366);
		glVertex2f(0.4819589918726, -0.7182831302559);
		glEnd();

		glBegin(GL_LINES);
		glVertex2f(0.2165538176737, -0.6965389307738);
		glVertex2f(0.2165538176737, -0.7635618391154);
		glEnd();

		glBegin(GL_LINES);
		glVertex2f(0.1875105573923, -0.71083715122);
		glVertex2f(0.1875105573923, -0.7617745615597);
		glEnd();


		glBegin(GL_LINES);
		glVertex2f(-0.4548406124924, -0.6520902147058);
		glVertex2f(-0.4539028143329, -0.7221138909815);
		glEnd();

		glBegin(GL_LINES);
		glVertex2f(-0.425113216676, -0.6671975797929);
		glVertex2f(-0.4246258823183, -0.7159310155575);
		glEnd();


		glBegin(GL_LINES);
		glVertex2f(-0.1745925472462, -0.694678416615);
		glVertex2f(-0.1745925472462, -0.7613605974961);
		glEnd();

		glBegin(GL_LINES);
		glVertex2f(-0.1425096111619, -0.7091471917118);
		glVertex2f(-0.1425096111619, -0.7638769062086);
		glEnd();

		glColor3f(1.0, 0.0, 0.0);
		glBegin(GL_LINES);
		glLineWidth(10.0);
		glVertex2f(translate_x2, translate_y2);
		glVertex2f(translate_x+0.2, translate_y);
		glEnd();
		glutPostRedisplay();
		//###################
		glPopMatrix();
	}
};

dog dogs_team[1];

void dogs() {
	for (int counter = 0; counter < 1; counter++) {
		dogs_team[counter].dog_draw();
	}
	for (int i = 0; i < 1; i++) {

		dogs_team[i].x -= dogSpeed;
		if (dogs_team[i].x < -2.5) {
			dogs_team[i].x = 1.5;
		}

		cout << "DOG : " << dogs_team[i].x << " || " << translate_x << " || " << dogs_team[i].y << " || " << translate_y << endl;


		if(  dogs_team[i].x - translate_x <= 0.1 && dogs_team[i].x - translate_x >= -0.2 && abs(dogs_team[i].y - translate_y) >= 0.0 && abs(dogs_team[i].y - translate_y) <= 0.7) {
			cout << "Game over" << endl;
			dogSpeed = 0;
			fishSpeed = 0;
			GameOver = true;
		}

	}
	glEnd();

	glFlush();
	glutPostRedisplay();
}