#ifndef H_GC_MONSTER
#define H_GC_MONSTER

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

    struct unit;
    struct region;
    struct faction;
    struct order;
    struct locale;
    
    struct unit *spawn_seaserpent(struct region *r, struct faction *f);
    void spawn_dragons(void);
    void monsters_desert(struct faction *monsters);
    
    void monster_kills_peasants(struct unit *u);
    bool monster_is_waiting(const struct unit *u);
    void make_zombie(struct unit * u);

#ifdef __cplusplus
}
#endif
#endif
