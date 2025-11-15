// 函数: ___vcrt_initialize_locks
// 地址: 0x703151
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = &data_7fc40c
int32_t esi = 0
BOOL result

while (true)
    if (sub_7028c2(edi, 0xfa0, 0) == 0)
        ___vcrt_uninitialize_locks()
        result.b = 0
        break
    
    data_7fc424 += 1
    esi += 0x18
    edi += 0x18
    
    if (esi u>= 0x18)
        result.b = 1
        break

return result
