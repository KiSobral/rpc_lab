/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "lab.h"


void
prog_110011(char *host)
{
	CLIENT *clnt;
	float  *result_1;
	operandos  findsmallest_110011_arg;
	float  *result_2;
	operandos  findgreatest_110011_arg;

#ifndef	DEBUG
	clnt = clnt_create (host, PROG, VERS, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */

	result_1 = findsmallest_110011(&findsmallest_110011_arg, clnt);
	if (result_1 == (float *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_2 = findgreatest_110011(&findgreatest_110011_arg, clnt);
	if (result_2 == (float *) NULL) {
		clnt_perror (clnt, "call failed");
	}
#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main (int argc, char *argv[])
{
	char *host;

	if (argc < 2) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
	host = argv[1];
	prog_110011 (host);
exit (0);
}
