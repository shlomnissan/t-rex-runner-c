// Copyright 2021 Betamark Pty Ltd. All rights reserved.
// Author: Shlomi Nissan (shlomi@betamark.com)

#ifndef TREX_RUNNER_GRAPHICS_H
#define TREX_RUNNER_GRAPHICS_H

#include <stdint.h>
#include <stdbool.h>

#include "utilities.h"

typedef struct {
    int id;
    Rectangle source;
    Rectangle destination;
} Texture;

typedef struct {
    int frames[10];
    int len;
    double ms_per_frame;
} AnimationFrames;

typedef struct {
    int len;
    Rectangle rects[10];
} CollisionSet;

typedef struct {
    uint8_t r;
    uint8_t g;
    uint8_t b;
} RGB;

int32_t LoadTexture(char* filename);

void DrawTexture(Texture* texture);

void DrawRectangle(Rectangle* rect, RGB color, bool fill);

void DrawCollisionSet(CollisionSet* collision_set, RGB color);

void SetTextureAlpha(int texture_id, double alpha);

RGB HexToRGB(int hex_value);

void FreeTextures();

#endif  // TREX_RUNNER_GRAPHICS_H
