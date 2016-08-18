# string2sign
generate uint64_t sign for string

For use, please include include/ul_sign.h and call this function. 
int create_sign_fs64(const char* psrc, int slen, uint64_t* sign);

psrc: input string
slen: input string length
sign: uint64_t sign
return value: 0 successful, others failed
