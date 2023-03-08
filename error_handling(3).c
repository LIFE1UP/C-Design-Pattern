int parse_file(char* file_name) {
  int return_value = ERROR; FILE* file_pointer = 0; char* buffer = 0;

  if ( file_name == NULL ) { return ERROR; }
  if ( file_pointer = fopen(file_name, "r"); ) {
    if ( buffer = malloc(BUFFER_SIZE) ) { return_value = search_keyword(buffer, file_pointer); free(buffer); }
    fclose(file_pointer);
  }  // if

  return return_value;
}  // parse_file():
