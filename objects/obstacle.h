// Copyright 2021 Betamark Pty Ltd. All rights reserved.
// Author: Shlomi Nissan (shlomi@betamark.com)

#ifndef TREX_RUNNER_OBSTACLE_H
#define TREX_RUNNER_OBSTACLE_H

#include <stdint.h>
#include <stdbool.h>

#include "sys/utilities.h"
#include "sys/graphics.h"
#include "globals.h"

typedef struct {
    CollisionSet collision_boxes;
    int type;
    int width;
    int height;
    int y_pos;
    int multiple_speed;
    int min_gap;
    int min_speed;
    int speed_offset;
} ObstacleType;

typedef struct {
    ObstacleType type;
    Point sprite_def;
    Point pos;
    int size;
    int width;
    int gap;
    int speed_offset;
    bool following_obstacle_created;
    bool is_visible;
} Obstacle;

Obstacle* MakeObstacle(int type, double speed);

void UpdateObstacle(Obstacle* obstacle, uint32_t delta_time, double speed);

void DrawObstacle(Obstacle* obstacle);

bool IsObstacleVisible(Obstacle* obstacle);

#endif  // TREX_RUNNER_OBSTACLE_H
