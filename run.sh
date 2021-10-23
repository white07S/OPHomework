if [ $# != 1 ]
then
   echo "Error - one parameter expected - release or debug"
   exit 1
fi
if [ "$1" != "debug" ] && [ "$1" != "release" ]
then
   echo "expected to see debug or release"
   exit 1
fi
if [ "$1" == "release" ]
then
	#O3: opti  level 3 and for warnings 
    g++ -std=c++11 -O3 -Wall -Wpedantic -Wextra -Weffc++ ./*.cpp -o homework
elif [ "$1" == "debug" ]
then
    g++ -std=c++11 -O0 -g -Wall -Wpedantic -Wextra -Weffc++ ./*.cpp -o homework 
fi
if [ $? == 0 ]
then
   ./homework
fi