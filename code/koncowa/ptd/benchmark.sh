make main -B
make main_exe_0
for i in $(seq 1 10)
do
	(time ./main) 2>&1 | grep real | cut -f 2 | tr m " "
done

echo ""

make main_exe_2
for i in $(seq 1 10)
do
	(time ./main) 2>&1 | grep real | cut -f 2 | tr m " "
done
