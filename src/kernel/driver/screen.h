/**
 * screen.h | Interfaz para manejo de pantalla.
 */
#include "../system/common.h"

#ifndef SCREEN_H
#define SCREEN_H
/**
 * Escribe un caracter en pantalla.
 * @param char c: el caracter a escribir.
 *  Scape Characters implementados:         
 *     Esc[2J                   Erase Display: Clears the screen and moves the cursor to the home position (line 0, column 0). 
 *   
 *     Esc[#;#;...m 	Set Graphics Mode: Calls the graphics functions specified by the following values. These specified functions remain active until the next occurrence of this escape sequence. Graphics mode changes the colors and attributes of text (such as bold and underline) displayed on the screen.
 * 
 * Text attributes
 * 0	All attributes off
 * 1	Bold on
 * 4	Underscore (on monochrome display adapter only)
 * 5	Blink on
 *  
 * Foreground colors
 * 30	Black
 * 31	Red
 * 32	Green
 * 33	Yellow
 * 34	Blue
 * 35	Magenta
 * 36	Cyan
 * 37	White
 *  
 * Background colors
 * 40	Black
 * 41	Red
 * 42	Green
 * 43	Yellow
 * 44	Blue
 * 45	Magenta
 * 46	Cyan
 * 47	White  
 * 
 * Ej: Esc[34;47m (azul en fondo blanco)
 **/
PUBLIC void screen_put(char c);


#endif
