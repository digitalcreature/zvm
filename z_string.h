#ifndef Z_STRING_H
#define Z_STRING_H

#include "z_object.h"

struct z_string {
	z_size_t length;
	z_hash_t hash;
	char *chars;
}

#endif
