// 函数: sub_5bfa30
// 地址: 0x5bfa30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4_1 = arg3
int32_t ebp = arg5
int32_t* esi = arg4
int32_t* edi = arg3
void** ebx_1 = arg6

if (edi != arg2 && esi != ebp)
    while (true)
        void* edx = *edi
        void* ebp_1 = *esi
        int32_t ecx = *(edx + 0x18)
        int32_t eax = *(ebp_1 + 0x18)
        
        if (eax s>= ecx)
            if (eax s> ecx)
            label_5bfa89:
                arg1 = ebx_1
                ebx_1 = &ebx_1[1]
                
                if (arg1 != edi)
                    *edi = 0
                    int32_t* ebp_2 = *arg1
                    *arg1 = edx
                    
                    if (ebp_2 != 0)
                        sub_5bd030(ebp_2)
                        int32_t var_18_1 = 0x80
                        arg1 = operator new(ebp_2)
                
                edi = &edi[1]
                
                if (edi != arg2)
                    continue
                
                ebp = arg5
                break
            else
                int32_t eax_1 = *(ebp_1 + 0x1c)
                int32_t ecx_1 = *(edx + 0x1c)
                
                if (eax_1 s>= ecx_1)
                    if (eax_1 s> ecx_1)
                        goto label_5bfa89
                    
                    eax_1.b = *(ebp_1 + 0x75)
                    ecx_1.b = *(edx + 0x75)
                    
                    if (eax_1.b u>= ecx_1.b)
                        if (eax_1.b u> ecx_1.b)
                            goto label_5bfa89
                        
                        ecx_1.b = *(ebp_1 + 0x22)
                        
                        if (ecx_1.b u>= *(edx + 0x22))
                            goto label_5bfa89
        
        arg1 = ebx_1
        ebx_1 = &ebx_1[1]
        
        if (arg1 != esi)
            *esi = 0
            void** ecx_6 = *arg1
            *arg1 = ebp_1
            
            if (ecx_6 != 0)
                sub_5bd030(ecx_6)
                int32_t var_18_4 = 0x80
                arg1 = operator new(ecx_6)
        
        ebp = arg5
        esi = &esi[1]
        
        if (esi == ebp)
            break

int32_t var_18_2 = 0
int32_t* result = sub_5beb90(arg1, arg2, edi, ebx_1)

if (arg7 != 0)
    return result

int32_t var_18_3 = 0.d
return sub_5beb90(result, ebp, esi, result)
