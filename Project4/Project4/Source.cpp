#include <allegro5/allegro.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_primitives.h>

int main()
{
	al_init();
	ALLEGRO_DISPLAY* display = al_create_display(800, 600);
	ALLEGRO_FONT* font = al_create_builtin_font();
	al_init_font_addon();
	al_init_primitives_addon();

	
	al_clear_to_color(al_map_rgb(0, 0, 0));
	al_draw_rectangle(200, 250, 600, 400, al_map_rgb(0, 200, 0), 5);

	
	
	
	al_draw_text(font, al_map_rgb(255, 255, 255), 400, 300, ALLEGRO_ALIGN_CENTER, "Watch for unexpected dabs");



	al_flip_display();
	al_rest(30.0);
	return 0;
}