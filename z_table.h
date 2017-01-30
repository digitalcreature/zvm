#ifndef Z_TABLE_H
#define Z_TABLE_H

#include "z_type.h"
#include "z_object.h"
#include "z_hash.h"

typedef struct {
	z_value_t key;
	z_value_t value;
} z_table_pair_t;

struct z_table {
	z_table_pair_t *elements;
	z_size_t count;
	z_size_t capacity;
}

#endif
