// 函数: ___acrt_errno_map_os_error
// 地址: 0x10003cad
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

*___doserrno() = arg1
int32_t eax_1 = sub_10003c45(arg1)
void* result = __errno()
*result = eax_1
return result
