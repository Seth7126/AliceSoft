// 函数: sub_6c6930
// 地址: 0x6c6930
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx = __alloca_probe(0x3008)
int32_t eax_1 = __security_cookie ^ &__return_addr
__return_addr = arg1
char arg_4
char* edi = &arg_4
int32_t* result
void* ecx_1
result, ecx_1 = sub_6c68b0(ecx)

if (result.b != 0)
    char* ebx_1 = *(ecx + 0xc)
    ecx_1.b = *ebx_1
    
    if (ecx_1.b u< 0x61 || ecx_1.b u> 0x7a)
        result.b = ecx_1.b
        result.b -= 0x41
    
    char arg_5
    char* ecx_2
    
    if ((ecx_1.b u< 0x61 || ecx_1.b u> 0x7a) && result.b u> 0x19)
        result.b = ecx_1.b
        result.b -= 0x30
        
        if (result.b u<= 9 || ecx_1.b == 0x2d)
            int32_t edi_2 = *(ecx + 0x10)
            char* edx_3 = &arg_5
            arg_4 = ecx_1.b
            int32_t* ecx_7 = &ebx_1[1]
            ebx_1:1.b = 0
            *(ecx + 0xc) = ecx_7
            
            while (ecx_7 u< edi_2)
                ebx_1.b = *ecx_7
                result.b = ebx_1.b
                result.b -= 0x30
                
                if (result.b u> 9)
                    if (ebx_1.b != 0x2e)
                        break
                    
                    if (ebx_1:1.b != 0)
                        break
                    
                    *edx_3 = ebx_1.b
                    ebx_1:1.b = 1
                else
                    *edx_3 = ebx_1.b
                
                ecx_7 += 1
                edx_3 = &edx_3[1]
                *(ecx + 0xc) = ecx_7
            
            *edx_3 = 0
            
            if (arg_4 == 0)
                goto label_6c6b03
            
            ecx_2 = &arg_4
            
            do
                result.b = *ecx_2
                ecx_2 = &ecx_2[1]
            while (result.b != 0)
            
        label_6c6b17:
            sub_403490(arg1, &arg_4, ecx_2 - &arg_5)
            result.b = 1
        else if (sx.d(ecx_1.b) - 0x22 u> 0x5b)
        label_6c6aac:
            sub_403450(0x75d7a2)
            *(ecx + 0x14) = 1
            result.b = 0
        else
            switch (ecx_1.b)
                case 0x22
                    int32_t ebp_1 = *(ecx + 0x10)
                    char* edx_2 = &ebx_1[1]
                    *(ecx + 0xc) = edx_2
                    
                    if (edx_2 u>= ebp_1)
                    label_6c6a56:
                        sub_403450(0x75d7a3)
                        *(ecx + 0x14) = 1
                        result.b = 0
                    else
                        while (true)
                            ebx_1.b = *edx_2
                            
                            if (ebx_1.b == 0x22)
                                *(ecx + 0xc) = &edx_2[1]
                                *edi = 0
                                sub_403450(&arg_4)
                                break
                            
                            ecx_1.b = ebx_1.b
                            char eax_5
                            eax_5, ecx_1 = sub_404d60(ecx_1.b)
                            *edi = ebx_1.b
                            
                            if (eax_5 == 0)
                                edx_2 = &edx_2[1]
                            else
                                ecx_1 = &edx_2[1]
                                edi = &edi[1]
                                *(ecx + 0xc) = ecx_1
                                edx_2 = ecx_1 + 1
                                *edi = *ecx_1
                            
                            edi = &edi[1]
                            *(ecx + 0xc) = edx_2
                            
                            if (edx_2 u>= ebp_1)
                                goto label_6c6a56
                        
                        result.b = 1
                case 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2e, 0x2f, 0x30, 0x31, 
                        0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3e, 
                        0x3f, 0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 
                        0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 
                        0x57, 0x58, 0x59, 0x5a, 0x5c, 0x5e, 0x5f, 0x60, 0x61, 0x62, 0x63, 0x64, 
                        0x65, 0x66, 0x67, 0x68, 0x69, 0x6a, 0x6b, 0x6c, 0x6d, 0x6e, 0x6f, 0x70, 
                        0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7a, 0x7c
                    goto label_6c6aac
                case 0x2c, 0x3d, 0x5b, 0x5d, 0x7b, 0x7d
                    arg_4 = ecx_1.b
                    *(ecx + 0xc) = &ebx_1[1]
                    arg_5 = 0
                    sub_403450(&arg_4)
                    result.b = 1
    else
        void* edx_1 = &ebx_1[1]
        arg_4 = ecx_1.b
        int32_t ebx_2 = *(ecx + 0x10)
        char* edi_1 = &arg_5
        *(ecx + 0xc) = edx_1
        
        while (edx_1 u< ebx_2)
            ecx_1.b = *edx_1
            
            if (ecx_1.b u< 0x61 || ecx_1.b u> 0x7a)
                result.b = ecx_1.b
                result.b -= 0x41
                
                if (result.b u> 0x19)
                    result.b = ecx_1.b
                    result.b -= 0x30
                    
                    if (result.b u> 9)
                        break
            
            edx_1 += 1
            *edi_1 = ecx_1.b
            edi_1 = &edi_1[1]
            *(ecx + 0xc) = edx_1
        
        *edi_1 = 0
        
        if (arg_4 != 0)
            ecx_2 = &arg_4
            
            do
                result.b = *ecx_2
                ecx_2 = &ecx_2[1]
            while (result.b != 0)
            
            goto label_6c6b17
        
    label_6c6b03:
        sub_403490(arg1, &arg_4, nullptr)
        result.b = 1

@__security_check_cookie@4(eax_1 ^ &__return_addr)
return result
