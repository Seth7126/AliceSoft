// 函数: __beginthreadex
// 地址: 0x69b75e
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx = arg3
enum WIN32_ERROR edi = NO_ERROR

if (ebx == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return nullptr

void* lpParameter = sub_69e723(1, 0x3bc)

if (lpParameter != 0)
    __initptd(lpParameter, __getptd()[0x1b])
    *(lpParameter + 4) = 0xffffffff
    *(lpParameter + 0x58) = arg4
    int32_t* lpThreadId = arg6
    *(lpParameter + 0x54) = ebx
    
    if (lpThreadId == 0)
        lpThreadId = &arg3
    
    HANDLE result = CreateThread(arg1, arg2, __threadstartex@4, lpParameter, arg5, lpThreadId)
    
    if (result != 0)
        return result
    
    edi = GetLastError()

_free(lpParameter)

if (edi != NO_ERROR)
    __dosmaperr(edi)

return nullptr
