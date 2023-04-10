/* File:
 *   esp32-heltec-epd/heltec_epd.h
 * Description:
 *   Header with public functions from esp32-heltec-epd, ESP32 component for
 *   driving Heltec ePaper displays.
 *
 * "esp32-heltec-epd" Copyright (c) 2023 Joshua Stockin
 * <josh@joshstock.in> [https://joshstock.in] [https://github.com/JoshuaS3]
 *
 * This software is licensed and distributed under the terms of the MIT License.
 * See the MIT License in the LICENSE file of this project's root folder.
 *
 * This comment block and its contents, including this disclaimer, MUST be
 * preserved in all copies or distributions of this software's source.
 */

#pragma once
#ifndef INCLUDE__ESP32_HELTEC_EPD_H
#define INCLUDE__ESP32_HELTEC_EPD_H

#include <stdint.h>

// structure containing canvas metadata, screen buffer data
typedef struct epd_canvas {
    uint16_t width;
    uint16_t height;
    uint8_t pixel_depth; // number of bits per pixel
    uint8_t *buffer;
} epd_canvas;

epd_canvas *epd_canvas_create( uint32_t width, uint32_t height, uint8_t pixel_depth );
void epd_canvas_pixel_set( epd_canvas *canvas, uint32_t pixel_x, uint32_t pixel_y, uint32_t value );
uint32_t epd_canvas_pixel_get( epd_canvas *canvas, uint32_t pixel_x, uint32_t pixel_y );


#endif
