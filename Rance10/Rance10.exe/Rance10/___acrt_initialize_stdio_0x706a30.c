// 函数: ___acrt_initialize_stdio
// 地址: 0x706a30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = data_7fc474

if (eax == 0)
    eax = 0x200
    data_7fc474 = eax
else if (eax s< 3)
    eax = 3
    data_7fc474 = eax

data_7fc478 = __calloc_base(eax, 4)
__free_base(0)

if (data_7fc478 == 0)
    data_7fc474 = 3
    data_7fc478 = __calloc_base(3, 4)
    __free_base(0)
    
    if (data_7fc478 == 0)
        return 0xffffffff

int32_t edi = 0

for (void* i = &data_7e1430; i != 0x7e14d8; )
    ___acrt_InitializeCriticalSectionEx@12(i + 0x20, 0xfa0, 0)
    *(data_7fc478 + (edi << 2)) = i
    int32_t eax_9 = *((&data_7fc718)[edi s>> 6] + (edi & 0x3f) * 0x30 + 0x18)
    
    if (eax_9 == 0xffffffff || eax_9 == 0xfffffffe || eax_9 == 0)
        *(i + 0x10) = 0xfffffffe
    
    i += 0x38
    edi += 1

return 0
