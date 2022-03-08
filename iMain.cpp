#include "iGraphics.h"

#define frameWidth 1000
#define frameHeight 600




int ballX = 0;
int ballY = 0;
int radius = 20;
int dx = 20;
int dy = 20;

int r = 255;
int g = 255;
int b = 255;

int t;

void ballMove();



//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Idraw Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://

void iDraw()
{
	iClear();
	

	iSetColor(r, g, b);
	iFilledCircle(ballX, ballY, radius, 1000);
	
	
}





/*function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/


void iMouseMove(int mx, int my)
{
	
}
//*******************************************************************ipassiveMouse***********************************************************************//
void iPassiveMouseMove(int mx, int my)
{
	
}

void iMouse(int button, int state, int mx, int my)
{
	
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{

		
	}
	
	
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		
	}
}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/


void iKeyboard(unsigned char key)
{
	
	if (key == 'p')
	{
		iPauseTimer(t);
	}
	if (key == 'r')
	{
		iResumeTimer(t);
	}
	
	
	

}

/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{

	
	
}

void ballMove()
{
	
	
	
	
	ballX += dx;
	ballY += dy;

	if (ballX >= frameWidth - 20 || ballX <= 0)
	{
		dx=-dx;
	}
	if (ballY >= frameHeight - 20 || ballY <= 0)
	{
		dy=-dy;
	}
	
}




int main()
{
	///srand((unsigned)time(NULL));
	t=iSetTimer(50, ballMove);

	iInitialize(frameWidth, frameHeight, "Ball");

	///updated see the documentations
	iStart();
	return 0;
}