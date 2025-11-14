// 函数: _malloc
// 地址: 0x69be1e
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 u> 0xffffffe0)
    __callnewh(arg1)
    *__errno() = 0xc
    return 0

int32_t result

while (true)
    HANDLE hHeap = data_75cb40
    
    if (hHeap == 0)
        __FF_MSGBANNER()
        __NMSG_WRITE(0x1e)
        ___crtExitProcess(0xff)
        noreturn
    
    uint32_t dwBytes
    
    dwBytes = arg1 == 0 ? 1 : arg1
    
    result = HeapAlloc(hHeap, HEAP_NONE, dwBytes)
    
    if (result != 0)
        break
    
    if (data_75d178 == result)
        *__errno() = 0xc
    else if (__callnewh(arg1) != 0)
        continue
    
    *__errno() = 0xc
    break

return result
