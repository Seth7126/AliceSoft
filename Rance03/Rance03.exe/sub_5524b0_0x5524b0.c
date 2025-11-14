// 函数: sub_5524b0
// 地址: 0x5524b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* i = (arg2 - arg3) & 0xffffffe0

if (i s> 0x20)
    int128_t* esi_1 = arg2 - 0x14
    
    do
        int128_t xmm0_1 = *esi_1
        int32_t var_20 = *(esi_1 - 0xc)
        int32_t var_1c_1 = *(esi_1 - 8)
        int32_t var_4_1 = esi_1[1].d
        *(esi_1 - 0xc) = *arg3
        *(esi_1 - 8) = arg3[1]
        int128_t var_14_1 = xmm0_1
        struct sealengine::CFrameAddColor::VTable* const var_18_1 =
            &sealengine::CFrameAddColor::`vftable'
        *esi_1 = *(arg3 + 0xc)
        esi_1[1].d = arg3[7]
        int32_t eax_9 = (0xfffffff4 - arg3 + esi_1) s>> 5
        sub_552bb0(eax_9, nullptr, arg3, eax_9, &var_20, arg4)
        esi_1 = &esi_1[-2]
        i = (esi_1 + 0x14 - arg3) & 0xffffffe0
    while (i s> 0x20)

return i
