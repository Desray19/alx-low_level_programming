1/bin/bash

gee -Wall -Wextra -Werror -pedantic -c¢ -fPIC *.c
gece -shared -o liball.so *.o

export LD_LIBRARY_PATH=. :$LD_LIBRARY_PATH
