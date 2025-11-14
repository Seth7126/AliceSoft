// 函数: sub_5dfec0
// 地址: 0x5dfec0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* edi = arg1
int32_t* eax = edi[4]
arg1 = eax

if (*arg2 s< eax)
    do
        int32_t eax_1 = edi[5]
        int32_t* edx_1
        
        if (eax_1 u< 0x10)
            edx_1 = edi
        else
            edx_1 = *edi
        
        char* ecx_1 = *arg2
        int32_t* edx_2
        
        if (*(ecx_1 + edx_1) u>= 0x81)
            if (eax_1 u< 0x10)
                edx_2 = edi
            else
                edx_2 = *edi
        
        int32_t* edx_3
        int32_t* edx_4
        
        if (*(ecx_1 + edx_1) u< 0x81 || *(ecx_1 + edx_2) u> 0x9f)
            if (eax_1 u< 0x10)
                edx_3 = edi
            else
                edx_3 = *edi
            
            if (*(ecx_1 + edx_3) u>= 0xe0)
                if (eax_1 u< 0x10)
                    edx_4 = edi
                else
                    edx_4 = *edi
        
        int32_t eax_7
        char* ecx_12
        void* ebx_3
        
        if ((*(ecx_1 + edx_1) u< 0x81 || *(ecx_1 + edx_2) u> 0x9f)
                && (*(ecx_1 + edx_3) u< 0xe0 || *(ecx_1 + edx_4) u> 0xef))
            int32_t* eax_8
            
            if (eax_1 u< 0x10)
                eax_8 = edi
            else
                eax_8 = *edi
            
            if (*(ecx_1 + eax_8) == 0x20)
                break
            
            *arg2 = &ecx_1[1]
            int32_t* eax_10
            
            if (edi[5] u< 0x10)
                eax_10 = edi
            else
                eax_10 = *edi
            
            ebx_3 = eax_10 + ecx_1
            eax_7 = arg3[1]
            
            if (ebx_3 u>= eax_7)
            label_5e0025:
                
                if (eax_7 == arg3[2])
                    sub_403590(arg3, 1)
                
                ecx_12 = arg3[1]
                
                if (ecx_12 != 0)
                    eax_7.b = *ebx_3
                    *ecx_12 = eax_7.b
            else
                int32_t ecx_9 = *arg3
                
                if (ecx_9 u> ebx_3)
                    goto label_5e0025
                
                if (eax_7 == arg3[2])
                    sub_403590(arg3, 1)
                
                ecx_12 = arg3[1]
                
                if (ecx_12 != 0)
                    eax_7.b = *(ebx_3 - ecx_9 + *arg3)
                    *ecx_12 = eax_7.b
        else
            *arg2 = &ecx_1[1]
            int32_t* eax_3
            
            if (edi[5] u< 0x10)
                eax_3 = edi
            else
                eax_3 = *edi
            
            void* ebx_1 = eax_3 + ecx_1
            int32_t eax_4 = arg3[1]
            int32_t ecx_2
            
            if (ebx_1 u< eax_4)
                ecx_2 = *arg3
            
            char* ecx_5
            
            if (ebx_1 u>= eax_4 || ecx_2 u> ebx_1)
                if (eax_4 == arg3[2])
                    sub_403590(arg3, 1)
                
                ecx_5 = arg3[1]
                
                if (ecx_5 != 0)
                    eax_4.b = *ebx_1
                    *ecx_5 = eax_4.b
            else
                if (eax_4 == arg3[2])
                    sub_403590(arg3, 1)
                
                ecx_5 = arg3[1]
                
                if (ecx_5 != 0)
                    eax_4.b = *(ebx_1 - ecx_2 + *arg3)
                    *ecx_5 = eax_4.b
            arg3[1] += 1
            int32_t ecx_6 = *arg2
            *arg2 = ecx_6 + 1
            int32_t* eax_6
            
            if (edi[5] u< 0x10)
                eax_6 = edi
            else
                eax_6 = *edi
            
            ebx_3 = eax_6 + ecx_6
            eax_7 = arg3[1]
            
            if (ebx_3 u>= eax_7)
                goto label_5e0025
            
            int32_t ecx_7 = *arg3
            
            if (ecx_7 u> ebx_3)
                goto label_5e0025
            
            if (eax_7 == arg3[2])
                sub_403590(arg3, 1)
            
            ecx_12 = arg3[1]
            
            if (ecx_12 != 0)
                eax_7.b = *(ebx_3 - ecx_7 + *arg3)
                *ecx_12 = eax_7.b
        arg3[1] += 1
    while (*arg2 s< arg1)

arg1.b = 0
sub_414b60(arg3, &arg1)
*arg2 += 1
int32_t result
result.b = 1
return result
