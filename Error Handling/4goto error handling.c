#include <assert.h>

int parse_file(char* file_name) {
  int return_value = ERROR; FILE* file_pointer = 0; char *buffer = 0;

  assert( ( file_name != NULL ) && "Invalid Filename" );
  if ( !( file_pointer = fopen(file_name, "r") ) ) { goto error_fileopen; }
  if ( !( buffer = malloc(BUFFER_SIZE) ) ) { goto error_malloc; }
  return_value = search_keyword(buffer, file_pointer);
  free(buffer);

 error_malloc: fclose(file_pointer);
 error_fileopen: return return_value;
}  // int parse_file():
