// 函数: sub_557d70
// 地址: 0x557d70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t esi = arg2
uint32_t* eax = *(esi + 4)

if (eax + 1 u> *(esi + 8))
    eax.b = 0
    return eax

bool cond:0 = *eax == 1
*(esi + 4) = eax + 1
eax.b = cond:0
*(arg1 + 0x44) = eax.b
char* edx = *(esi + 4)

if (&edx[4] u<= *(esi + 8))
    uint32_t ecx_7 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(esi + 4) = &edx[4]
    arg2 = ecx_7
    *(arg1 + 8) = arg2
    uint32_t var_c
    uint32_t var_8
    uint32_t var_4
    
    if (sub_6c9300(esi, arg1 + 0xc).b != 0 && sub_6c9300(esi, arg1 + 0x10).b != 0
            && sub_6c9300(esi, arg1 + 0x14).b != 0 && sub_6c9300(esi, arg1 + 0x18).b != 0
            && sub_6c9300(esi, arg1 + 0x1c).b != 0 && sub_6c9300(esi, arg1 + 0x20).b != 0
            && sub_6c9300(esi, arg1 + 0x24).b != 0 && sub_61ec90(esi, &arg2).b != 0
            && sub_61ec90(esi, &var_c).b != 0 && sub_61ec90(esi, &var_8).b != 0
            && sub_61ec90(esi, &var_4).b != 0)
        *(arg1 + 0x30) = arg2
        *(arg1 + 0x34) = var_c
        *(arg1 + 0x3c) = var_8
        *(arg1 + 0x40) = var_4
        uint32_t eax_14
        eax_14.b = 1
        return eax_14

eax.b = 0
return eax
