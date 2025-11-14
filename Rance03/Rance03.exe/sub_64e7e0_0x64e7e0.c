// 函数: sub_64e7e0
// 地址: 0x64e7e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (sub_64f500(arg1 + 0x18, arg2, *(arg1 + 0x14)) == 0)
    return 0xffffffff

int32_t ebx_1 = 0

if (((*(arg1 + 0x144) - *(arg1 + 0x140)) & 0xfffffffc) s<= 0)
    return 0

while (true)
    void* edi_1 = *(*(arg1 + 0x140) + (ebx_1 << 2))
    char eax_6
    int32_t ecx_2
    eax_6, ecx_2 = sub_650740(edi_1, **(arg1 + 0x20), *(arg1 + 0x14))
    
    if (eax_6 == 0)
        return 0xffffffff
    
    char* eax_7 = edi_1 + 0xc8
    
    if (*(edi_1 + 0xdc) u>= 0x10)
        eax_7 = *eax_7
    
    int32_t var_14_2 = ecx_2
    sub_6502c0(arg1 + 0x18, **(edi_1 + 8), eax_7)
    ebx_1 += 1
    
    if (ebx_1 s>= (*(arg1 + 0x144) - *(arg1 + 0x140)) s>> 2)
        return 0
