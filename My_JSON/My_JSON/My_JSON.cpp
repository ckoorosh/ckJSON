/* Cyko_JSON */
/* JSON parser in C :) */


#include "stdafx.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

#define ck_JSON_NULL   0
#define ck_JSON_Number 1
#define ck_JSON_String 2
#define ck_JSON_Array  3
#define ck_JSON_Object 4


/* The ckJSON structure: */

typedef struct ckJSON
{
	/* next/prev pointers as links in the structure allow you to walk array/object chains.*/
	struct ckJSON *next;
	struct ckJSON *prev;

	/* An array or object add will have a child pointer pointing to a add in the array/object. */
	struct ckJSON *child;

	/* The type of the add, as above. */
	int type;

	/* If the type is 2 or ck_JSON_String */
	char *valuestring;

	/* If the type is 1 or ck_JSON_Number */
	double valuedouble;

	/* The add's name */
	char *string;
} ckJSON;
