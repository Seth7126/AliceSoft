// 函数: sub_534cf0
// 地址: 0x534cf0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4_1 = arg3
int32_t* ebx = arg4
int32_t eax = arg2
int32_t* esi = arg6
int32_t* ebp = arg3
int32_t var_4 = eax

if (ebp != eax && ebx != arg5)
    while (true)
        int16_t top = top + 2
        
        if (sub_535480(*ebx, *ebp) == 0)
            int32_t eax_9 = *ebp
            ebp = &ebp[1]
            *esi = eax_9
            esi = &esi[1]
            eax = var_4
            
            if (ebp == eax)
                break
        else
            int32_t eax_2 = *ebx
            ebx = &ebx[1]
            *esi = eax_2
            esi = &esi[1]
            
            if (ebx == arg5)
                eax = var_4
                break

_memcpy(esi, ebp, (eax - ebp) s>> 2 << 2)
void* esi_1 = &esi[(eax - ebp) s>> 2]
void* edi_3 = (arg5 - ebx) s>> 2 << 2
_memcpy(esi_1, ebx, edi_3)
return edi_3 + esi_1
