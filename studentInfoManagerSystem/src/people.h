#ifndef __PEOPLE_H__
#define __PEOPLE_H__
#include <glib.h>
#include <glib-object.h>

typedef struct _GPeople GPeople;
typedef struct _GPeopleClass GPeopleClass;

struct _GPeople {
    GObject parent;

};

struct _GPeopleClass {
    GObjectClass parentClass;

};

#endif /*__PEOPLE_H__*/
