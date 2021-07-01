c++ $1 2> error
if [ $? == 0 ]
then
    echo -e 'paste your input:\n'
    cat > input
    ./a.out < input > output
    echo 'Output'
    cat output
fi
cat error
exit