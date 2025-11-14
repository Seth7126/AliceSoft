// 函数: sub_4a7f80
// 地址: 0x4a7f80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = arg3
void* ebp = arg2
void* ecx = arg4
void* eax = (ebp << 1) + 2
bool cond:0 = eax != ecx

while (eax s< ecx)
    void* edx = *(arg3 + (eax << 2) - 4)
    void* ecx_1 = *(arg3 + (eax << 2))
    int32_t ebx_1 = *(edx + 4)
    int32_t edi_1 = *(ecx_1 + 4)
    
    if (edi_1 s< ebx_1)
        eax -= 1
    else if (edi_1 s<= ebx_1)
        int32_t edi_2 = *(ecx_1 + 8)
        int32_t ebx_2 = *(edx + 8)
        
        if (edi_2 s< ebx_2)
            eax -= 1
        else if (edi_2 s<= ebx_2 && *(ecx_1 + 0xc) s< *(edx + 0xc))
            eax -= 1
    
    *(arg3 + (ebp << 2)) = *(arg3 + (eax << 2))
    ebp = eax
    ecx = arg4
    eax = (eax << 1) + 2
    cond:0 = eax != ecx

if (not(cond:0))
    eax = *(arg3 + (ecx << 2) - 4)
    *(arg3 + (ebp << 2)) = eax
    ebp = ecx - 1

int32_t __saved_ebx = arg6
return sub_4a8010(eax, ebp, arg3, arg2, arg5)
