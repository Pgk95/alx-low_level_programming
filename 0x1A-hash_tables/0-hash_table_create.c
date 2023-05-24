#include <stdlib.h>
#include "hash_tables.h"

hash_tables_t *hash_tables_create(unsigned long int size) {
    // Allocate memory for the hash table structure
    hash_tables_t *ht = malloc(sizeof(hash_tables_t));
    if (ht == NULL) {
        return NULL; // Could not allocate memory for the hash table
    }

    // Allocate memory for the array of pointers to linked lists
    ht->array = malloc(size * sizeof(hash_node_t *));
    if (ht->array == NULL) {
        free(ht); // Could not allocate memory for the array, free the hash table
        return NULL;
    }

    // Initialize all pointers in the array to NULL
    for (unsigned long int i = 0; i < size; i++) {
        ht->array[i] = NULL;
    }

    ht->size = size;
    return ht;
}
