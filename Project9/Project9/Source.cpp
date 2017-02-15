#include <iostream>
#include <allegro5\allegro_primitives.h>
#include <allegro5\allegro.h>
#include <allegro5\allegro_font.h>
using namespace std;
int main() {
	al_init();
	al_init_font_addon();
	al_init_primitives_addon();
	ALLEGRO_DISPLAY* display = al_create_display(800, 600);
	ALLEGRO_FONT* font = al_create_builtin_font();
	al_clear_to_color(al_map_rgb(0, 0, 0));
	al_draw_filled_triangle(160, 270, 400, 640, 640, 270, al_map_rgb(175, 0, 50));
	al_draw_filled_ellipse(270, 270, 100, 200, al_map_rgb(175, 0, 50));
	al_draw_text(font, al_map_rgb(0, 255, 255), 400, 300, ALLEGRO_ALIGN_CENTER, "Have a lonely Valentines Day!!!!");

	
	al_flip_display();
	al_rest(80.0);
	return 0;
}