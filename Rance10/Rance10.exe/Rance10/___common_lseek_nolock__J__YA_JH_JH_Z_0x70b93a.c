// 函数: ??$common_lseek_nolock@_J@@YA_JH_JH@Z
// 地址: 0x70b93a
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t newFilePointer = arg3
int32_t edi
int32_t var_14 = edi
HANDLE hFile = __get_osfhandle(arg4)
int32_t result

if (hFile != 0xffffffff)
    int32_t var_20_1 = arg6
    
    if (SetFilePointerEx(hFile, arg5, &newFilePointer, arg7) == 0)
        ___acrt_errno_map_os_error(GetLastError())
        result = 0xffffffff
    else if ((newFilePointer & arg3) == 0xffffffff)
        result = 0xffffffff
    else
        result = newFilePointer
        int32_t esi_2 = (arg4 & 0x3f) * 0x30
        int32_t ecx_4 = (&data_7fc718)[arg4 s>> 6]
        *(ecx_4 + esi_2 + 0x28) &= 0xfd
else
    *__errno() = 9
    result = 0xffffffff

return result
