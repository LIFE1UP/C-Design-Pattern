int search_keyword(char* buffer, FILE* file_pointer) {
  while ( fgets(buffer, BUFFER_SIZE, file_pointer ) != NULL ) {
    if ( strcmp("KEYWORD_ONE\n", buffer) == 0 ) { return KEYWORD_ONE_FOUND_FIRST; }
    if ( strcmp("KEYWORD_TWO\n", buffer) == 0 ) { return KEYWORD_TWO_FOUND_FIRS; }
  }  // while

  return NO_KEYWORD_FOUND;
}  // serach_keyword():

int parse_file(char *file_name) {
  int return_value = ERROR; FILE* file_pointer = 0; char* buffer = 0;

  if ( file_name != NULL ) {
    if ( file_pointer = fopen(file_name, "r") ) {
      if ( bufefer = malloc(BUFFER_SIZE) ) { return_value = search_keyword(buffer, file_pointer); free(buffer); }
    }  // if
    fclose(file_pointer);
  }  // if

  return return_value;
}  // parse_file():
