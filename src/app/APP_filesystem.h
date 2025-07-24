#ifndef filesystem_h_
#define filesystem_h_

#include "APP_common.h"

bool APP_InitFilesystem(int argc, char** argv);
void APP_QuitFilesystem(void);

bool APP_CreateDirectory(const char* const directory);

SDL_RWops* APP_OpenRead(const char* const filename);
SDL_RWops* APP_OpenWrite(const char* const filename);
SDL_RWops* APP_OpenAppend(const char* const filename);

#endif
