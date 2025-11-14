// 函数: sub_54a640
// 地址: 0x54a640
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void** ebp = arg4

if (ebp == 0 || ebp[0x1d] == 0)
    void** eax = *(arg1 + 4)
    int32_t ecx_2 = *(arg1 + 8)
    int32_t edx_1 = 0
    uint32_t esi_3 = (ecx_2 - eax + 3) u>> 2
    
    if (eax u> ecx_2)
        esi_3 = 0
    
    if (esi_3 != 0)
        do
            void* ecx_3 = *eax
            eax = &eax[1]
            edx_1 += 1
            *(ecx_3 + 0xb0) = arg2
        while (edx_1 != esi_3)
else
    int32_t* i = *(arg1 + 4)
    
    if (i != *(arg1 + 8))
        do
            int32_t* ebx_2 = *i + 8
            void** eax_1 = sub_417ed0(&ebp[0x1c], ebx_2)
            char eax_3
            
            if (eax_1 != ebp[0x1c])
                eax_3 = sub_40c3a0(ebx_2, &eax_1[4])
            
            void*** eax_4
            
            if (eax_1 == ebp[0x1c] || eax_3 != 0)
                void** var_14 = ebp[0x1c]
                eax_4 = &var_14
            else
                arg4 = eax_1
                eax_4 = &arg4
            
            void** eax_6 = *eax_4
            
            if (eax_6 == ebp[0x1c])
                *(*i + 0xb0) = arg2
            else
                struct sealengine::CFrameMulAlpha::VTable* var_8
                *(*i + 0xb0) = sub_54acf0(&eax_6[0xa], arg3, &var_8)[1] f* arg2
                var_8 = &sealengine::CFrameMulAlpha::`vftable'
            
            i = &i[1]
        while (i != *(arg1 + 8))
