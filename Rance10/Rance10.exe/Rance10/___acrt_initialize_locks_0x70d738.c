// 函数: ___acrt_initialize_locks
// 地址: 0x70d738
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_8 = edi
void* edi_1 = &data_7fc480
int32_t esi = 0
BOOL result

while (true)
    if (___acrt_InitializeCriticalSectionEx@12(edi_1, 0xfa0, 0) == 0)
        ___acrt_uninitialize_locks()
        result.b = 0
        break
    
    data_7fc5b8 += 1
    esi += 0x18
    edi_1 += 0x18
    
    if (esi u>= 0x138)
        result.b = 1
        break

return result
