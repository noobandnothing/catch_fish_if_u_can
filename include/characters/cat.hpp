class cat {
	public:
		void cat_draw() {
			float x = 0, y = 0;
			glMatrixMode(GL_MODELVIEW);
			glPushMatrix();
			glLoadIdentity();
			glTranslatef(translate_x, translate_y, translate_z);
			//############################################
			//body
			//glScalef((GLfloat)0.3, (GLfloat)0.3, (GLfloat)0.0);
			glScalef((GLfloat)0.3, (GLfloat)0.3, (GLfloat)0.0);
			glBegin(GL_POLYGON);
			glColor3f(0.7764705882352941, 0.592156862745098, 0.2862745098039216);
			glVertex2f(-0.4, 0.6);
			glVertex2f(0.4, 0.6);
			glVertex2f(0.4, -0.2);
			glVertex2f(-0.4, -0.2); 
			glEnd();
			glBegin(GL_LINE_LOOP);
			glColor3f(0, 0, 0);
			glVertex2f(-0.4, 0.6);
			glVertex2f(0.4, 0.6);
			glVertex2f(0.4, -0.2);
			glVertex2f(-0.4, -0.2); 
			glEnd();

			////body2
			glBegin(GL_POLYGON);
			glColor3f(0.7764705882352941, 0.592156862745098, 0.2862745098039216);
			glVertex2f(-0.2, -0.2);
			glVertex2f(0.2, -0.2);
			glVertex2f(0.2, -0.6);
			glVertex2f(-0.2, -0.6); glEnd();
			glBegin(GL_LINE_LOOP);
			glColor3f(0, 0, 0);
			glVertex2f(-0.2, -0.2);
			glVertex2f(0.2, -0.2);
			glVertex2f(0.2, -0.6);
			glVertex2f(-0.2, -0.6); glEnd();

			//ears
			glBegin(GL_TRIANGLES);
			glColor3f(0.7764705882352941, 0.592156862745098, 0.2862745098039216);
			glVertex2f(-0.4, 0.6);
			glVertex2f(-0.4, 0.8);
			glVertex2f(-0.2, 0.6); glEnd();
			glBegin(GL_LINE_LOOP);
			glColor3f(0, 0, 0);
			glVertex2f(-0.4, 0.6);
			glVertex2f(-0.4, 0.8);
			glVertex2f(-0.2, 0.6); glEnd();

			//ears2
			glBegin(GL_TRIANGLES);
			glColor3f(0.7764705882352941, 0.592156862745098, 0.2862745098039216);
			glVertex2f(0.4, 0.6);
			glVertex2f(0.4, 0.8);
			glVertex2f(0.2, 0.6); glEnd();
			glBegin(GL_LINE_LOOP);
			glColor3f(0, 0, 0);
			glVertex2f(0.4, 0.6);
			glVertex2f(0.4, 0.8);
			glVertex2f(0.2, 0.6); glEnd();

			//nose
			glBegin(GL_TRIANGLES);
			glColor3f(0, 0, 0);
			glVertex2f(0.0, 0.2);
			glVertex2f(0.1607846836132, 0.0861900976217);
			glVertex2f(-0.0105263527416, 0.1247350808015);
			glEnd();

			//l_hand
			glBegin(GL_POLYGON);
			glColor3f(0.7764705882352941, 0.592156862745098, 0.2862745098039216);
			glVertex2f(0.15, -0.55);
			glVertex2f(0.15, -0.65);
			glVertex2f(0.05, -0.65);
			glVertex2f(0.05, -0.55); glEnd();
			glBegin(GL_LINE_LOOP);
			glColor3f(0, 0, 0);
			glVertex2f(0.15, -0.55);
			glVertex2f(0.15, -0.65);
			glVertex2f(0.05, -0.65);
			glVertex2f(0.05, -0.55); glEnd();
			//r_hand
			glBegin(GL_POLYGON);
			glColor3f(0.7764705882352941, 0.592156862745098, 0.2862745098039216);
			glVertex2f(-0.15, -0.55);
			glVertex2f(-0.15, -0.65);
			glVertex2f(-0.05, -0.65);
			glVertex2f(-0.05, -0.55); glEnd();
			glBegin(GL_LINE_LOOP);
			glColor3f(0, 0, 0);
			glVertex2f(-0.15, -0.55);
			glVertex2f(-0.15, -0.65);
			glVertex2f(-0.05, -0.65);
			glVertex2f(-0.05, -0.55); glEnd();


			//l_leg
			glBegin(GL_POLYGON);
			glColor3f(0.7764705882352941, 0.592156862745098, 0.2862745098039216);
			glVertex2f(0.2, -0.4);
			glVertex2f(0.3, -0.4);
			glVertex2f(0.3, -0.6);
			glVertex2f(0.2, -0.6); glEnd();
			glBegin(GL_LINE_LOOP);
			glColor3f(0, 0, 0);
			glVertex2f(0.2, -0.4);
			glVertex2f(0.3, -0.4);
			glVertex2f(0.3, -0.6);
			glVertex2f(0.2, -0.6); glEnd();

			//r_leg
			glBegin(GL_POLYGON);
			glColor3f(0.7764705882352941, 0.592156862745098, 0.2862745098039216);
			glVertex2f(-0.3, -0.4);
			glVertex2f(-0.2, -0.4);
			glVertex2f(-0.2, -0.6);
			glVertex2f(-0.3, -0.6); glEnd();
			glBegin(GL_LINE_LOOP);
			glColor3f(0, 0, 0);
			glVertex2f(-0.3, -0.4);
			glVertex2f(-0.2, -0.4);
			glVertex2f(-0.2, -0.6);
			glVertex2f(-0.3, -0.6); glEnd();
			//eyes

			glBegin(GL_TRIANGLE_FAN);
			glColor3f(0, 0., 0);
			glVertex2d(-0.2038370935393, 0.2938625945628);
			double rdies = 0.09;
			for (float angle = 0.0; angle < 360.0; angle += 0.2)
			{
				glVertex2f(-0.2038370935393 + cos(angle * 3.14159265359 / 180) * rdies, 0.2938625945628 + sin(angle * 3.14159265359 / 180) * rdies);
			}
			glEnd();
			
			//eyes2
			glBegin(GL_TRIANGLE_FAN);
			glColor3f(0, 0, 0);
			glVertex2d(0.2038370935393, 0.2938625945628);
			double rdies1 = 0.09;
			for (float angle = 0.0; angle < 360.0; angle += 0.2)
			{
				glVertex2f(0.2038370935393 + cos(angle * 3.14159265359 / 180) * rdies, 0.2938625945628 + sin(angle * 3.14159265359 / 180) * rdies);
			}
			glEnd();

			//line nose
			glBegin(GL_LINES);
			glVertex2f(0.275596449311, 0.1440911621254);
			glVertex2f(0.5, 0.1);
			glEnd();

			glBegin(GL_LINES);
			glVertex2f(0.2639002062922, 0.0973061900501);
			glVertex2f(0.4978250666686, 0.042723722629);
			glEnd();

			glBegin(GL_LINES);
			glVertex2f(-0.2639002062922, 0.0973061900501);
			glVertex2f(-0.4978250666686, 0.042723722629);
			glEnd();

			glBegin(GL_LINES);
			glVertex2f(-0.275596449311, 0.1440911621254);
			glVertex2f(-0.5, 0.1);
			glEnd();

			glBegin(GL_LINES);
			glVertex2f(-0.1545799705377, -0.0002166809399);
			glVertex2f(-0.0000196732189, -0.0375687527919);
			glEnd();

			glBegin(GL_LINES);
			glVertex2f(-0.0000196732189, -0.0375687527919);
			glVertex2f(0.1428, 0.00405);
			glEnd();

			glBegin(GL_LINES);
			glVertex2f(-0.0000196732189, -0.0375687527919);
			glVertex2f(0.0387255702104, -0.0808381628243);
			glEnd();

			glBegin(GL_LINES);
			glVertex2f(0.1428, 0.00405);;
			glVertex2f(0.1790126711753, -0.0311287404037);
			glEnd();

			glBegin(GL_LINES);
			glVertex2f(0.0387255702104, -0.0808381628243);
			glVertex2f(0.1790126711753, -0.0311287404037);
			glEnd();

			glBegin(GL_LINES);
			glVertex2f(0.1428, 0.00405);
			glVertex2f(0.1944687009072, 0.0191033562249);
			glEnd();

			//1
			glBegin(GL_LINES);
			glVertex2f(-0.0657770060957, -0.6427389724417);
			glVertex2f(-0.1023573454531, -0.595398814492);
			glEnd();
			//2
			glBegin(GL_LINES);
			glVertex2f(-0.0984952758323, -0.6427389724417);
			glVertex2f(-0.1324481972571, -0.6019954667319);
			glEnd();
			//3
			glBegin(GL_LINES);
			glVertex2f(-0.223195096338, -0.5908836015383);
			glVertex2f(-0.2540613885424, -0.5433495115436);
			glEnd();
			//4
			glBegin(GL_LINES);
			glVertex2f(-0.2614692986715, -0.5877969723179);
			glVertex2f(-0.2911009391877, -0.5396455564791);
			glEnd();
			//5
			glBegin(GL_LINES);
			glVertex2f(0.0959623650553, -0.6353310623127);
			glVertex2f(0.0700346796036, -0.5933529049147);
			glEnd();
			//6
			glBegin(GL_LINES);
			glVertex2f(0.1249766797274, -0.637800365689);
			glVertex2f(0.0959623650553, -0.5933529049147);
			glEnd();
			//7 
			glBegin(GL_LINES);
			glVertex2f(0.2385646350396, -0.5896489498502);
			glVertex2f(0.206463691147, -0.5414975340113);
			glEnd();
			//8
			glBegin(GL_LINES);
			glVertex2f(0.2823947699698, -0.5908836015383);
			glVertex2f(0.2496765002331, -0.5359416014145);
			glEnd();

			//###########################################

			glPopMatrix();
			glFlush();
			glutPostRedisplay();
		}
};