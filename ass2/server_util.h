
/*
 * Kirby Banman
 * 1173895
 *
 * CMPUT 379 EA1
 * Assignment 2
 *
 */

/*
 * Client request struct, to be returned by initial GET parse.
 * - address set according to socket api.
 * - timestring set according to server local time.
 * - requestline set as received.  EX. GET /ex/path.txt HTTP/1.1
 * - resourcepath set from request line (after "GET")
 * - validrequest set nonzero iff entire request is valid HTTP/1.1
 */
typedef struct request {
        char * address;
        char * timestring;
        char * requestline;
        char * resourcepath;
        int validrequest;
} request;

/*
 * Returns a string of the time current when called formatted as:
 *  Www Mmm dd hh:mm:ss yyy
 */
char * currtime();
