echo "Enter a number"
read number;
i=2 
f=0 
while  [ $i -le `expr $number / 2` ]  
do
if [ ` expr $number % $i` -eq 0 ]  
then
f=1 
fi
i=`expr $i + 1` 
done
if [ $f -eq 1 ]  
then
echo "Not Prime"
else
echo "Prime"
fi