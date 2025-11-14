// 函数: sub_54a510
// 地址: 0x54a510
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx
int32_t var_38 = ebx
void** ebp = arg4

if (ebp == 0 || ebp[0x1b] == 0)
    int32_t* i = *(arg1 + 4)
    
    while (i != *(arg1 + 8))
        void* ecx_4 = *i
        i = &i[1]
        *(ecx_4 + 0xa0) = *arg3
    
    return 

int32_t* i_1 = *(arg1 + 4)

if (i_1 == *(arg1 + 8))
    return 

do
    int32_t* ebx_2 = *i_1 + 8
    void** eax = sub_417ed0(&ebp[0x1a], ebx_2)
    char eax_2
    
    if (eax != ebp[0x1a])
        eax_2 = sub_40c3a0(ebx_2, &eax[4])
    
    void*** eax_3
    
    if (eax == ebp[0x1a] || eax_2 != 0)
        void** var_30 = ebp[0x1a]
        eax_3 = &var_30
    else
        arg4 = eax
        eax_3 = &arg4
    
    void** eax_5 = *eax_3
    int128_t xmm0_9
    
    if (eax_5 == ebp[0x1a])
        xmm0_9 = *arg3
    else
        struct sealengine::CFrameAddColor::VTable* var_14
        struct sealengine::CFrameAddColor::VTable** eax_6 = sub_54ac00(&eax_5[0xa], arg2, &var_14)
        float* ecx_2 = arg3
        float var_20_1 = eax_6[2] f+ ecx_2[1]
        float var_1c_1 = eax_6[3] f+ ecx_2[2]
        float var_18_1 = eax_6[4] f+ ecx_2[3]
        xmm0_9 = (eax_6[1] f+ *ecx_2).o
    
    void* eax_7 = *i_1
    i_1 = &i_1[1]
    *(eax_7 + 0xa0) = xmm0_9
while (i_1 != *(arg1 + 8))
