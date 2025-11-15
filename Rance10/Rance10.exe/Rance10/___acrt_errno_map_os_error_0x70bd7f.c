// 函数: ___acrt_errno_map_os_error
// 地址: 0x70bd7f
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*___doserrno() = arg1
int32_t eax_1 = ___acrt_errno_from_os_error(arg1)
int32_t* result = __errno()
*result = eax_1
return result
