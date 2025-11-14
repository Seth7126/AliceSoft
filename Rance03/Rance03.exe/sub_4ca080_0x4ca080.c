// 函数: sub_4ca080
// 地址: 0x4ca080
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void** eax

if (arg3 == 0)
label_4ca08e:
    eax.b = 0
    return eax

int32_t* eax_2 = *arg2
int32_t* i = *eax_2

if (i != eax_2)
    int32_t* ebp_1 = arg1 + 8
    int32_t* var_20_1 = ebp_1
    
    do
        void** ebx_1 = &i[4]
        void** eax_3 = sub_417ed0(ebp_1, ebx_1)
        void** eax_4 = *ebp_1
        int32_t var_18
        void*** eax_7
        void** var_10
        
        if (eax_3 == eax_4)
            var_10 = eax_4
            eax_7 = &var_10
        else
            bool cond:1_1 = eax_3[9] u< 0x10
            void* edx_1 = &eax_3[4]
            int32_t ecx_1 = *(edx_1 + 0x10)
            var_18 = ecx_1
            
            if (not(cond:1_1))
                edx_1 = *edx_1
            
            int32_t ebp_2 = ebx_1[4]
            
            if (ebx_1[5] u>= 0x10)
                ebx_1 = *ebx_1
            
            int32_t eax_5 = ecx_1
            
            if (ebp_2 u< ecx_1)
                eax_5 = ebp_2
            
            int32_t eax_6 = sub_405190(eax_5, edx_1, ebx_1, eax_5)
            bool cond:4_1 = eax_6 s< 0
            
            if (eax_6 != 0)
                goto label_4ca10b
            
            int32_t ecx_3 = var_18
            
            if (ebp_2 u< ecx_3)
                ebp_1 = var_20_1
                var_10 = eax_4
                eax_7 = &var_10
            else
                eax_6.b = ebp_2 != ecx_3
                cond:4_1 = eax_6 s< 0
            label_4ca10b:
                ebp_1 = var_20_1
                
                if (cond:4_1)
                    var_10 = eax_4
                    eax_7 = &var_10
                else
                    void** var_14 = eax_3
                    eax_7 = &var_14
        eax = *eax_7
        
        if (eax == *ebp_1)
            goto label_4ca08e
        
        int32_t edi_2 = eax[0xa]
        
        if (edi_2 == 0)
            goto label_4ca08e
        
        int32_t var_38_3 = edi_2
        
        if (sub_4a55e0(arg3 + 0x104).b == 0)
            goto label_4ca08e
        
        int32_t var_38_4 = edi_2
        struct partsengine::CPartsList::VTable** eax_9 = sub_4a52a0(arg3 + 0x104)
        int32_t ebx_3
        
        if (eax_9 != 0)
            ebx_3 = eax_9[2]
        
        struct IInterface::VTable** vFunc_0
        
        if (eax_9 == 0 || edi_2 s< ebx_3 || eax_9[1] + ebx_3 s<= edi_2)
            vFunc_0 = nullptr
        else
            vFunc_0 = eax_9[3][edi_2 - ebx_3].vFunc_0
            
            if (vFunc_0 == 0)
                vFunc_0 = sub_4e7720(eax_9, edi_2)
        
        sub_4a69b0(&vFunc_0[0x13])
        
        for (int32_t** j = i[0xa]; j != i[0xb]; j = &j[6])
            void** eax_13 = sub_417ed0(ebp_1, j)
            int32_t ecx_13 = *ebp_1
            var_18 = eax_13
            int32_t* eax_17
            int32_t var_8
            
            if (eax_13 == ecx_13)
                var_8 = ecx_13
                eax_17 = &var_8
            else
                void* edx_3 = &eax_13[4]
                int32_t ebp_3 = *(edx_3 + 0x10)
                
                if (eax_13[9] u>= 0x10)
                    edx_3 = *edx_3
                
                int32_t ebx_5 = j[4]
                int32_t* j_1
                
                if (j[5] u< 0x10)
                    j_1 = j
                else
                    j_1 = *j
                
                int32_t eax_14 = ebp_3
                
                if (ebx_5 u< ebp_3)
                    eax_14 = ebx_5
                
                int32_t eax_15 = sub_405190(eax_14, edx_3, j_1, eax_14)
                bool cond:7_1 = eax_15 s< 0
                
                if (eax_15 != 0)
                    goto label_4ca203
                
                if (ebx_5 u< ebp_3)
                    ebp_1 = var_20_1
                    var_8 = ecx_13
                    eax_17 = &var_8
                else
                    eax_15.b = ebx_5 != ebp_3
                    cond:7_1 = eax_15 s< 0
                label_4ca203:
                    ebp_1 = var_20_1
                    
                    if (cond:7_1)
                        var_8 = ecx_13
                        eax_17 = &var_8
                    else
                        int32_t var_c = var_18
                        eax_17 = &var_c
            int32_t eax_18 = *eax_17
            
            if (eax_18 != *ebp_1)
                int32_t ebp_4 = *(eax_18 + 0x28)
                
                if (ebp_4 != 0 && sub_4a67c0(&vFunc_0[0x13], ebp_4) != 0)
                    void* ebx_7 = vFunc_0[0x16]
                    var_18 = ebp_4
                    sub_4b7b70(ebx_7, ebp_4)
                    sub_4158d0(ebx_7 + 0x94, &var_18)
                    *(ebx_7 + 4) = 1
                
                ebp_1 = var_20_1
        
        if (*(i + 0xd) == 0)
            int32_t* i_1 = i[2]
            
            if (*(i_1 + 0xd) != 0)
                int32_t* i_3 = i[1]
                
                if (*(i_3 + 0xd) == 0)
                    while (i == i_3[2])
                        i = i_3
                        i_3 = i_3[1]
                        
                        if (*(i_3 + 0xd) != 0)
                            break
                
                i = i_3
            else
                i = i_1
                int32_t* i_2 = *i
                
                while (*(i_2 + 0xd) == 0)
                    i = i_2
                    i_2 = *i
    while (i != *arg2)

eax_2.b = 1
return eax_2
