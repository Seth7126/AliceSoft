// 函数: sub_48fa80
// 地址: 0x48fa80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 0x20) = 0
*(arg1 + 0x24) = 0
sub_402110(arg1 + 8, 0x6da20e, nullptr)
uint32_t arg_4
uint32_t esi = arg_4
char* edx = *(esi + 4)

if (&edx[4] u<= *(esi + 8))
    uint32_t ecx_7 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(esi + 4) = &edx[4]
    
    if (sub_468c20(esi, arg1 + 8, (ecx_7 + 3) & 0xfffffffc).b != 0
            && sub_468b20(esi, arg1 + 0x20).b != 0 && *(arg1 + 0x20) s> 0
            && sub_468b20(esi, &arg_4).b != 0)
        *(arg1 + 0x24) = arg_4
        uint32_t eax_7
        eax_7.b = 1
        return eax_7

uint32_t* eax
eax.b = 0
return eax
