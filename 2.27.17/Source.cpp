#include <iostream>
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
using namespace std;
int main() {

	ALLEGRO_DISPLAY *display = NULL;

	al_init();

	al_init_primitives_addon();

	display = al_create_display(1000, 800);

	float Picture[5][5] = { {300, 300}, {200, 600}, {400, 400}, {400, 400} };

	al_draw_ribbon(*Picture, sizeof(*Picture),al_map_rgb(0,0,200),2,5);
	al_flip_display();

	al_rest(80.0);
	return 0;
}