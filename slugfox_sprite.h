#ifndef SLUGFOX_SPRITE_H
#define SLUGFOX_SPRITE_H

typedef struct { short b:5, g:6, r:5; } pixel_rgb_t;

pixel_rgb_t slugfox_sprite[30][17] = {
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {18, 37, 18}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {25, 51, 25}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {28, 57, 28}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {7, 14, 7}, {27, 55, 27}, {31, 63, 31}, {26, 54, 26}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {22, 46, 22}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {0, 1, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {30, 62, 30}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {31, 63, 31}, {30, 62, 30}, {31, 63, 31}, {30, 62, 30}, {26, 54, 26}, {0, 0, 0}, {0, 0, 0}, {21, 43, 21}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {30, 62, 30}, {30, 62, 30}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {30, 62, 30}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {22, 44, 22}, {1, 3, 1}, {0, 0, 0}},
    {{26, 54, 26}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {30, 61, 30}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{31, 63, 31}, {30, 62, 30}, {0, 0, 0}, {0, 0, 0}, {31, 63, 31}, {30, 62, 30}, {0, 0, 0}, {0, 0, 0}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {3, 6, 3}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{31, 63, 31}, {29, 60, 29}, {0, 0, 0}, {0, 0, 0}, {31, 63, 31}, {31, 63, 31}, {0, 0, 0}, {0, 0, 0}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {29, 60, 29}, {21, 42, 21}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {28, 58, 28}, {0, 0, 0}, {0, 0, 0}, {31, 63, 31}, {30, 62, 30}, {0, 0, 0}, {0, 0, 0}, {30, 62, 30}, {30, 61, 30}, {24, 49, 24}, {20, 41, 20}, {2, 4, 2}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {8, 18, 8}, {30, 62, 30}, {30, 62, 30}, {31, 63, 31}, {31, 63, 31}, {30, 61, 30}, {28, 58, 28}, {30, 61, 30}, {24, 49, 24}, {15, 30, 15}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {13, 28, 13}, {29, 59, 29}, {30, 62, 30}, {30, 62, 30}, {29, 60, 29}, {29, 59, 29}, {23, 46, 23}, {10, 22, 10}, {0, 1, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {5, 10, 5}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {11, 22, 11}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {22, 46, 22}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {20, 40, 20}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {30, 61, 30}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {1, 3, 1}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {0, 1, 0}, {0, 0, 0}, {0, 0, 0}, {31, 63, 31}, {28, 57, 28}, {31, 63, 31}, {31, 63, 31}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {4, 8, 4}, {0, 0, 0}, {31, 63, 31}, {31, 63, 31}, {0, 0, 0}, {0, 0, 0}, {31, 63, 31}, {31, 63, 31}},
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {12, 24, 12}, {0, 0, 0}, {31, 63, 31}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {31, 63, 31}},
    {{0, 0, 0}, {0, 0, 0}, {7, 14, 7}, {31, 63, 31}, {30, 62, 30}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {7, 16, 7}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {31, 63, 31}},
    {{0, 0, 0}, {0, 0, 0}, {26, 53, 26}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {1, 2, 1}, {0, 0, 0}, {0, 0, 0}, {2, 5, 2}, {0, 0, 0}, {31, 63, 31}},
    {{0, 0, 0}, {0, 0, 0}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {30, 62, 30}, {16, 32, 16}, {0, 0, 0}, {0, 0, 0}, {1, 3, 1}, {28, 58, 28}, {31, 63, 31}},
    {{0, 0, 0}, {2, 4, 2}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {23, 47, 23}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {0, 0, 0}, {1, 2, 1}, {31, 63, 31}, {31, 63, 31}, {22, 46, 22}},
    {{0, 0, 0}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {23, 47, 23}, {12, 24, 12}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {0, 0, 0}},
    {{0, 0, 0}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {4, 10, 4}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {29, 59, 29}, {0, 0, 0}, {0, 0, 0}},
    {{2, 4, 2}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {0, 1, 0}, {0, 1, 0}, {25, 51, 25}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {31, 63, 31}, {4, 9, 4}, {0, 0, 0}, {0, 0, 0}}
};

#endif
