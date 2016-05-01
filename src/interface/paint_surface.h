#ifndef _PAINT_SURFACE_H
#define _PAINT_SURFACE_H

#include "../common.h"
#include "../world/map.h"

enum
{
    SPR_TERRAIN_GRASS = 1915,
    SPR_TERRAIN_GRASS_GRID = 1934,
    SPR_TERRAIN_GRASS_UNDERGROUND = 1953,
    SPR_TERRAIN_SAND = 1972,
    SPR_TERRAIN_SAND_GRID = 1991,
    SPR_TERRAIN_SAND_UNDERGROUND = 2010,
    SPR_TERRAIN_SAND_RED = 2029,
    SPR_TERRAIN_SAND_RED_GRID = 2048,
    SPR_TERRAIN_SAND_RED_UNDERGROUND = 2067,
    SPR_TERRAIN_SAND_YELLOW = 2086,
    SPR_TERRAIN_SAND_YELLOW_GRID = 2105,
    SPR_TERRAIN_SAND_YELLOW_UNDERGROUND = 2124,
    SPR_TERRAIN_ICE = 2143,
    SPR_TERRAIN_ICE_GRID = 2162,
    SPR_TERRAIN_ICE_UNDERGROUND = 2181,
    SPR_TERRAIN_GRASS_CLUMPS = 2200,
    SPR_TERRAIN_GRASS_CLUMPS_GRID = 2219,
    SPR_TERRAIN_GRASS_CLUMPS_UNDERGROUND = 2238,
    SPR_TERRAIN_GRID = 2257,
    SPR_TERRAIN_GRID_GRID = 2276,
    SPR_TERRAIN_GRID_UNDERGROUND = 2295,
    SPR_TERRAIN_MARTIAN = 2314,
    SPR_TERRAIN_MARTIAN_GRID = 2333,
    SPR_TERRAIN_MARTIAN_UNDERGROUND = 2352,
    SPR_TERRAIN_CHECKERBOARD = 2371,
    SPR_TERRAIN_CHECKERBOARD_GRID = 2390,
    SPR_TERRAIN_CHECKERBOARD_UNDERGROUND = 2409,
    SPR_TERRAIN_CHECKERBOARD_INVERTED = 2428,
    SPR_TERRAIN_CHECKERBOARD_INVERTED_GRID = 2447,
    SPR_TERRAIN_CHECKERBOARD_INVERTED_UNDERGROUND = 2466,
    SPR_TERRAIN_DIRT = 2485,
    SPR_TERRAIN_DIRT_GRID = 2504,
    SPR_TERRAIN_DIRT_UNDERGROUND = 2523,
    SPR_TERRAIN_ROCK = 2542,
    SPR_TERRAIN_ROCK_GRID = 2561,
    SPR_TERRAIN_ROCK_UNDERGROUND = 2580,
    SPR_TERRAIN_SELECTION_PATROL_AREA = 2599,
    SPR_TERRAIN_GRASS_MOWED = 2663,
    SPR_TERRAIN_GRASS_MOWED_GRID = 2682,
    SPR_TERRAIN_GRASS_MOWED_90 = 2701,
    SPR_TERRAIN_GRASS_MOWED_90_GRID = 2720,
    SPR_TERRAIN_GRASS_LENGTH_4_VARIANT_1 = 2739,
    SPR_TERRAIN_GRASS_LENGTH_4_VARIANT_1_GRID = 2758,
    SPR_TERRAIN_GRASS_LENGTH_4_VARIANT_2 = 2777,
    SPR_TERRAIN_GRASS_LENGTH_4_VARIANT_2_GRID = 2796,
    SPR_TERRAIN_GRASS_LENGTH_4_VARIANT_3 = 2815,
    SPR_TERRAIN_GRASS_LENGTH_4_VARIANT_3_GRID = 2834,
    SPR_TERRAIN_GRASS_LENGTH_4_VARIANT_4 = 2853,
    SPR_TERRAIN_GRASS_LENGTH_4_VARIANT_4_GRID = 2872,
    SPR_TERRAIN_GRASS_LENGTH_6_VARIANT_1 = 2891,
    SPR_TERRAIN_GRASS_LENGTH_6_VARIANT_1_GRID = 2910,
    SPR_TERRAIN_GRASS_LENGTH_6_VARIANT_2 = 2929,
    SPR_TERRAIN_GRASS_LENGTH_6_VARIANT_2_GRID = 2948,
    SPR_TERRAIN_GRASS_LENGTH_6_VARIANT_3 = 2967,
    SPR_TERRAIN_GRASS_LENGTH_6_VARIANT_3_GRID = 2986,
    SPR_TERRAIN_GRASS_LENGTH_6_VARIANT_4 = 3005,
    SPR_TERRAIN_GRASS_LENGTH_6_VARIANT_4_GRID = 3024,
    SPR_TERRAIN_SELECTION_CORNER = 3043,
    SPR_TERRAIN_SELECTION_EDGE = 3062,
    SPR_TERRAIN_SELECTION_QUARTER = 3081,
    SPR_WATER_MASK = 5048,
    SPR_WATER_OVERLAY = 5053,
    SPR_HEIGHT_MARKER_BASE = 5769,
    SPR_TERRAIN_EDGE_MASK_TOP_RIGHT = 28883,
    SPR_TERRAIN_EDGE_MASK_BOTTOM_RIGHT = 28902,
    SPR_TERRAIN_EDGE_MASK_BOTTOM_LEFT = 28921,
    SPR_TERRAIN_EDGE_MASK_TOP_LEFT = 28940,
    SPR_TERRAIN_PATTERN_GRASS = 28959,
    SPR_TERRAIN_PATTERN_SAND = 28965,
    SPR_TERRAIN_PATTERN_SAND_RED = 28971,
    SPR_TERRAIN_PATTERN_DIRT = 28977,
    SPR_TERRAIN_PATTERN_SAND_YELLOW = 28983,
    SPR_TERRAIN_PATTERN_ROCK = 28989,
    SPR_TERRAIN_PATTERN_MARTIAN = 28995,
    SPR_TERRAIN_PATTERN_GRASS_CLUMPS = 29001,
    SPR_TERRAIN_PATTERN_ICE = 29007,
};

void viewport_surface_paint_setup(uint8 direction, uint16 height, rct_map_element *mapElement);

#endif //_PAINT_SURFACE_H
