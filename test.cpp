#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void proc_allkeys(char *buf) {

}

int main(void) {
  FILE* fp = fopen("tt.his", "rb");
  int len = 10000;
  char *buf = (char*)malloc(len);
  fread(buf, 1, len, fp);
  for (int i = 0; i < len; i++) {
    if (buf[i] == 'A' && buf[i+1] == 'l' && buf[i+2] == 'l') {
      proc_allkeys(buf+i);
    }
  }

  fclose(fp);
  free(buf);
}
