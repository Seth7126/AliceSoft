// 函数: sub_4c14b0
// 地址: 0x4c14b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = arg3
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
    
    int32_t* edi_3 = esi * 0x5c + arg3
    int32_t* ebx_2 = arg2 * 0x5c + arg3
    *ebx_2 = *edi_3
    ebx_2[1] = edi_3[1]
    ebx_2[2] = edi_3[2]
    ebx_2[3] = edi_3[3]
    
    if (&ebx_2[4] != &edi_3[4])
        sub_401ff0(&ebx_2[4], &edi_3[4], 0, 0xffffffff)
    
    if (&ebx_2[0xa] != &edi_3[0xa])
        sub_401ff0(&ebx_2[0xa], &edi_3[0xa], 0, 0xffffffff)
    
    void* eax_6
    eax_6.b = edi_3[0x10].b
    ebx_2[0x10].b = eax_6.b
    sub_4bf960(&ebx_2[0x11], &edi_3[0x11])
    arg1 = sub_4a6db0(&ebx_2[0x14], &edi_3[0x14])
    ebx = arg4
    arg2 = esi
    esi = (esi << 1) + 2
    cond:0 = esi != ebx

if (not(cond:0))
    void* edi_5 = ebx * 0x5c + arg3
    void* esi_2 = arg2 * 0x5c + arg3
    *esi_2 = *(edi_5 - 0x5c)
    *(esi_2 + 4) = *(edi_5 - 0x58)
    *(esi_2 + 8) = *(edi_5 - 0x54)
    *(esi_2 + 0xc) = *(edi_5 - 0x50)
    
    if (esi_2 + 0x10 != edi_5 - 0x4c)
        sub_401ff0(esi_2 + 0x10, edi_5 - 0x4c, 0, 0xffffffff)
    
    if (esi_2 + 0x28 != edi_5 - 0x34)
        sub_401ff0(esi_2 + 0x28, edi_5 - 0x34, 0, 0xffffffff)
    
    int32_t* eax_14
    eax_14.b = *(edi_5 - 0x1c)
    *(esi_2 + 0x40) = eax_14.b
    sub_4bf960(esi_2 + 0x44, edi_5 - 0x18)
    arg1 = sub_4a6db0(esi_2 + 0x50, edi_5 - 0xc)
    arg2 = ebx - 1

int32_t var_18_5 = arg6
return sub_4c1760(arg1, arg2, arg3, var_4, arg5)
