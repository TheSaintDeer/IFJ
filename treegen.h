#include <stdio.h>
#include <stdlib.h>
#include "scanner.h"

typedef struct bst_node
{
    Token token;                // kľúč
    struct bst_node *op1; // условие
    struct bst_node *op2;     // внутри
    struct bst_node *op3;     // else
    struct bst_node *next;    // pravý potomok
} bst_node_t;