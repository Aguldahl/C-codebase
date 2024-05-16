typedef void *ArrayListValue;

typedef struct _ArrayList {

  ArrayListValue *data;
  unsigned int length;
  // Allocated length of the array
  unsigned int _alloced;

} ArrayList, Stack;

/**
 * Allocates a new ArrayList with the given initial length
 * @param length The initial length of the ArrayList
 * @return The new ArrayList
 */
ArrayList *arraylist_new(unsigned int length);

/**
 * Frees and destroys the given ArrayList
 * @param list
 */
void arraylist_free(ArrayList *list);

/**
 * Appends the given value to the end of the ArrayList
 * @param list The ArrayList to append to
 * @param value The value to append
 * @return 1 if successful, 0 if there was an error
 */
int arraylist_append(ArrayList *list, ArrayListValue value);

/**
 * Prepends the given value to the start of the ArrayList
 * @param list The ArrayList to prepend to
 * @param value The value to prepend
 * @return 1 if successful, 0 if there was an error
 */
int arraylist_prepend(ArrayList *list, ArrayListValue value);

/**
 * Inserts the given value at the given index in the ArrayList
 * @param list The ArrayList to insert into
 * @param value The value to insert
 * @param index The index to insert at
 * @return 1 if successful, 0 if there was an error
 */
int arraylist_insert(ArrayList *list, ArrayListValue value, unsigned int index);
