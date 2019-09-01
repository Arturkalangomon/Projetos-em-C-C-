#include <allegro.h>

int main() //função principal do programa...
{
   allegro_init(); //inicializa o alegro
   install_timer(); //define timer (não sei para que serve ainda)...
   install_keyboard(); //inicializa o teclado
   set_color_depth(32); //cor de fundo da janela
   set_gfx_mode(GFX_AUTODETECT_WINDOWED, 800, 600, 0, 0); //define o tamanho da janela automatico...
   set_window_title("Tutorial 1 - Instalacao");

   while(!key[KEY_ESC]) // se pressionar esc mata a janela e a aplicação...
   {
	 textout_centre_ex(screen, font, "Hello World!", SCREEN_W/2, SCREEN_H/2, makecol(255, 255, 255), -1); //define texto centralizado...
   }

   return 0;  //indica que o programa finalizou com sucesso...
}
END_OF_MAIN() //fim da classe principal do alegro aplication...

/*

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}
*/
