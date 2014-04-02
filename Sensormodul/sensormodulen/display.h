/* Display.c
 * Include this file to get functions
 * for writing to the display.
 * 
 * Created: 2014-04-02
 * Martin, Per
 */

#ifndef DISPLAY_H
#define DISPLAY_H

void displaytest(void);
void toggle_enable(void);
void init_display(void);
int display_busy(void);
void print_char(char);
void print_text(char[]);
void print_line(int, char[]);
void set_display_pos(int, int);
void clear_display(void);

#endif