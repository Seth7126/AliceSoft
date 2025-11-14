// 函数: sub_552230
// 地址: 0x552230
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx_2 = (arg2 - arg3) s>> 5
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(ebx_2)
int32_t result = eax_1 - edx
int32_t i = result s>> 1

if (i s> 0)
    void* esi_2 = arg3 + 0xc + (i << 5)
    
    do
        int32_t eax_2 = *(esi_2 - 0x2c)
        esi_2 -= 0x20
        int128_t xmm0_1 = *esi_2
        int32_t var_20 = eax_2
        i -= 1
        int32_t var_1c_1 = *(esi_2 - 8)
        int32_t var_4_1 = *(esi_2 + 0x10)
        struct sealengine::CFrameMulColor::VTable* const var_18_1 =
            &sealengine::CFrameMulColor::`vftable'
        int128_t var_14_1 = xmm0_1
        result = sub_552bb0(&var_20, i, arg3, ebx_2, &var_20, arg4)
    while (i s> 0)

return result
