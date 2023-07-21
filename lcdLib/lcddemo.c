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

  clearScreen(COLOR_BLACK);


  /*
  drawString5x7(0, 00, "I put the new Forgis", COLOR_GREEN, COLOR_RED);
  drawString5x7(0, 10, "on the Jeep", COLOR_GREEN, COLOR_RED);
  drawString5x7(0, 20, "I trap until the,", COLOR_GREEN, COLOR_RED);
  drawString5x7(0, 30, "bloody bottoms is", COLOR_GREEN, COLOR_RED);
  drawString5x7(0, 40, "underneath", COLOR_GREEN, COLOR_RED);
  drawString5x7(0, 50, "'Cause all my bro", COLOR_GREEN, COLOR_RED);
  drawString5x7(0, 60, "s got it out the st", COLOR_GREEN, COLOR_RED);
  drawString5x7(0, 70, "reets", COLOR_GREEN, COLOR_RED);
  drawString5x7(0, 80, "I keep a hundred r", COLOR_GREEN, COLOR_RED);
  drawString5x7(0, 90, "acks inside my jea", COLOR_GREEN, COLOR_RED);
  drawString5x7(0, 100, "ns", COLOR_GREEN, COLOR_RED);
  drawString5x7(0, 110, "I remember hittin'", COLOR_GREEN, COLOR_RED);
  drawString5x7(0, 120, "the mall with the", COLOR_GREEN, COLOR_RED);
  drawString5x7(0, 130, "whole team", COLOR_GREEN, COLOR_RED);
  drawString5x7(0, 140, "Now I can't", COLOR_GREEN, COLOR_RED);
  drawString5x7(0, 150, "answer calls 'caus", COLOR_GREEN, COLOR_RED);
  drawString5x7(0, 160, "e I'm ballin'", COLOR_GREEN, COLOR_RED);
  drawString5x7(0, 170, "I was wakin' up ge", COLOR_GREEN, COLOR_RED);
  drawString5x7(0, 180, "ttin' racks in the", COLOR_GREEN, COLOR_RED);
  drawString5x7(0, 190, "mornin'", COLOR_GREEN, COLOR_RED);*/

  fillRectangle(80,80, 60, 60, COLOR_SEA_GREEN);
  
}
