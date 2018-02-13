if test $# -ne 1
then
	echo "Please enter a valid file name as a single paramter"
else
	arr=($(cat $1))
	len=${#arr[@]}
	len=`expr $len - 1`
	max1=-99999999
	max2=-99999999
	while test $len -ge 0
	do
		if test ${arr[$len]} -gt $max1
		then
			max2=$max1
			max1=${arr[len]}
		elif test ${arr[$len]} -gt $max2
		then
			max2=${arr[len]}
		fi
			len=`expr $len - 1`
	done
	echo $max2
fi
