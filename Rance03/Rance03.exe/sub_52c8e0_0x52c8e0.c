// 函数: sub_52c8e0
// 地址: 0x52c8e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* i = *(arg1 + 0x10)

while (i != *(arg1 + 0x14))
    void var_48
    sub_59bc60(*i + 0xc, &var_48)
    void* esi_1 = *i
    struct sealengine::CDualQuaternion::VTable** eax = *(esi_1 + 8)
    int128_t xmm0_2
    
    if (eax == 0xffffffff)
        int128_t var_44
        *(esi_1 + 0x30) = var_44
        int128_t var_34
        xmm0_2 = var_34
    else
        struct sealengine::CDualQuaternion::VTable* var_24
        eax = sub_5359f0(&var_48, &var_24, *(arg1 + 4) + 0x2c + eax * 0xac)
        *(esi_1 + 0x30) = *(eax + 4)
        xmm0_2 = *(eax + 0x14)
    
    i = &i[1]
    *(esi_1 + 0x40) = xmm0_2
