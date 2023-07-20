/** \file lcddemo.c
 *  \brief A simple demo that draws a string and square
 */

#include <libTimer.h>
#include "lcdutils.h"
#include "lcddraw.h"

/** Initializes everything, clears the screen, draws "hello" and a square */
int
main()
{
  configureClocks();
  lcd_init();
  u_char width = screenWidth, height = screenHeight;

  clearScreen(COLOR_BLUE);

  drawString5x7(20,20, "I put the new Forgis on the Jeep
I trap until the, bloody bottoms is underneath
'Cause all my niggas got it out the streets
I keep a hundred racks inside my jeans
I remember hittin' the mall with the whole team
Now a nigga can't answer calls 'cause I'm ballin'
I was wakin' up gettin' racks in the mornin'", COLOR_GREEN, COLOR_RED);

  fillRectangle(30,30, 60, 60, COLOR_ORANGE);
  
}
