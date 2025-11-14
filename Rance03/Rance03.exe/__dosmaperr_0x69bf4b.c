// 函数: __dosmaperr
// 地址: 0x69bf4b
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*___doserrno() = arg1
int32_t eax_1 = __get_errno_from_oserr(arg1)
void* result = __errno()
*result = eax_1
return result
