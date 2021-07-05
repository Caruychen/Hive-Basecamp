make clean
make
printf "Testing 1 + 1, expect 2: "
./do-op 1 + 1
printf "Testing 42amis - -20toto12, expect 62: "
./do-op 42amis - -20toto12
printf "Testing 1 p 1, expect 0: "
./do-op 1 p 1
printf "Testing 1 + toto3, expect 1: "
./do-op 1 + toto3
printf "Testing toto3 + 4, expect 4: "
./do-op toto3 + 4
printf "Testing foo plus bar, expect 0: "
./do-op foo plus bar
printf "Testing 25 / 0, expect Stop: "
./do-op 25 / 0
echo -n 'Testing 25 % 0, expect Stop: '
./do-op 25 % 0
printf "Testing 5 * 5, expect 25: "
./do-op 5 '*' 5
printf "Testing 5 * 0, expect 0: "
./do-op 5 '*' 0
printf "Testing 5 * -1, expect -5: "
./do-op 5 '*' -1
printf "Testing 0 / 42, expect 0: "
./do-op 0 / 42