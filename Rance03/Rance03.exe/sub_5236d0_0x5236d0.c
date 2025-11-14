// 函数: sub_5236d0
// 地址: 0x5236d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax_3
int32_t edx
edx:eax_3 = sx.q((arg4 - arg2) s>> 2)
int32_t* edi = &arg2[(eax_3 - edx) s>> 1]
sub_5239c0(arg4 - 4, edi, arg2, arg4 - 4, arg5)
int32_t* ebp = &edi[1]
int32_t* var_14 = ebp

if (arg2 u< edi)
    do
        void* ecx_1 = *(*edi + 4)
        int32_t esi_1 = *(ecx_1 + 0x14)
        void* eax_9 = *(edi[-1] + 4)
        int32_t edx_2 = *(eax_9 + 0x14)
        
        if (edx_2 s< esi_1)
            break
        
        if (edx_2 s<= esi_1)
            int32_t xmm1_1 = *(eax_9 + 0x10)
            int32_t xmm0_1 = *(ecx_1 + 0x10)
            
            if (xmm0_1 f> xmm1_1)
                break
            
            if (not(xmm1_1 f> xmm0_1) && *(ecx_1 + 0xc) f> *(eax_9 + 0xc))
                break
        
        int32_t esi_2 = *(eax_9 + 0x14)
        
        if (esi_1 s< esi_2)
            break
        
        if (esi_1 s<= esi_2)
            int32_t xmm1_2 = *(ecx_1 + 0x10)
            int32_t xmm0_3 = *(eax_9 + 0x10)
            
            if (xmm0_3 f> xmm1_2)
                break
            
            if (not(xmm1_2 f> xmm0_3) && *(eax_9 + 0xc) f> *(ecx_1 + 0xc))
                break
        
        edi = &edi[-1]
    while (arg2 u< edi)
    
    ebp = var_14

if (ebp u< arg4)
    void* edx_4 = *(*edi + 4)
    int32_t ecx_2 = *(edx_4 + 0x14)
    
    do
        void* eax_12 = *(*ebp + 4)
        int32_t esi_3 = *(eax_12 + 0x14)
        
        if (esi_3 s< ecx_2)
            break
        
        if (esi_3 s<= ecx_2)
            int32_t xmm1_3 = *(eax_12 + 0x10)
            int32_t xmm0_5 = *(edx_4 + 0x10)
            
            if (xmm0_5 f> xmm1_3)
                break
            
            if (not(xmm1_3 f> xmm0_5) && *(edx_4 + 0xc) f> *(eax_12 + 0xc))
                break
        
        if (ecx_2 s< esi_3)
            break
        
        if (ecx_2 s<= esi_3)
            int32_t xmm1_4 = *(edx_4 + 0x10)
            int32_t xmm0_7 = *(eax_12 + 0x10)
            
            if (xmm0_7 f> xmm1_4)
                break
            
            if (not(xmm1_4 f> xmm0_7) && *(eax_12 + 0xc) f> *(edx_4 + 0xc))
                break
        
        ebp = &ebp[1]
    while (ebp u< arg4)
    
    var_14 = ebp

int32_t* esi_4 = edi
int32_t* ebx_1 = ebp
int32_t* var_10 = esi_4

while (true)
    int32_t* var_8_1 = ebx_1
    int32_t* ebx_2 = ebx_1
    
    while (true)
        if (ebx_2 u< arg4)
            do
                void* ecx_3 = *(*ebx_2 + 4)
                void* eax_15 = *(*edi + 4)
                int32_t edx_5 = *(eax_15 + 0x14)
                int32_t temp0_1 = *(ecx_3 + 0x14)
                
                if (edx_5 s>= temp0_1)
                    if (edx_5 s> temp0_1)
                    label_523843:
                        int32_t edx_6 = *(ecx_3 + 0x14)
                        int32_t temp2_1 = *(eax_15 + 0x14)
                        
                        if (edx_6 s< temp2_1)
                            break
                        
                        if (edx_6 s<= temp2_1)
                            int32_t xmm1_6 = *(ecx_3 + 0x10)
                            int32_t xmm0_11 = *(eax_15 + 0x10)
                            
                            if (xmm0_11 f> xmm1_6)
                                break
                            
                            if (not(xmm1_6 f> xmm0_11) && *(eax_15 + 0xc) f> *(ecx_3 + 0xc))
                                break
                        
                        int32_t* eax_16 = ebp
                        ebp = &ebp[1]
                        
                        if (eax_16 != ebx_2)
                            int32_t eax_17 = ebp[-1]
                            ebp[-1] = *ebx_2
                            *ebx_2 = eax_17
                    else
                        int32_t xmm1_5 = *(eax_15 + 0x10)
                        int32_t xmm0_9 = *(ecx_3 + 0x10)
                        
                        if (not(xmm0_9 f> xmm1_5)
                                && (xmm1_5 f> xmm0_9 || not(*(ecx_3 + 0xc) f> *(eax_15 + 0xc))))
                            goto label_523843
                
                ebx_2 = &ebx_2[1]
            while (ebx_2 u< arg4)
            
            esi_4 = var_10
            var_14 = ebp
            var_8_1 = ebx_2
        
        bool cond:2_1 = esi_4 != arg2
        
        if (esi_4 u> arg2)
            void* ecx_5 = &esi_4[-1]
            
            do
                void* edx_7 = *(*edi + 4)
                void* eax_21 = *(*ecx_5 + 4)
                int32_t ebx_3 = *(eax_21 + 0x14)
                int32_t temp1_1 = *(edx_7 + 0x14)
                
                if (ebx_3 s>= temp1_1)
                    if (ebx_3 s> temp1_1)
                    label_5238d6:
                        int32_t temp3_1 = *(edx_7 + 0x14)
                        
                        if (temp3_1 s< ebx_3)
                            break
                        
                        if (temp3_1 s<= ebx_3)
                            int32_t xmm1_8 = *(edx_7 + 0x10)
                            int32_t xmm0_15 = *(eax_21 + 0x10)
                            
                            if (xmm0_15 f> xmm1_8)
                                break
                            
                            if (not(xmm1_8 f> xmm0_15) && *(eax_21 + 0xc) f> *(edx_7 + 0xc))
                                break
                        
                        edi -= 4
                        
                        if (edi != ecx_5)
                            int32_t eax_22 = *edi
                            *edi = *ecx_5
                            *ecx_5 = eax_22
                    else
                        int32_t xmm1_7 = *(eax_21 + 0x10)
                        int32_t xmm0_13 = *(edx_7 + 0x10)
                        
                        if (not(xmm0_13 f> xmm1_7)
                                && (xmm1_7 f> xmm0_13 || not(*(edx_7 + 0xc) f> *(eax_21 + 0xc))))
                            goto label_5238d6
                
                esi_4 -= 4
                ecx_5 -= 4
            while (arg2 u< esi_4)
            
            cond:2_1 = esi_4 != arg2
            ebx_2 = var_8_1
            ebp = var_14
            var_10 = esi_4
        
        if (not(cond:2_1))
            if (ebx_2 == arg4)
                *arg3 = edi
                arg3[1] = ebp
                return arg3
            
            if (ebp != ebx_2)
                int32_t ecx_6 = *edi
                *edi = *ebp
                *ebp = ecx_6
            
            int32_t* edx_9 = edi
            ebp = &ebp[1]
            edi = &edi[1]
            var_14 = ebp
            ebx_1 = &ebx_2[1]
            int32_t ecx_7 = *edx_9
            *edx_9 = *ebx_2
            *ebx_2 = ecx_7
            esi_4 = var_10
            break
        
        esi_4 -= 4
        var_10 = esi_4
        
        if (ebx_2 != arg4)
            int32_t ecx_10 = *ebx_2
            *ebx_2 = *esi_4
            ebx_1 = &ebx_2[1]
            *esi_4 = ecx_10
            break
        
        edi -= 4
        
        if (esi_4 != edi)
            int32_t ecx_8 = *esi_4
            *esi_4 = *edi
            *edi = ecx_8
        
        int32_t ecx_9 = *edi
        ebp -= 4
        var_14 = ebp
        *edi = *ebp
        *ebp = ecx_9
