/* -*- compile-command: "R CMD INSTALL .." -*- */

#define ERROR_PENALTY_NOT_FINITE 1
#define ERROR_PENALTY_NEGATIVE 2
#define ERROR_UNABLE_TO_OPEN_BEDGRAPH 3
#define ERROR_NOT_ENOUGH_COLUMNS 4
#define ERROR_NON_INTEGER_DATA 5
#define ERROR_INCONSISTENT_CHROMSTART_CHROMEND 6

int PeakSegFPOP_disk(char *, char *);

