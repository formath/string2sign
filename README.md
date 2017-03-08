# string2sign
Generate balanced uint64 hash for string. It's very efficient in the generation of feature id in machine learning. Several companies, such as Baidu and Meituan, have beening used this widely in ads ctr prediction and other products.

For use, please include include/ul_sign.h and call this function. 
```c
int create_sign_fs64(const char* psrc, int slen, uint64_t* sign);
```

> * psrc: input string
> * slen: input string length
> * sign: uint64_t sign
> * return value: 0 successful, others failed
