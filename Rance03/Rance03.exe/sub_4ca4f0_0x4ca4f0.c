// 函数: sub_4ca4f0
// 地址: 0x4ca4f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void** eax

if (arg3 == 0)
label_4ca500:
    eax.b = 0
    return eax

int32_t* ecx = *arg2
void* i = *ecx
void* i_1 = i

if (i != ecx)
    do
        int32_t* edi_1 = i + 0x10
        void** eax_3 = sub_417ed0(arg1 + 8, edi_1)
        void** eax_4 = *(arg1 + 8)
        void*** eax_7
        void** var_10
        
        if (eax_3 == eax_4)
            var_10 = eax_4
            eax_7 = &var_10
        else
            void* edx_1 = &eax_3[4]
            int32_t ecx_2 = *(edx_1 + 0x10)
            
            if (eax_3[9] u>= 0x10)
                edx_1 = *edx_1
            
            int32_t ebp_1 = edi_1[4]
            
            if (edi_1[5] u>= 0x10)
                edi_1 = *edi_1
            
            int32_t eax_5 = ecx_2
            
            if (ebp_1 u< ecx_2)
                eax_5 = ebp_1
            
            int32_t eax_6 = sub_405190(eax_5, edx_1, edi_1, eax_5)
            bool cond:4_1 = eax_6 s< 0
            
            if (eax_6 != 0)
                goto label_4ca57e
            
            if (ebp_1 u< ecx_2)
            label_4ca58a:
                var_10 = *(arg1 + 8)
                eax_7 = &var_10
            else
                eax_6.b = ebp_1 != ecx_2
                cond:4_1 = eax_6 s< 0
            label_4ca57e:
                
                if (cond:4_1)
                    goto label_4ca58a
                
                void** var_14 = eax_3
                eax_7 = &var_14
        eax = *eax_7
        
        if (eax == *(arg1 + 8))
            goto label_4ca500
        
        int32_t edi_2 = eax[0xa]
        
        if (edi_2 == 0)
            goto label_4ca500
        
        void** eax_8 = sub_417ed0(arg1 + 8, i + 0x28)
        char eax_10
        
        if (eax_8 != *(arg1 + 8))
            eax_10 = sub_40c3a0(i + 0x28, &eax_8[4])
        
        void*** eax_11
        
        if (eax_8 == *(arg1 + 8) || eax_10 != 0)
            void** var_4 = *(arg1 + 8)
            eax_11 = &var_4
        else
            void** var_8 = eax_8
            eax_11 = &var_8
        
        void** eax_13 = *eax_11
        
        if (eax_13 != *(arg1 + 8))
            int32_t ebp_3 = eax_13[0xa]
            
            if (ebp_3 != 0)
                int32_t var_30_5 = edi_2
                
                if (sub_4a55e0(arg3 + 0x104).b == 0)
                    goto label_4ca500
                
                int32_t var_30_6 = edi_2
                struct partsengine::CPartsList::VTable** eax_15 = sub_4a52a0(arg3 + 0x104)
                
                if (eax_15 != 0)
                    int32_t esi_4 = eax_15[2]
                    
                    if (edi_2 s>= esi_4 && eax_15[1] + esi_4 s> edi_2
                            && eax_15[3][edi_2 - esi_4].vFunc_0 == 0)
                        sub_4e7720(eax_15, edi_2)
                
                arg4(ebp_3)
        
        sub_418380(&i_1)
        i = i_1
    while (i != *arg2)

i.b = 1
return i
