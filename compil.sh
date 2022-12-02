#! /bin/bash
compil(){

if [-z $2]
#then
#echo gcc -Wextra -Wall -Werror $1 -o $2 && ./$2

#else 
echo "gcc -Wextra -Wall -Werror $1 && ./a.out"
fi
}
