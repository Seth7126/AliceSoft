// 函数: sub_6c16a0
// 地址: 0x6c16a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* const var_8
void* const ecx
void* const edx
void* const ebx
int32_t ebp

if (arg1 == 0)
    ecx = nullptr
label_6c16cd:
    edx = nullptr
    ebx = nullptr
    var_8 = nullptr
    ebp = 0
else
    ecx = arg1[0x10]
    
    if (ecx == 0)
        goto label_6c16cd
    
    ebx = *(ecx + 4)
    edx = *(ecx + 0x68)
    var_8 = edx
    
    if (ebx == 0)
        ebp = 0
    else
        ebp = *(ebx + 0x1c)

int32_t edi_1 = neg.d(arg1)
void* edi_3 = sbb.d(edi_1, edi_1, arg1 != 0) & &arg1[1]

if (ecx != 0 && edx != 0 && ebx != 0 && ebp != 0 && edi_3 != 0)
    sub_6b30b0(arg1)
    int32_t ecx_2 = arg2[1]
    int32_t eax_2 = *arg2
    __builtin_memset(edi_3, 0, 0x14)
    *(edi_3 + 0x10) = ecx_2
    *(edi_3 + 0xc) = eax_2
    *(edi_3 + 8) = eax_2
    
    if (sub_6b2ec0(edi_3, 1) != 0)
        return 0xffffff79
    
    void* eax_5 = sub_6b2ec0(edi_3, *(var_8 + 0x2c))
    
    if (eax_5 != 0xffffffff)
        arg1[0xa] = eax_5
        void* eax_7 = (eax_5 << 2) + 0x20 + ebp
        int32_t* eax_8 = *eax_7
        
        if (eax_8 != 0)
            int32_t eax_9 = *eax_8
            arg1[7] = eax_9
            
            if (eax_9 == 0)
                arg1[6] = 0
                arg1[8] = 0
            label_6c17c4:
                arg1[0xc] = arg2[4]
                arg1[0xd] = arg2[5]
                arg1[0xe] = arg2[6]
                arg1[0xf] = arg2[7]
                arg1[0xb] = arg2[3]
                arg1[9] = *(ebp + (arg1[7] << 2))
                int32_t i = 0
                *arg1 = sub_6b3050(arg1, *(ebx + 4) << 2)
                
                if (*(ebx + 4) s> 0)
                    do
                        *(*arg1 + (i << 2)) = sub_6b3050(arg1, arg1[9] << 2)
                        i += 1
                    while (i s< *(ebx + 4))
                
                int32_t ecx_11 = *(*eax_7 + 0xc)
                return (*((&data_77b074)[*(ebp + (ecx_11 << 2) + 0x120)] + 0x10))(arg1, 
                    *(ebp + (ecx_11 << 2) + 0x220))
            
            arg1[6] = sub_6b2ec0(edi_3, 1)
            void* eax_11 = sub_6b2ec0(edi_3, 1)
            arg1[8] = eax_11
            
            if (eax_11 != 0xffffffff)
                goto label_6c17c4

return 0xffffff78
