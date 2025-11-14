// 函数: _realloc
// 地址: 0x69ca71
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 == 0)
    return _malloc(arg2)

uint32_t dwBytes = arg2

if (dwBytes == 0)
    _free(arg1)
    return 0

while (true)
    if (dwBytes u> 0xffffffe0)
        __callnewh(dwBytes)
        *__errno() = 0xc
        break
    
    if (dwBytes == 0)
        dwBytes += 1
    
    int32_t result = HeapReAlloc(data_75cb40, HEAP_NONE, arg1, dwBytes)
    
    if (result != 0)
        return result
    
    if (data_75d178 == result)
        void* eax_8 = __errno()
        *eax_8 = __get_errno_from_oserr(GetLastError())
        return result
    
    if (__callnewh(dwBytes) == 0)
        void* eax_5 = __errno()
        *eax_5 = __get_errno_from_oserr(GetLastError())
        break

return 0
