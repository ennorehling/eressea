/* vi: set ts=2:
 *
 * 
 * Eressea PB(E)M host Copyright (C) 1998-2000
 *      Christian Schlittchen (corwin@amber.kn-bremen.de)
 *      Katja Zedel (katze@felidae.kn-bremen.de)
 *      Henning Peters (faroul@beyond.kn-bremen.de)
 *      Enno Rehling (enno@eressea-pbem.de)
 *      Ingo Wilken (Ingo.Wilken@informatik.uni-oldenburg.de)
 *
 * This program may not be used, modified or distributed without
 * prior permission by the authors of Eressea.
 */

#if GROWING_TREES
extern struct item_type it_seed;
extern struct resource_type rt_seed;
extern void init_seed(void);

extern struct item_type it_mallornseed;
extern struct resource_type rt_mallornseed;
extern void init_mallornseed(void);
#else
#error seed.h should not be included when building with GROWING_TREES==0
#endif
