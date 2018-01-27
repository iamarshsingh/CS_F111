if test $# -ne 1
then
echo "Please enter the input file as parameter"
exit 1
fi

if test -f $1
then
len=$(cat $1 | wc -l)
i=1
touch happy.txt
while test $i -le $len
do
num=$(cat $1 | head -n$i | tail -n1)
n=$num
while :
do

sum=0
	while test $n -ne 0
	do
		temp=`expr $n % 10`
		temp=`expr $temp \* $temp`
		sum=`expr $sum + $temp`
		n=`expr $n / 10`
	done

if test $sum -eq 1 -o $sum -eq 7
then
echo $num >> happy.txt
break

elif test $sum -le 9
then
break

fi

n=$sum

done

i=`expr $i + 1`
done

else
echo "Please pass file name as parameter"
fi
