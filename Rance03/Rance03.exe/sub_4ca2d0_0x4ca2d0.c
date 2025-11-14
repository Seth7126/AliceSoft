// 函数: sub_4ca2d0
// 地址: 0x4ca2d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void** eax

if (arg3 == 0)
label_4ca2de:
    eax.b = 0
    return eax

int32_t* eax_2 = *arg2
void* i = *eax_2
void* i_2 = i
void* i_1 = i

if (i != eax_2)
    int32_t* ebp_1 = arg1 + 8
    int32_t* var_24_1 = ebp_1
    
    do
        int32_t* ebx_1 = i + 0x10
        void** eax_3 = sub_417ed0(ebp_1, ebx_1)
        void** eax_4 = *ebp_1
        void*** eax_7
        void** var_c
        
        if (eax_3 == eax_4)
            var_c = eax_4
            eax_7 = &var_c
        else
            void* edx_1 = &eax_3[4]
            int32_t eax_5 = *(edx_1 + 0x10)
            int32_t var_20_1 = eax_5
            
            if (eax_3[9] u>= 0x10)
                edx_1 = *edx_1
            
            int32_t ecx_1 = ebx_1[4]
            
            if (ebx_1[5] u>= 0x10)
                ebx_1 = *ebx_1
            
            if (ecx_1 u< var_20_1)
                eax_5 = ecx_1
            
            int32_t eax_6 = sub_405190(eax_5, edx_1, ebx_1, eax_5)
            bool cond:3_1 = eax_6 s< 0
            
            if (eax_6 != 0)
                goto label_4ca36e
            
            if (ecx_1 u< var_20_1)
            label_4ca37a:
                var_c = *ebp_1
                eax_7 = &var_c
            else
                eax_6.b = ecx_1 != var_20_1
                cond:3_1 = eax_6 s< 0
            label_4ca36e:
                
                if (cond:3_1)
                    goto label_4ca37a
                
                void** var_10 = eax_3
                eax_7 = &var_10
        eax = *eax_7
        
        if (eax == *ebp_1)
            goto label_4ca2de
        
        int32_t esi_2 = eax[0xa]
        
        if (esi_2 == 0)
            goto label_4ca2de
        
        int32_t var_38_3 = esi_2
        
        if (sub_4a55e0(arg3 + 0x104).b == 0)
            goto label_4ca2de
        
        int32_t var_38_4 = esi_2
        struct partsengine::CPartsList::VTable** eax_9 = sub_4a52a0(arg3 + 0x104)
        int32_t ebx_3
        
        if (eax_9 != 0)
            ebx_3 = eax_9[2]
        
        struct IInterface::VTable** vFunc_0
        
        if (eax_9 == 0 || esi_2 s< ebx_3 || eax_9[1] + ebx_3 s<= esi_2)
            vFunc_0 = nullptr
        else
            vFunc_0 = eax_9[3][esi_2 - ebx_3].vFunc_0
            
            if (vFunc_0 == 0)
                vFunc_0 = sub_4e7720(eax_9, esi_2)
        
        int32_t* ecx_9 = vFunc_0[0x17]
        
        if (ecx_9 != 0 && (*(*ecx_9 + 8))(1) == 9)
            void* eax_16 = sub_4a3f80(vFunc_0)
            sub_4d5260(eax_16)
            int32_t** j = *(i + 0x28)
            
            if (j != *(i + 0x2c))
                do
                    void** eax_17 = sub_417ed0(ebp_1, j)
                    void* eax_18 = *ebp_1
                    void** eax_21
                    void* var_4
                    
                    if (eax_17 == eax_18)
                        var_4 = eax_18
                        eax_21 = &var_4
                    else
                        void* edx_4 = &eax_17[4]
                        int32_t ebp_2 = *(edx_4 + 0x10)
                        
                        if (eax_17[9] u>= 0x10)
                            edx_4 = *edx_4
                        
                        int32_t ebx_4 = j[4]
                        int32_t* j_1
                        
                        if (j[5] u< 0x10)
                            j_1 = j
                        else
                            j_1 = *j
                        
                        int32_t eax_19 = ebp_2
                        
                        if (ebx_4 u< ebp_2)
                            eax_19 = ebx_4
                        
                        int32_t eax_20 = sub_405190(eax_19, edx_4, j_1, eax_19)
                        bool cond:6_1 = eax_20 s< 0
                        
                        if (eax_20 != 0)
                            goto label_4ca479
                        
                        if (ebx_4 u< ebp_2)
                            ebp_1 = var_24_1
                            var_4 = eax_18
                            eax_21 = &var_4
                        else
                            eax_20.b = ebx_4 != ebp_2
                            cond:6_1 = eax_20 s< 0
                        label_4ca479:
                            ebp_1 = var_24_1
                            
                            if (cond:6_1)
                                var_4 = eax_18
                                eax_21 = &var_4
                            else
                                void** var_8 = eax_17
                                eax_21 = &var_8
                    void* eax_22 = *eax_21
                    
                    if (eax_22 != *ebp_1)
                        int32_t eax_23 = *(eax_22 + 0x28)
                        
                        if (eax_23 != 0)
                            sub_4d5400(eax_16, eax_23)
                    
                    j = &j[6]
                while (j != *(i_2 + 0x2c))
        
        sub_418380(&i_1)
        i = i_1
        i_2 = i
    while (i != *arg2)

eax_2.b = 1
return eax_2
