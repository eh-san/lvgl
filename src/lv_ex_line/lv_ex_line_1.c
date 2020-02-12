#include "lvgl/lvgl.h"
#if LV_USE_LINE

void lv_ex_line_1(void)
{
    /*Create an array for the points of the line*/
    static lv_point_t line_points[] = { {5, 5}, {70, 70}, {120, 10}, {180, 60}, {240, 10} };

    /*Create style*/
    static lv_style_t style_line;
    lv_style_init(&style_line);
    lv_style_set_line_width(&style_line, LV_STYLE_STATE_NORMAL, 8);
    lv_style_set_line_color(&style_line, LV_STYLE_STATE_NORMAL, LV_COLOR_BLUE);
    lv_style_set_line_rounded(&style_line, LV_STYLE_STATE_NORMAL, true);

    /*Create a line and apply the new style*/
    lv_obj_t * line1;
    line1 = lv_line_create(lv_scr_act(), NULL);
    lv_line_set_points(line1, line_points, 5);     /*Set the points*/
    lv_obj_add_style(line1, LV_LINE_PART_MAIN, &style_line);     /*Set the points*/
    lv_obj_align(line1, NULL, LV_ALIGN_CENTER, 0, 0);
}

#endif
