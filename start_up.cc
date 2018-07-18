#include <iostream>
#include <cstdlib>
#include <uv.h>

using namespace std;

int main(int argc, char **argv) {
  uv_loop_t *loop = (uv_loop_t*) malloc(sizeof(uv_loop_t));
  uv_loop_init(loop);

  cout << ("Now quitting!\n") << endl;

  uv_run(loop, UV_RUN_DEFAULT);
  uv_loop_close(loop);
  free(loop);
  return 0;
}