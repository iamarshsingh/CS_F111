echo "Please Enter a number:-"
read num
n=$num
len=`expr $(echo "$num" | wc -c) - 1`
sum=0
while test $len -gt 0
do
	tnum=`expr $num % 10`
	sum=`expr $sum + $tnum`
	len=`expr $len - 1`
	num=`expr $num / 10`
done

fsum=$sum
rev=0
len=`expr $(echo "$sum" | wc -c) - 1`
while test $len -gt 0
do
	tnum=`expr $sum % 10`
	rev=`expr $rev \* 10`
	rev=`expr $rev + $tnum`
	len=`expr $len - 1`
	sum=`expr $sum / 10`
done
if test `expr $fsum \* $rev` -eq $n
then
echo "$n is a magic number"
else
echo "$n is not a magic number"
fi
