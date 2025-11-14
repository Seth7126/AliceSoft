// 函数: sub_4c15f0
// 地址: 0x4c15f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4_1 = arg3
void* ebx = arg4
void* esi = (arg2 << 1) + 2
void* var_4 = arg2
int32_t edi
int32_t var_14 = edi
bool cond:0 = esi != ebx

while (esi s< ebx)
    int32_t ecx = esi * 0x5c
    
    if (*(ecx + arg3 + 8) s< *(ecx + arg3 - 0x54))
        esi -= 1
    
    void* edi_3 = esi * 0x5c + arg3
    void* ebx_2 = arg2 * 0x5c + arg3
    *ebx_2 = *edi_3
    *(ebx_2 + 4) = *(edi_3 + 4)
    *(ebx_2 + 8) = *(edi_3 + 8)
    *(ebx_2 + 0xc) = *(edi_3 + 0xc)
    
    if (ebx_2 + 0x10 != edi_3 + 0x10)
        sub_401ff0(ebx_2 + 0x10, edi_3 + 0x10, 0, 0xffffffff)
    
    if (ebx_2 + 0x28 != edi_3 + 0x28)
        sub_401ff0(ebx_2 + 0x28, edi_3 + 0x28, 0, 0xffffffff)
    
    int32_t* eax_6
    eax_6.b = *(edi_3 + 0x40)
    *(ebx_2 + 0x40) = eax_6.b
    sub_4bf960(ebx_2 + 0x44, edi_3 + 0x44)
    arg1 = sub_4a6db0(ebx_2 + 0x50, edi_3 + 0x50)
    ebx = arg4
    arg2 = esi
    esi = (esi << 1) + 2
    cond:0 = esi != ebx

if (not(cond:0))
    int32_t edi_4 = ebx * 0x5c
    void* esi_2 = arg2 * 0x5c + arg3
    *esi_2 = *(edi_4 + arg3 - 0x5c)
    *(esi_2 + 4) = *(edi_4 + arg3 - 0x58)
    *(esi_2 + 8) = *(edi_4 + arg3 - 0x54)
    *(esi_2 + 0xc) = *(edi_4 + arg3 - 0x50)
    void** eax_14 = arg3 - 0x4c + edi_4
    
    if (esi_2 + 0x10 != eax_14)
        sub_401ff0(esi_2 + 0x10, eax_14, 0, 0xffffffff)
    
    void* eax_16 = arg3 - 0x34 + edi_4
    
    if (esi_2 + 0x28 != eax_16)
        sub_401ff0(esi_2 + 0x28, eax_16, 0, 0xffffffff)
    
    eax_16.b = *(edi_4 + arg3 - 0x1c)
    *(esi_2 + 0x40) = eax_16.b
    sub_4bf960(esi_2 + 0x44, arg3 - 0x18 + edi_4)
    arg1 = sub_4a6db0(esi_2 + 0x50, arg3 - 0xc + edi_4)
    arg2 = ebx - 1

int32_t var_18_5 = arg6
return sub_4c19e0(arg1, arg2, arg3, var_4, arg5)
