// 函数: sub_552610
// 地址: 0x552610
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx_2 = (arg2 - arg3) s/ 0x14
int32_t eax_2
int32_t edx_3
edx_3:eax_2 = sx.q(ebx_2)
int32_t result = eax_2 - edx_3
int32_t i = result s>> 1

if (i s> 0)
    void* esi_2 = arg3 + 0xc + i * 0x14
    
    do
        int32_t eax_3 = *(esi_2 - 0x20)
        esi_2 -= 0x14
        int32_t xmm0_1 = *esi_2
        i -= 1
        int32_t var_14 = eax_3
        int32_t var_10_1 = *(esi_2 - 8)
        int32_t var_4_1 = *(esi_2 + 4)
        struct sealengine::CFrameMulAlpha::VTable* const var_c_1 =
            &sealengine::CFrameMulAlpha::`vftable'
        int32_t var_8_1 = xmm0_1
        result = sub_552d10(&var_14, i, arg3, ebx_2, &var_14, arg4)
    while (i s> 0)

return result
