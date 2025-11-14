// 函数: sub_580f00
// 地址: 0x580f00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4_1 = arg3
void* ebx = arg2
int32_t* ecx = arg4
void** esi = arg6
void* edi = arg5

if (arg3 != ebx && ecx != edi)
    while (true)
        void* edx = *(ebx - 4)
        ebx -= 4
        void* ebp_1 = *(edi - 4)
        edi -= 4
        int32_t ecx_1 = *(edx + 0x1c)
        int32_t eax_1 = *(ebp_1 + 0x1c)
        
        if (eax_1 s>= ecx_1)
            if (eax_1 s> ecx_1)
            label_580f59:
                ecx = arg4
                esi -= 4
                ebx += 4
                *esi = ebp_1
                
                if (ecx == edi)
                    break
                
                continue
            else
                int32_t eax_2 = *(ebp_1 + 0x20)
                int32_t ecx_2 = *(edx + 0x20)
                
                if (eax_2 s>= ecx_2)
                    if (eax_2 s> ecx_2)
                        goto label_580f59
                    
                    eax_2.b = *(ebp_1 + 0x73)
                    ecx_2.b = *(edx + 0x73)
                    
                    if (eax_2.b u>= ecx_2.b)
                        if (eax_2.b u> ecx_2.b)
                            goto label_580f59
                        
                        ecx_2.b = *(ebp_1 + 0x26)
                        
                        if (ecx_2.b u>= *(edx + 0x26))
                            goto label_580f59
        
        esi -= 4
        edi += 4
        *esi = edx
        
        if (arg3 == ebx)
            ecx = arg4
            break

int32_t eax_3 = (edi - ecx) s>> 2 << 2
void* esi_1 = esi - eax_3
_memcpy(esi_1, ecx, eax_3)
void* eax_4 = (ebx - arg3) s>> 2 << 2
void* result = esi_1 - eax_4
_memcpy(result, arg3, eax_4)
return result
