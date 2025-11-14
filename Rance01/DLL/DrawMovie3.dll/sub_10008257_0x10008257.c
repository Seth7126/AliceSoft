// 函数: sub_10008257
// 地址: 0x10008257
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t eax_7 = data_10023518
int32_t esi = data_10023508

if (esi != eax_7)
    goto label_100082a1

int32_t eax_2 = HeapReAlloc(data_100221d4, HEAP_NONE, data_1002350c, (eax_7 + 0x10) * 0x14)

if (eax_2 != 0)
    data_10023518 += 0x10
    esi = data_10023508
    data_1002350c = eax_2
label_100082a1:
    int32_t* result = esi * 0x14 + data_1002350c
    int32_t eax_3 = HeapAlloc(data_100221d4, HEAP_ZERO_MEMORY, 0x41c4)
    result[4] = eax_3
    
    if (eax_3 != 0)
        int32_t eax_4 = VirtualAlloc(nullptr, 0x100000, MEM_RESERVE, PAGE_READWRITE)
        result[3] = eax_4
        
        if (eax_4 != 0)
            result[2] = 0xffffffff
            *result = 0
            result[1] = 0
            data_10023508 += 1
            *result[4] = 0xffffffff
            return result
        
        HeapFree(data_100221d4, HEAP_NONE, result[4])

return nullptr
