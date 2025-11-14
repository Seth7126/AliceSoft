// 函数: sub_55a6a0
// 地址: 0x55a6a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4_1 = arg3
int32_t* ebx = arg4
int32_t eax = arg2
void** esi = arg6
int32_t* ebp = arg3
int32_t var_4 = eax

if (ebp != eax && ebx != arg5)
    while (true)
        void* edi_1 = *ebp
        void* ecx = *ebx
        
        if (sub_5594e0(ecx, edi_1) == 0)
            eax = var_4
            ebp = &ebp[1]
            *esi = edi_1
            esi = &esi[1]
            
            if (ebp == eax)
                break
        else
            *esi = ecx
            ebx = &ebx[1]
            esi = &esi[1]
            
            if (ebx == arg5)
                eax = var_4
                break

_memcpy(esi, ebp, (eax - ebp) s>> 2 << 2)
void* esi_1 = &esi[(eax - ebp) s>> 2]
int32_t edi_3 = (arg5 - ebx) s>> 2 << 2
_memcpy(esi_1, ebx, edi_3)
return edi_3 + esi_1
