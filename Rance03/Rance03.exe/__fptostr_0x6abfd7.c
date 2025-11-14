// 函数: __fptostr
// 地址: 0x6abfd7
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edx = arg4
char* edi = *(edx + 0xc)
int32_t __saved_ebx_1
void* eax

if (arg1 != 0 && arg2 u> 0)
    int32_t i = arg3
    *arg1 = 0
    int32_t i_1
    
    i_1 = i s<= 0 ? 0 : i
    
    if (arg2 u> i_1 + 1)
        *arg1 = 0x30
        char* eax_3 = &arg1[1]
        
        if (i s> 0)
            do
                edx.b = *edi
                
                if (edx.b == 0)
                    edx = 0x30
                else
                    edx = sx.d(edx.b)
                    edi = &edi[1]
                
                *eax_3 = edx.b
                eax_3 = &eax_3[1]
                i -= 1
            while (i s> 0)
            
            edx = arg4
        
        *eax_3 = 0
        
        if (i s>= 0 && *edi s>= 0x35)
            while (true)
                eax_3 -= 1
                
                if (*eax_3 != 0x39)
                    break
                
                *eax_3 = 0x30
            
            *eax_3 += 1
        
        if (*arg1 != 0x31)
            _memcpy(arg1, &arg1[1], _strlen(&arg1[1]) + 1)
        else
            *(edx + 4) += 1
        
        return 0
    
    eax = __errno()
    __saved_ebx_1 = 0x22
else
    eax = __errno()
    __saved_ebx_1 = 0x16

*eax = __saved_ebx_1
__invalid_parameter_noinfo()
return __saved_ebx_1
