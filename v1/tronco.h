#ifndef TRONCO_H
#define TRONCO_H
#include "utilities.h"
#include "schermo.h"
#define NTRONCHI 3
#define YTRONCOUNO 10
#define YTRONCODUE 13
#define YTRONCOTRE 16
//void tronco(int* pipe_fd, int y, int direzione_x, int id);
void *tronco(void *parameters);
//pid_t avviaTronco(int* pipe_fd,int x_spawn,int *dir_tronco,int id);
//void gestoreTronchi(int* pipe_fd,pid_t* pid_tronchi);
void gestoreTronchi(GameData *gameData, Params *tronco_args);
#endif
