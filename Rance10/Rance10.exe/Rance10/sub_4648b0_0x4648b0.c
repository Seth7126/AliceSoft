// 函数: sub_4648b0
// 地址: 0x4648b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 == 1)
    char* edx_3 = *(arg2 + 4)
    
    if (&edx_3[4] u<= *(arg2 + 8))
        uint32_t ecx_14 =
            ((zx.d(edx_3[3]) << 8 | zx.d(edx_3[2])) << 8 | zx.d(edx_3[1])) << 8 | zx.d(*edx_3)
        *(arg2 + 4) = &edx_3[4]
        *(arg3 + 0x24) = ecx_14 ^ 0x65656565
        *(arg3 + 8) = 1
        void* eax_9
        eax_9.b = 1
        return eax_9
else if (arg1 == 2)
    char* esi_1 = *(arg2 + 4)
    
    if (&esi_1[4] u<= *(arg2 + 8))
        uint32_t ecx_7 =
            ((zx.d(esi_1[3]) << 8 | zx.d(esi_1[2])) << 8 | zx.d(esi_1[1])) << 8 | zx.d(*esi_1)
        *(arg2 + 4) = &esi_1[4]
        *(arg3 + 0x28) = sub_462f40(ecx_7)
        *(arg3 + 8) = 2
        void* eax_5
        eax_5.b = 1
        return eax_5
else if (arg1 == 3)
    return sub_465370(arg2, arg3)

int32_t eax
eax.b = 0
return eax
