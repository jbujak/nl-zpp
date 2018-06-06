gcc -O0 $1
for i in $(seq 1 10)
do
	(time ./a.out) 2>&1 | grep real | cut -f 2 | tr m " "
done

echo ""

gcc -O2 $1
for i in $(seq 1 10)
do
	(time ./a.out) 2>&1 | grep real | cut -f 2 | tr m " "
done
