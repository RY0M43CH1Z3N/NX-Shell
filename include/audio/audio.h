#ifndef NX_SHELL_AUDIO_H
#define NX_SHELL_AUDIO_H

#include <SDL2/SDL.h>
#include <switch.h>

extern bool playing, paused;

typedef struct {
	bool has_meta;
    char title[31];
    char album[31];
    char artist[31];
    char year[5];
    char comment[31];
    char genre[31];
    SDL_Texture *cover_image;
} Audio_Metadata;

extern Audio_Metadata metadata;

int Audio_Init(const char *path);
bool Audio_IsPaused(void);
void Audio_Pause(void);
void Audio_Stop(void);
u64 Audio_GetPosition(void);
u64 Audio_GetLength(void);
u64 Audio_GetPositionSeconds();
u64 Audio_GetLengthSeconds();
void Audio_Term(void);

#endif
