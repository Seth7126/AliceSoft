// 函数: sub_552960
// 地址: 0x552960
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t i = (arg2 - arg3) s/ 0x14

if (i s> 1)
    int32_t* esi_2 = arg2 - 8
    
    do
        int32_t var_14 = esi_2[-3]
        int32_t var_10_1 = esi_2[-2]
        int32_t var_8_1 = *esi_2
        int32_t var_4_1 = esi_2[1]
        esi_2[-3] = *arg3
        esi_2[-2] = arg3[1]
        *esi_2 = arg3[3]
        esi_2[1] = arg3[4]
        struct sealengine::CFrameIndex::VTable* const var_c_1 = &sealengine::CFrameIndex::`vftable'
        int32_t eax_14 = (0xfffffff4 - arg3 + esi_2) s/ 0x14
        sub_552e70(eax_14, nullptr, arg3, eax_14, &var_14, arg4)
        esi_2 = &esi_2[-5]
        i = (esi_2 + 8 - arg3) s/ 0x14
    while (i s> 1)

return i
