// 函数: sub_1000936b
// 地址: 0x1000936b
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t distanceToMoveHigh = arg3
int32_t var_c = arg3
int32_t edi
int32_t var_14 = edi
distanceToMoveHigh = arg6
HANDLE hFile = sub_1000b0f9(arg4)
uint32_t result

if (hFile != 0xffffffff)
    uint32_t result_1 = SetFilePointer(hFile, arg5, &distanceToMoveHigh, arg7)
    enum WIN32_ERROR eax_3
    
    if (result_1 == 0xffffffff)
        eax_3 = GetLastError()
    
    if (result_1 != 0xffffffff || eax_3 == NO_ERROR)
        char* eax_7 = (&data_10023540)[arg4 s>> 5] + ((arg4 & 0x1f) << 6) + 4
        *eax_7 &= 0xfd
        result = result_1
    else
        ___acrt_errno_map_os_error(eax_3)
        result = 0xffffffff
else
    *__errno() = 9
    result = 0xffffffff

return result
