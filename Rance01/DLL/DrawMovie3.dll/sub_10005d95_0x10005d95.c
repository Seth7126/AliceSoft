// 函数: sub_10005d95
// 地址: 0x10005d95
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

if (data_10023520 == 3)
    int32_t i = 0
    
    if (data_10023508 s> 0)
        void* esi_2 = data_1002350c + 0x10
        
        do
            VirtualFree(*(esi_2 - 4), 0, MEM_RELEASE)
            HeapFree(data_100221d4, HEAP_NONE, *esi_2)
            esi_2 += 0x14
            i += 1
        while (i s< data_10023508)
    
    HeapFree(data_100221d4, HEAP_NONE, data_1002350c)

BOOL result = HeapDestroy(data_100221d4)
data_100221d4 = 0
return result
