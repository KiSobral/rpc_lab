/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "lab.h"

bool_t
xdr_operandos (XDR *xdrs, operandos *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_vector (xdrs, (char *)objp->v, 10,
		sizeof (float), (xdrproc_t) xdr_float))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->len))
		 return FALSE;
	return TRUE;
}
