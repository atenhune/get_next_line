make -C libft/ fclean && make -C libft/
clang -Wall -Wextra -Werror -I libft/includes -o get_next_line.o -c get_next_line.c
clang -Wall -Wextra -Werror -I libft/includes -o main.o -c main.c
clang -o test_gnl main.o get_next_line.o -I libft/includes -L libft/ -lft
echo '\n------------BASIC TESTS--------------\n\n'
echo '~~~FROM STDOUT~~~'
echo '\n\n'
cat oneline8c.txt | ./test_gnl
echo '\n\n'
cat twolines8c.txt | ./test_gnl
echo '\n\n'
cat manylines8c.txt | ./test_gnl
echo '\n\n'
clang -Wall -Wextra -Werror -I libft/includes -o main2.o -c main2.c
clang -o test_gnl main2.o get_next_line.o -I libft/includes -L libft/ -lft
echo '~~~FROM A FILE~~~'
echo '\n\n'
./test_gnl oneline8c.txt
echo '\n\n'
./test_gnl twolines8c.txt
echo '\n\n'
./test_gnl manylines8c.txt
echo '\n\n'
echo '------------MIDDLE TESTS--------------\n\n'
echo '~~~FROM A FILE~~~'
echo '\n\n'
./test_gnl oneline16c.txt
echo '\n\n'
./test_gnl twolines16c.txt
echo '\n\n'
./test_gnl manylines16c.txt
echo '\n\n'
clang -Wall -Wextra -Werror -I libft/includes -o main.o -c main.c
clang -o test_gnl main.o get_next_line.o -I libft/includes -L libft/ -lft
echo '~~~FROM STDOUT~~~'
echo '\n\n'
cat oneline16c.txt | ./test_gnl
echo '\n\n'
cat twolines16c.txt | ./test_gnl
echo '\n\n'
cat manylines16c.txt | ./test_gnl
echo '\n\n'
echo '------------ADVANCED TESTS--------------\n\n'
clang -Wall -Wextra -Werror -I libft/includes -o main2.o -c main2.c
clang -o test_gnl main2.o get_next_line.o -I libft/includes -L libft/ -lft
echo '~~~FROM A FILE~~~'
echo '\n\n'
./test_gnl oneline4c.txt
echo '\n\n'
./test_gnl twolines4c.txt
echo '\n\n'
./test_gnl manylines4c.txt
echo '\n\n'
clang -Wall -Wextra -Werror -I libft/includes -o main.o -c main.c
clang -o test_gnl main.o get_next_line.o -I libft/includes -L libft/ -lft
echo '~~~FROM STDOUT~~~'
echo '\n\n'
cat oneline4c.txt | ./test_gnl
echo '\n\n'
cat twolines4c.txt | ./test_gnl
echo '\n\n'
cat manylines4c.txt | ./test_gnl
echo '\n\n'
clang -Wall -Wextra -Werror -I libft/includes -o main2.o -c main2.c
clang -o test_gnl main2.o get_next_line.o -I libft/includes -L libft/ -lft
echo '~~~FROM A FILE~~~'
echo '\n\n'
./test_gnl nolinefeed4c.txt
echo '\n\n'
./test_gnl nolinefeed8c.txt
echo '\n\n'
./test_gnl nolinefeed16c.txt
echo '\n\n'
./test_gnl emptyline.txt
echo '\n\n'

