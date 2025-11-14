// 函数: sub_5afda0
// 地址: 0x5afda0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx_2 = (arg2 - arg3) s/ 0x24
int32_t eax_2
int32_t edx_3
edx_3:eax_2 = sx.q(ebx_2)
int32_t result = eax_2 - edx_3
int32_t i = result s>> 1

if (i s> 0)
    void* esi_2 = arg3 + 0x18 + i * 0x24
    
    do
        int32_t eax_3 = *(esi_2 - 0x3c)
        esi_2 -= 0x24
        int64_t xmm0_1 = *(esi_2 - 0xc)
        i -= 1
        int32_t var_24 = eax_3
        int32_t var_20_1 = *(esi_2 - 0x14)
        int32_t var_10_1 = *(esi_2 - 4)
        int64_t var_18_1 = xmm0_1
        int32_t var_4_1 = *(esi_2 + 8)
        int32_t var_c_1 = *esi_2
        struct sealengine::CEmitterPos::VTable* const var_1c_1 = &sealengine::CEmitterPos::`vftable'
        int32_t var_8_1 = *(esi_2 + 4)
        result = sub_5b04d0(&var_24, i, arg3, ebx_2, &var_24, arg4)
    while (i s> 0)

return result
