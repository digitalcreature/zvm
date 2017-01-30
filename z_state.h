#ifndef Z_STATE_H
#define Z_STATE_H

#include "z_type.h"
#include "z_constants.h"

struct z_state {
	z_value_t stack[Z_STACK_MAXSIZE];
	z_aindex_t stackp;
};

z_aindex_t z_rtoa(z_state_t *Z, z_rindex_t r);			// convert relative stack index to absolute stack index
z_aindex_t z_setsp(z_state_t *Z, z_rindex_t stackp);	// set stack pointer
z_aindex_t z_getsp(z_state_t *Z);							// get stack pointer
void z_pushcpy(z_state_t *Z, z_rindex_t i);				// push copy of value at i in stack
void z_pop(z_state_t *Z);										// pop top value of stack
void z_rot(z_state_t *Z, z_size_t n);						// rotate top n stack values upward (towards top of stack)

void z_pushnil(z_state_t *Z);									// push nil
void z_pushint(z_state_t *Z, z_int_t i);					// push an integer
void z_pushfloat(z_state_t *Z, z_float_t f);				// push a float
void z_pushbool(z_state_t *Z, z_bool_t b);				// push a boolean

// object constructors: create object, push reference onto stack
void z_newstring(z_state_t *Z, char *s);					// create new string
void z_newtable(z_state_t *Z, z_size_t startsize);		// create new table with storage for at least [startsize] elements
void z_newcfunc(z_state_t *Z, z_cfunc_t *f);				// create new cfunc

#endif
