#include <assert.h>

int parse_file(char* file_name) {
  int return_value = ERROR; FILE* file_pointer = 0; char *buffer = 0;

  assert( ( file_name != NULL ) && "Invalid Filename" );
  if ( file_pointer = fopen(file_name, "r") ) {
    if ( buffer = malloc(BUFFER_SIZE) ) { return_value = search_keyword(buffer, file_pointer); free(buffer); }
    fclose(file_pointer);
  }  // if
  return return_value;
}  // int parse_file():
