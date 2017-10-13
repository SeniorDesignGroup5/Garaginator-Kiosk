
#ifndef __LCD_H__    /* Guard against multiple inclusion */
#define __LCD_H__


void LCD_putc(char c);
void LCD_write(char* str);
void LCD_set_cursor(int line, int col);
void LCD_clear();


#endif /* _EXAMPLE_FILE_NAME_H */