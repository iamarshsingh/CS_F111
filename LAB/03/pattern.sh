echo "Please give a odd number:-"
read num
fnum=`expr $num / 2`
tnum=$fnum
n=-1
while test $tnum -ge 0
do
i=0
b=0
n=`expr $n + 2`	
str=""
	while test $tnum -gt $i
	do
		str="$str\t"
		i=`expr $i + 1`
	done

	while test $n -gt $b
	do
		str="$str*\t"
		b=`expr $b + 1`
	done
echo $str

tnum=`expr $tnum - 1`
done

tnum=1

while test $tnum -le $fnum
do
i=0
b=0
n=`expr $n - 2`
str=""
	while test $tnum -gt $i
	do
		str="$str\t"
		i=`expr $i + 1`
	done

	while test $n -gt $b
	do
		str="$str*\t"
		b=`expr $b + 1`
	done
echo $str	
tnum=`expr $tnum + 1`
done

