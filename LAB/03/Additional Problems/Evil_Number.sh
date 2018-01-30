echo "Please Enter a number:-"
read n
num=2
while test $num -le $n
do
bnum=$(echo "obase=2;$num" | bc)
len=`expr $(echo $bnum | wc -c) - 1`
ones=0
while test $len -gt 0
do
	l=$(echo "$bnum" | cut -b $len)
	if test $l -eq 1
	then
		ones=`expr $ones + 1`
	fi
	len=`expr $len - 1`
done
if test `expr $ones % 2` -eq 0
then
echo "$num is Evil Number"
fi

num=`expr $num + 1`
done
