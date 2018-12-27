a):unsigned int values [SIZE] = {2,4,6,8,10 };
b):unsigned int *vPtr;
c):for ( size_t i=0;i<size;++i )
        cout << values[ i ] <<' ';
d):vPtr = values;
   vPtr = &values[ 0 ];
e):for( size_t j=0;j<size;++j)
       cout << *( vPtr + j) <<' ';
f):for( size_t k=0;k<size;++k)
       cout << *( values + k) <<' ';
g):for( size_t m=0;m<size;++m)
       cout <<vPtr[ m ] <<' ';
h):values [ 4 ]
   *( values + 4)
   vPtr [ 4 ]
   *( vPtr + 4)
i): 引用的地址是 1002500 + 3*2 =1002506
    该位置存储的值是 values[ 3 ]
j):  values[ 4 ]的地址是 1002500 +4*2 =1002508
     执行 vPtr -=4 之后，地址是 1002508-4*2=1002500
     存储的值是 values[ 0 ]
