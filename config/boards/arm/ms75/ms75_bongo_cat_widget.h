#include <lvgl.h>
#include <zephyr/kernel.h>

struct ms75_bongo_cat_widget {
    sys_snode_t node;
    lv_obj_t *obj;
    lv_anim_t anim;
};

int ms75_bongo_cat_widget_init(struct ms75_bongo_cat_widget *widget, lv_obj_t *parent);
lv_obj_t *ms75_bongo_cat_widget_obj(struct ms75_bongo_cat_widget *widget);
