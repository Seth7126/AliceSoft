// 函数: sub_54a760
// 地址: 0x54a760
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void** ebp = arg3

if (ebp == 0 || ebp[0x1f] == 0)
    int32_t* i = *(arg1 + 4)
    
    while (i != *(arg1 + 8))
        void* ecx_3 = *i
        i = &i[1]
        *(ecx_3 + 0xb8) = 0
    
    return 

int32_t* i_1 = *(arg1 + 4)

if (i_1 == *(arg1 + 8))
    return 

do
    int32_t* ebx_2 = *i_1 + 8
    void** eax = sub_417ed0(&ebp[0x1e], ebx_2)
    char eax_2
    
    if (eax != ebp[0x1e])
        eax_2 = sub_40c3a0(ebx_2, &eax[4])
    
    void*** eax_3
    
    if (eax == ebp[0x1e] || eax_2 != 0)
        void** var_14 = ebp[0x1e]
        eax_3 = &var_14
    else
        arg3 = eax
        eax_3 = &arg3
    
    void** eax_5 = *eax_3
    
    if (eax_5 == ebp[0x1e])
        *(*i_1 + 0xb8) = 0
    else
        struct sealengine::CFrameIndex::VTable* var_8
        *(*i_1 + 0xb8) = sub_54adc0(&eax_5[0xa], arg2, &var_8)[1]
        var_8 = &sealengine::CFrameIndex::`vftable'
    
    i_1 = &i_1[1]
while (i_1 != *(arg1 + 8))
