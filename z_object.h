#ifndef Z_OBJECT_H
#define Z_OBJECT_H

#include "z_type.h"

typedef enum {
	Z_OBJ_STRING_T,
	Z_OBJ_TABLE_T,
	Z_OBJ_FUNC_T
} z_obj_type_t;

typedef struct z_string z_string_t;
typedef struct z_table z_table_t;
typedef struct z_func z_func_t;

struct z_obj {
	z_obj_type_t type;
	union {
		z_string_t *string_v;
		z_table_t *table_v;
		z_func_t *func_v;
	};
};

#endif
