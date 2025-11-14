// 函数: sub_580e50
// 地址: 0x580e50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4_1 = arg3
int32_t* ebx = arg4
int32_t eax = arg2
void** esi = arg6
int32_t* ebp = arg3
int32_t var_4 = eax

if (ebp != eax && ebx != arg5)
    while (true)
        void* edx = *ebp
        void* edi_1 = *ebx
        int32_t ecx = *(edx + 0x1c)
        int32_t eax_1 = *(edi_1 + 0x1c)
        
        if (eax_1 s>= ecx)
            if (eax_1 s> ecx)
            label_580ea1:
                eax = var_4
                ebp = &ebp[1]
                *esi = edx
                esi = &esi[1]
                
                if (ebp == eax)
                    break
                
                continue
            else
                int32_t eax_2 = *(edi_1 + 0x20)
                int32_t ecx_1 = *(edx + 0x20)
                
                if (eax_2 s>= ecx_1)
                    if (eax_2 s> ecx_1)
                        goto label_580ea1
                    
                    eax_2.b = *(edi_1 + 0x73)
                    ecx_1.b = *(edx + 0x73)
                    
                    if (eax_2.b u>= ecx_1.b)
                        if (eax_2.b u> ecx_1.b)
                            goto label_580ea1
                        
                        ecx_1.b = *(edi_1 + 0x26)
                        
                        if (ecx_1.b u>= *(edx + 0x26))
                            goto label_580ea1
        
        *esi = edi_1
        ebx = &ebx[1]
        esi = &esi[1]
        
        if (ebx == arg5)
            eax = var_4
            break

void* edi_2 = (eax - ebp) s>> 2 << 2
_memcpy(esi, ebp, edi_2)
void* esi_1 = esi + edi_2
void* edi_3 = (arg5 - ebx) s>> 2 << 2
_memcpy(esi_1, ebx, edi_3)
return edi_3 + esi_1
