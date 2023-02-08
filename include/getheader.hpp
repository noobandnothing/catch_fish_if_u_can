#include <cstdlib>
#include <math.h>
#include <iostream>
#include<string>
#include<string.h>
#include<stdlib.h>
#include <ctime>
using namespace std;

#include <GL/glut.h>
#ifndef _WINDLL
	#ifndef sprintf_s
		#define sprintf_s(buf, ...) snprintf((buf), sizeof(buf), __VA_ARGS__)
	#endif
	#ifndef Sleep
		#include <unistd.h>
		#define Sleep(milli_sec) usleep(milli_sec)
	#endif
	#ifndef strcat_s
		#define strcat_s(str1,str2) strcat(str1,str2)
	#endif
#endif

#include "forproj.h"