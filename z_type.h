#ifndef Z_TYPE_H
#define Z_TYPE_H

#include <stdint.h>

typedef uint64_t z_size_t;						// sizes of objects
typedef int64_t z_int_t;						// integer values
typedef double z_float_t;						// floating point values

typedef uint64_t z_hash_t;						// hash values

typedef uint64_t z_aindex_t;					// absolute indices
typedef int64_t z_rindex_t;					// relative indices

typedef enum {
	Z_BOOL_FALSE = 0,
	Z_BOOL_TRUE = 1
} z_bool_t;											// boolean values

typedef struct z_state z_state_t;
typedef z_size_t z_cfunc_t(struct z_state *Z);

typedef struct z_obj z_obj_t;

typedef enum {
	// normal (user) types
	Z_NIL_T = 0,
	Z_INT_T,
	Z_FLOAT_T,
	Z_BOOL_T,
	Z_OBJ_T,
	// special types
	Z_TUPLE_T,
} z_type_t;

typedef struct z_value {
	z_type_t type;
	union {
		z_int_t int_v;
		z_float_t float_v;
		z_bool_t bool_v;
		z_size_t size_v;
		z_obj_t *obj_v;
	};
} z_value_t;

#endif
