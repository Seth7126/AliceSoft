// 函数: sub_5bfb40
// 地址: 0x5bfb40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** esi = arg6
int32_t eax = arg3
void* ebx = arg2
int32_t var_4 = eax
int32_t* edi = arg5

if (eax != ebx && arg4 != edi)
    bool cond:2_1
    
    do
        void* ebp_1 = *(ebx - 4)
        void* edx = edi[-1]
        arg6 = ebx
        ebx -= 4
        int32_t* var_8_1 = edi
        edi -= 4
        int32_t ecx = *(ebp_1 + 0x18)
        eax = *(edx + 0x18)
        
        if (eax s< ecx)
        label_5bfbe4:
            esi -= 4
            
            if (esi != ebx)
                *ebx = 0
                int32_t* edi_1 = *esi
                *esi = ebp_1
                
                if (edi_1 != 0)
                    sub_5bd030(edi_1)
                    int32_t var_1c_2 = 0x80
                    eax = operator new(edi_1)
            
            edi = var_8_1
            cond:2_1 = var_4 != ebx
        else
            if (eax s<= ecx)
                eax = *(edx + 0x1c)
                int32_t ecx_1 = *(ebp_1 + 0x1c)
                
                if (eax s< ecx_1)
                    goto label_5bfbe4
                
                if (eax s<= ecx_1)
                    eax.b = *(edx + 0x75)
                    ecx_1.b = *(ebp_1 + 0x75)
                    
                    if (eax.b u< ecx_1.b)
                        goto label_5bfbe4
                    
                    if (eax.b u<= ecx_1.b)
                        ecx_1.b = *(edx + 0x22)
                        
                        if (ecx_1.b u< *(ebp_1 + 0x22))
                            goto label_5bfbe4
            
            esi -= 4
            
            if (esi != edi)
                *edi = 0
                int32_t* ebx_1 = *esi
                *esi = edx
                
                if (ebx_1 != 0)
                    sub_5bd030(ebx_1)
                    int32_t var_1c_1 = 0x80
                    eax = operator new(ebx_1)
            
            ebx = arg6
            cond:2_1 = arg4 != edi
    while (cond:2_1)

int32_t var_1c_3 = 0
return sub_5c0280(eax, edi, arg4, esi)
