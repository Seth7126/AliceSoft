// 函数: sub_6b3120
// 地址: 0x6b3120
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t (* var_4_1)[0x4] = arg1
uint32_t ebx = (*arg1)[0x1a]
sub_6b30b0(arg1)
uint32_t eax = (*arg1)[0x11]

if (eax != 0)
    _free(eax)

if (ebx != 0)
    int32_t i = 0
    int32_t* esi_1 = ebx + 0xc
    
    do
        void* ebx_1 = *esi_1
        int32_t eax_1 = *(ebx_1 + 8)
        
        if (eax_1 != 0)
            _free(eax_1)
        
        __builtin_memset(ebx_1, 0, 0x14)
        
        if (i != 7)
            _free(*esi_1)
        
        i += 1
        esi_1 = &esi_1[1]
    while (i s< 0xf)
    
    _free(ebx)

_memset(arg1, 0, 0x70)
return 0
