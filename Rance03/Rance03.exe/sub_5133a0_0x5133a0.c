// 函数: sub_5133a0
// 地址: 0x5133a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t esi = arg2
char* ecx = *(esi + 4)
uint32_t* eax

if (&ecx[1] u<= *(esi + 8))
    eax.b = *ecx == 1
    *(arg1 + 0x3c) = eax.b
    *(esi + 4) += 1
    char* edx_1 = *(esi + 4)
    
    if (&edx_1[4] u<= *(esi + 8))
        uint32_t ecx_7 =
            ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
        *(esi + 4) = &edx_1[4]
        arg2 = ecx_7
        *(arg1 + 8) = arg2
        uint32_t var_c
        uint32_t var_8
        uint32_t var_4
        
        if (sub_468bc0(esi, arg1 + 0xc).b != 0 && sub_468bc0(esi, arg1 + 0x10).b != 0
                && sub_468bc0(esi, arg1 + 0x14).b != 0 && sub_468bc0(esi, arg1 + 0x18).b != 0
                && sub_468bc0(esi, arg1 + 0x1c).b != 0 && sub_468bc0(esi, arg1 + 0x20).b != 0
                && sub_468bc0(esi, arg1 + 0x24).b != 0 && sub_468b20(esi, &arg2).b != 0
                && sub_468b20(esi, &var_c).b != 0 && sub_468b20(esi, &var_8).b != 0
                && sub_468b20(esi, &var_4).b != 0)
            *(arg1 + 0x2c) = arg2
            *(arg1 + 0x30) = var_c
            *(arg1 + 0x34) = var_8
            *(arg1 + 0x38) = var_4
            uint32_t eax_15
            eax_15.b = 1
            return eax_15

eax.b = 0
return eax
