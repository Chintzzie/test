n1=0;
n2=1;
i=1;
n3=0;
echo "Enter the size of series";
read size;
echo 0;
while  [ $i -le $size ]    
do
    echo $n2;
    n3=` expr $n2 + $n1 `;
    n1=$n2;
    n2=$n3;
    i=` expr $i + 1 ` ;
done