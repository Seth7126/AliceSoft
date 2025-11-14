// 函数: sub_100037d7
// 地址: 0x100037d7
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

uint32_t dwBytes_1 = arg1

if (dwBytes_1 u> 0xffffffe0)
    sub_100038b0(dwBytes_1)
    *__errno() = 0xc
    return nullptr

int32_t edi
int32_t var_10_1 = edi

while (data_100221d4 != 0)
    int32_t eax_2 = data_10023520
    void* result
    
    if (eax_2 != 1)
        if (eax_2 == 3)
            result = sub_10003788(dwBytes_1)
        
        if (eax_2 != 3 || result == 0)
            if (dwBytes_1 == 0)
                dwBytes_1 += 1
            
            result = HeapAlloc(data_100221d4, HEAP_NONE, (dwBytes_1 + 0xf) & 0xfffffff0)
    else
        uint32_t dwBytes
        
        dwBytes = dwBytes_1 == 0 ? 1 : dwBytes_1
        
        result = HeapAlloc(data_100221d4, HEAP_NONE, dwBytes)
    
    if (result != 0)
        return result
    
    if (data_100223d8 == result)
        *__errno() = 0xc
        *__errno() = 0xc
        return result
    
    if (sub_100038b0(arg1) == 0)
        *__errno() = 0xc
        return result
    
    dwBytes_1 = arg1

HANDLE eax_1
uint32_t ecx_1
int32_t edx
eax_1, ecx_1, edx = __FF_MSGBANNER()
sub_10002e04(eax_1, edx, ecx_1, 0x1e)
__endthreadex(0xff)
noreturn
