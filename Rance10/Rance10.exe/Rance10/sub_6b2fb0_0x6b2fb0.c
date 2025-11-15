// 函数: sub_6b2fb0
// 地址: 0x6b2fb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

_memset(arg2, 0, 0x70)
arg2[4][0] = arg1
(*arg2)[0x13] = 0
(*arg2)[0x11] = 0

if (*arg1 != 0)
    int32_t var_14_1 = 0x48
    int32_t var_18_1 = 1
    uint32_t eax_1 = _calloc()
    (*arg2)[0x1a] = eax_1
    int32_t i = 0
    *(eax_1 + 4) = 0xc61c3c00
    
    do
        if (i != 7)
            int32_t var_14_2 = 0x14
            int32_t var_18_2 = 1
            *(eax_1 + (i << 2) + 0xc) = _calloc()
        else
            *(eax_1 + 0x28) = &(*arg2)[1]
        
        void* esi_1 = *(eax_1 + (i << 2) + 0xc)
        int32_t var_14_3 = 0x100
        __builtin_memset(esi_1, 0, 0x14)
        char* eax_4 = sub_705e22()
        i += 1
        *(esi_1 + 8) = eax_4
        *(esi_1 + 0xc) = eax_4
        *eax_4 = 0
        *(esi_1 + 0x10) = 0x100
    while (i s< 0xf)

return 0
