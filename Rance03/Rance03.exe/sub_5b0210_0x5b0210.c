// 函数: sub_5b0210
// 地址: 0x5b0210
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx_2 = (arg2 - arg3) s/ 0x1c
int32_t eax_2
int32_t edx_3
edx_3:eax_2 = sx.q(ebx_2)
int32_t result = eax_2 - edx_3
int32_t i = result s>> 1

if (i s> 0)
    void* esi_3 = arg3 + 0x10 + i * 0x1c
    
    do
        int32_t eax_3 = *(esi_3 - 0x2c)
        esi_3 -= 0x1c
        int32_t xmm0_1 = *(esi_3 - 4)
        i -= 1
        int32_t var_1c = eax_3
        int32_t var_18_1 = *(esi_3 - 0xc)
        int32_t var_10_1 = xmm0_1
        int32_t var_4_1 = *(esi_3 + 8)
        int32_t var_c_1 = *esi_3
        struct sealengine::CEmitterRotate::VTable* const var_14_1 =
            &sealengine::CEmitterRotate::`vftable'
        int32_t var_8_1 = *(esi_3 + 4)
        result = sub_5b06c0(&var_1c, i, arg3, ebx_2, &var_1c, arg4)
    while (i s> 0)

return result
