int parse_file(char* file_name) {
  int return_value = ERROR;
  FILE* file_pointer = 0;
  char* buffer = 0;

  if ( file_name != NULL ) {
    if ( file_pointer = fopen(file_name, "r") ) {
      if ( buffer = malloc(BUFFER_SIZE) ) {
	return_value = NO_KEYWORD_FOUND;
	while ( fgets(buffer, BUFFER_SIZE, file_pointer) != NULL ) {
	  if ( strcmp("keyword1\n") == 0 ) { return_value = KEYWORD_ONE_FOUND_FIRST; break; }
	}  // while
	free(buffer);
x      }  // if
      fclose(file_pointer);
    }  // if
  }  // if

  return return_value;
}  // parse_file(): O(n)
