#include "lvgl/lvgl.h"
#include "../lv_demo_music.h"
#if LV_USE_DEMO_MUSIC

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

const LV_ATTRIBUTE_MEM_ALIGN uint8_t img_lv_demo_music_corner_right_map[] = {
#if LV_COLOR_DEPTH == 1 || LV_COLOR_DEPTH == 8
  /*Pixel format: Alpha 8 bit, Red: 3 bit, Green: 3 bit, Blue: 2 bit*/
  0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0xff, 0x00, 0x49, 0x04, 
  0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0xff, 0x00, 0x49, 0x13, 
  0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0xff, 0x00, 0x49, 0x2f, 
  0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0xff, 0x00, 0x49, 0x54, 
  0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0xff, 0x00, 0x49, 0x8b, 
  0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0xff, 0x00, 0x49, 0xcc, 
  0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x1f, 0x49, 0xff, 
  0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x7f, 0x49, 0xff, 
  0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x08, 0x49, 0xe8, 0x49, 0xff, 
  0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x98, 0x49, 0xff, 0x49, 0xff, 
  0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x4b, 0x49, 0xff, 0x49, 0xff, 0x49, 0xff, 
  0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x1f, 0x49, 0xe0, 0x49, 0xff, 0x49, 0xff, 0x49, 0xff, 
  0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x33, 0x49, 0xe8, 0x49, 0xff, 0x49, 0xff, 0x49, 0xff, 0x49, 0xff, 
  0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x33, 0x49, 0xec, 0x49, 0xff, 0x49, 0xff, 0x49, 0xff, 0x49, 0xff, 0x49, 0xff, 
  0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x03, 0x49, 0x73, 0x49, 0xf8, 0x49, 0xff, 0x49, 0xff, 0x49, 0xff, 0x49, 0xff, 0x49, 0xff, 0x49, 0xff, 
  0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x2f, 0x49, 0xcf, 0x49, 0xff, 0x49, 0xff, 0x49, 0xff, 0x49, 0xff, 0x49, 0xff, 0x49, 0xff, 0x49, 0xff, 0x49, 0xff, 
  0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x00, 0x49, 0x08, 0x49, 0x50, 0x49, 0xaf, 0x49, 0xfb, 0x49, 0xff, 0x49, 0xff, 0x49, 0xff, 0x49, 0xff, 0x49, 0xff, 0x49, 0xff, 0x49, 0xff, 0x49, 0xff, 0x49, 0xff, 
  0x49, 0x04, 0x49, 0x17, 0x49, 0x3c, 0x49, 0x6b, 0x49, 0xaf, 0x49, 0xf7, 0x49, 0xff, 0x49, 0xff, 0x49, 0xff, 0x49, 0xff, 0x49, 0xff, 0x49, 0xff, 0x49, 0xff, 0x49, 0xff, 0x49, 0xff, 0x49, 0xff, 0x49, 0xff, 0x49, 0xff, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP == 0
  /*Pixel format: Alpha 8 bit, Red: 5 bit, Green: 6 bit, Blue: 5 bit*/
  0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0xff, 0xff, 0x00, 0x89, 0x31, 0x04, 
  0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0xff, 0xff, 0x00, 0x89, 0x31, 0x13, 
  0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0xff, 0xff, 0x00, 0x89, 0x31, 0x2f, 
  0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0xff, 0xff, 0x00, 0x89, 0x31, 0x54, 
  0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0xff, 0xff, 0x00, 0x89, 0x31, 0x8b, 
  0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0xff, 0xff, 0x00, 0x89, 0x31, 0xcc, 
  0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x1f, 0x89, 0x31, 0xff, 
  0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x7f, 0x89, 0x31, 0xff, 
  0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x08, 0x89, 0x31, 0xe8, 0x89, 0x31, 0xff, 
  0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x98, 0x89, 0x31, 0xff, 0x89, 0x31, 0xff, 
  0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x4b, 0x89, 0x31, 0xff, 0x89, 0x31, 0xff, 0x89, 0x31, 0xff, 
  0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x1f, 0x89, 0x31, 0xe0, 0x89, 0x31, 0xff, 0x89, 0x31, 0xff, 0x89, 0x31, 0xff, 
  0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x33, 0x89, 0x31, 0xe8, 0x89, 0x31, 0xff, 0x89, 0x31, 0xff, 0x89, 0x31, 0xff, 0x89, 0x31, 0xff, 
  0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x33, 0x89, 0x31, 0xec, 0x89, 0x31, 0xff, 0x89, 0x31, 0xff, 0x89, 0x31, 0xff, 0x89, 0x31, 0xff, 0x89, 0x31, 0xff, 
  0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x03, 0x89, 0x31, 0x73, 0x89, 0x31, 0xf8, 0x89, 0x31, 0xff, 0x89, 0x31, 0xff, 0x89, 0x31, 0xff, 0x89, 0x31, 0xff, 0x89, 0x31, 0xff, 0x89, 0x31, 0xff, 
  0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x2f, 0x89, 0x31, 0xcf, 0x89, 0x31, 0xff, 0x89, 0x31, 0xff, 0x89, 0x31, 0xff, 0x89, 0x31, 0xff, 0x89, 0x31, 0xff, 0x89, 0x31, 0xff, 0x89, 0x31, 0xff, 0x89, 0x31, 0xff, 
  0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x00, 0x89, 0x31, 0x08, 0x89, 0x31, 0x50, 0x89, 0x31, 0xaf, 0x89, 0x31, 0xfb, 0x89, 0x31, 0xff, 0x89, 0x31, 0xff, 0x89, 0x31, 0xff, 0x89, 0x31, 0xff, 0x89, 0x31, 0xff, 0x89, 0x31, 0xff, 0x89, 0x31, 0xff, 0x89, 0x31, 0xff, 0x89, 0x31, 0xff, 
  0x89, 0x31, 0x04, 0x89, 0x31, 0x17, 0x89, 0x31, 0x3c, 0x89, 0x31, 0x6b, 0x89, 0x31, 0xaf, 0x89, 0x31, 0xf7, 0x89, 0x31, 0xff, 0x89, 0x31, 0xff, 0x89, 0x31, 0xff, 0x89, 0x31, 0xff, 0x89, 0x31, 0xff, 0x89, 0x31, 0xff, 0x89, 0x31, 0xff, 0x89, 0x31, 0xff, 0x89, 0x31, 0xff, 0x89, 0x31, 0xff, 0x89, 0x31, 0xff, 0x89, 0x31, 0xff, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
  /*Pixel format: Alpha 8 bit, Red: 5 bit, Green: 6 bit, Blue: 5 bit  BUT the 2  color bytes are swapped*/
  0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0xff, 0xff, 0x00, 0x31, 0x89, 0x04, 
  0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0xff, 0xff, 0x00, 0x31, 0x89, 0x13, 
  0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0xff, 0xff, 0x00, 0x31, 0x89, 0x2f, 
  0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0xff, 0xff, 0x00, 0x31, 0x89, 0x54, 
  0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0xff, 0xff, 0x00, 0x31, 0x89, 0x8b, 
  0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0xff, 0xff, 0x00, 0x31, 0x89, 0xcc, 
  0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x1f, 0x31, 0x89, 0xff, 
  0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x7f, 0x31, 0x89, 0xff, 
  0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x08, 0x31, 0x89, 0xe8, 0x31, 0x89, 0xff, 
  0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x98, 0x31, 0x89, 0xff, 0x31, 0x89, 0xff, 
  0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x4b, 0x31, 0x89, 0xff, 0x31, 0x89, 0xff, 0x31, 0x89, 0xff, 
  0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x1f, 0x31, 0x89, 0xe0, 0x31, 0x89, 0xff, 0x31, 0x89, 0xff, 0x31, 0x89, 0xff, 
  0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x33, 0x31, 0x89, 0xe8, 0x31, 0x89, 0xff, 0x31, 0x89, 0xff, 0x31, 0x89, 0xff, 0x31, 0x89, 0xff, 
  0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x33, 0x31, 0x89, 0xec, 0x31, 0x89, 0xff, 0x31, 0x89, 0xff, 0x31, 0x89, 0xff, 0x31, 0x89, 0xff, 0x31, 0x89, 0xff, 
  0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x03, 0x31, 0x89, 0x73, 0x31, 0x89, 0xf8, 0x31, 0x89, 0xff, 0x31, 0x89, 0xff, 0x31, 0x89, 0xff, 0x31, 0x89, 0xff, 0x31, 0x89, 0xff, 0x31, 0x89, 0xff, 
  0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x2f, 0x31, 0x89, 0xcf, 0x31, 0x89, 0xff, 0x31, 0x89, 0xff, 0x31, 0x89, 0xff, 0x31, 0x89, 0xff, 0x31, 0x89, 0xff, 0x31, 0x89, 0xff, 0x31, 0x89, 0xff, 0x31, 0x89, 0xff, 
  0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x00, 0x31, 0x89, 0x08, 0x31, 0x89, 0x50, 0x31, 0x89, 0xaf, 0x31, 0x89, 0xfb, 0x31, 0x89, 0xff, 0x31, 0x89, 0xff, 0x31, 0x89, 0xff, 0x31, 0x89, 0xff, 0x31, 0x89, 0xff, 0x31, 0x89, 0xff, 0x31, 0x89, 0xff, 0x31, 0x89, 0xff, 0x31, 0x89, 0xff, 
  0x31, 0x89, 0x04, 0x31, 0x89, 0x17, 0x31, 0x89, 0x3c, 0x31, 0x89, 0x6b, 0x31, 0x89, 0xaf, 0x31, 0x89, 0xf7, 0x31, 0x89, 0xff, 0x31, 0x89, 0xff, 0x31, 0x89, 0xff, 0x31, 0x89, 0xff, 0x31, 0x89, 0xff, 0x31, 0x89, 0xff, 0x31, 0x89, 0xff, 0x31, 0x89, 0xff, 0x31, 0x89, 0xff, 0x31, 0x89, 0xff, 0x31, 0x89, 0xff, 0x31, 0x89, 0xff, 
#endif
#if LV_COLOR_DEPTH == 32
  0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0xff, 0xff, 0xff, 0x00, 0x47, 0x32, 0x34, 0x04, 
  0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0xff, 0xff, 0xff, 0x00, 0x47, 0x32, 0x34, 0x13, 
  0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0xff, 0xff, 0xff, 0x00, 0x47, 0x32, 0x34, 0x2f, 
  0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0xff, 0xff, 0xff, 0x00, 0x47, 0x32, 0x34, 0x54, 
  0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0xff, 0xff, 0xff, 0x00, 0x47, 0x32, 0x34, 0x8b, 
  0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0xff, 0xff, 0xff, 0x00, 0x47, 0x32, 0x34, 0xcc, 
  0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x1f, 0x47, 0x32, 0x34, 0xff, 
  0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x7f, 0x47, 0x32, 0x34, 0xff, 
  0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x08, 0x47, 0x32, 0x34, 0xe8, 0x47, 0x32, 0x34, 0xff, 
  0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x98, 0x47, 0x32, 0x34, 0xff, 0x47, 0x32, 0x34, 0xff, 
  0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x4b, 0x47, 0x32, 0x34, 0xff, 0x47, 0x32, 0x34, 0xff, 0x47, 0x32, 0x34, 0xff, 
  0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x1f, 0x47, 0x32, 0x34, 0xe0, 0x47, 0x32, 0x34, 0xff, 0x47, 0x32, 0x34, 0xff, 0x47, 0x32, 0x34, 0xff, 
  0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x33, 0x47, 0x32, 0x34, 0xe8, 0x47, 0x32, 0x34, 0xff, 0x47, 0x32, 0x34, 0xff, 0x47, 0x32, 0x34, 0xff, 0x47, 0x32, 0x34, 0xff, 
  0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x33, 0x47, 0x32, 0x34, 0xec, 0x47, 0x32, 0x34, 0xff, 0x47, 0x32, 0x34, 0xff, 0x47, 0x32, 0x34, 0xff, 0x47, 0x32, 0x34, 0xff, 0x47, 0x32, 0x34, 0xff, 
  0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x03, 0x47, 0x32, 0x34, 0x73, 0x47, 0x32, 0x34, 0xf8, 0x47, 0x32, 0x34, 0xff, 0x47, 0x32, 0x34, 0xff, 0x47, 0x32, 0x34, 0xff, 0x47, 0x32, 0x34, 0xff, 0x47, 0x32, 0x34, 0xff, 0x47, 0x32, 0x34, 0xff, 
  0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x2f, 0x47, 0x32, 0x34, 0xcf, 0x47, 0x32, 0x34, 0xff, 0x47, 0x32, 0x34, 0xff, 0x47, 0x32, 0x34, 0xff, 0x47, 0x32, 0x34, 0xff, 0x47, 0x32, 0x34, 0xff, 0x47, 0x32, 0x34, 0xff, 0x47, 0x32, 0x34, 0xff, 0x47, 0x32, 0x34, 0xff, 
  0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x00, 0x47, 0x32, 0x34, 0x08, 0x47, 0x32, 0x34, 0x50, 0x47, 0x32, 0x34, 0xaf, 0x47, 0x32, 0x34, 0xfb, 0x47, 0x32, 0x34, 0xff, 0x47, 0x32, 0x34, 0xff, 0x47, 0x32, 0x34, 0xff, 0x47, 0x32, 0x34, 0xff, 0x47, 0x32, 0x34, 0xff, 0x47, 0x32, 0x34, 0xff, 0x47, 0x32, 0x34, 0xff, 0x47, 0x32, 0x34, 0xff, 0x47, 0x32, 0x34, 0xff, 
  0x47, 0x32, 0x34, 0x04, 0x47, 0x32, 0x34, 0x17, 0x47, 0x32, 0x34, 0x3c, 0x47, 0x32, 0x34, 0x6b, 0x47, 0x32, 0x34, 0xaf, 0x47, 0x32, 0x34, 0xf7, 0x47, 0x32, 0x34, 0xff, 0x47, 0x32, 0x34, 0xff, 0x47, 0x32, 0x34, 0xff, 0x47, 0x32, 0x34, 0xff, 0x47, 0x32, 0x34, 0xff, 0x47, 0x32, 0x34, 0xff, 0x47, 0x32, 0x34, 0xff, 0x47, 0x32, 0x34, 0xff, 0x47, 0x32, 0x34, 0xff, 0x47, 0x32, 0x34, 0xff, 0x47, 0x32, 0x34, 0xff, 0x47, 0x32, 0x34, 0xff, 
#endif
};

lv_img_dsc_t img_lv_demo_music_corner_right = {
  .header.always_zero = 0,
  .header.w = 18,
  .header.h = 18,
  .data_size = 324 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
  .data = img_lv_demo_music_corner_right_map,
};

#endif /*LV_USE_DEMO_MUSIC*/


