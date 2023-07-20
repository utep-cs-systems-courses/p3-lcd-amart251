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

  drawString5x7(0, 00, "I put the new Forgis", COLOR_GREEN, COLOR_RED);
  drawString5x7(0, 10, "on the Jeep", COLOR_GREEN, COLOR_RED);
  drawString5x7(0, 20, "I trap until the,", COLOR_GREEN, COLOR_RED);
  drawString5x7(0, 30, "bloody bottoms is", COLOR_GREEN, COLOR_RED);
  drawString5x7(0, 40, "underneath", COLOR_GREEN, COLOR_RED);
  drawString5x7(0, 50, "'Cause all my nigga", COLOR_GREEN, COLOR_RED);
  drawString5x7(0, 60, "s got it out the st", COLOR_GREEN, COLOR_RED);
  drawString5x7(0, 70, "reets", COLOR_GREEN, COLOR_RED);

  //fillRectangle(30,30, 60, 60, COLOR_ORANGE);
  
}
