 #!/bin/bash

printf "running 10x10 image ....\n"
build/./main.py test/tiny.png test/tiny_out.png < docs/in

printf "\n"

printf "running 15x15 image ....\n"
build/./main.py test/small.png test/small_out.png < docs/in2


printf "\n"

printf "running 41x41 image ....\n"
build/./main.py test/normal.png test/normal_out.png < docs/in3 

printf "\n"

printf "running 200x200 image ....\n"
build/./main.py test/braid200.png test/braid200_out.png < docs/in7 

printf "\n"

printf "running 400x400 image ....\n"
build/./main.py test/combo400.png test/combo400_out.png < docs/in5


printf "\n"

printf "running 4001x4001 image ....\n"
build/./main.py test/perfect4k.png test/perfect4k_out.png < docs/in4

printf "\n"

printf "running 6001x6001 image ....\n"
build/./main.py test/combo6k.png test/combo6k_out.png < docs/in6 

