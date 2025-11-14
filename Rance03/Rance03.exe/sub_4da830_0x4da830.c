// 函数: sub_4da830
// 地址: 0x4da830
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4_1 = arg3
int32_t* eax = arg4
void* ebx = (arg2 << 1) + 2
void* var_4 = arg2
int32_t edi
int32_t var_14 = edi
bool cond:0 = ebx != eax

while (ebx s< eax)
    int32_t ecx = ebx * 0x84
    
    if (*(ecx + arg3 + 0x30) s< *(ecx + arg3 - 0x54))
        ebx -= 1
    
    void** esi_2 = ebx * 0x84 + arg3
    char* edi_3 = arg2 * 0x84 + arg3
    
    if (edi_3 != esi_2)
        sub_401ff0(edi_3, esi_2, 0, 0xffffffff)
    
    if (&edi_3[0x18] != &esi_2[6])
        sub_401ff0(&edi_3[0x18], &esi_2[6], 0, 0xffffffff)
    
    *(edi_3 + 0x30) = esi_2[0xc]
    *(edi_3 + 0x34) = esi_2[0xd]
    
    if (&edi_3[0x38] != &esi_2[0xe])
        sub_401ff0(&edi_3[0x38], &esi_2[0xe], 0, 0xffffffff)
    
    if (&edi_3[0x50] != &esi_2[0x14])
        sub_401ff0(&edi_3[0x50], &esi_2[0x14], 0, 0xffffffff)
    
    int32_t* eax_6
    eax_6.b = esi_2[0x1a].b
    edi_3[0x68] = eax_6.b
    sub_4bf960(&edi_3[0x6c], &esi_2[0x1b])
    sub_4a6db0(&edi_3[0x78], &esi_2[0x1e])
    eax = arg4
    arg2 = ebx
    ebx = (ebx << 1) + 2
    cond:0 = ebx != eax

if (not(cond:0))
    void** edi_5 = arg3 - 0x84 + eax * 0x84
    char* esi_4 = arg2 * 0x84 + arg3
    
    if (esi_4 != edi_5)
        sub_401ff0(esi_4, edi_5, 0, 0xffffffff)
    
    if (&esi_4[0x18] != &edi_5[6])
        sub_401ff0(&esi_4[0x18], &edi_5[6], 0, 0xffffffff)
    
    *(esi_4 + 0x30) = edi_5[0xc]
    *(esi_4 + 0x34) = edi_5[0xd]
    
    if (&esi_4[0x38] != &edi_5[0xe])
        sub_401ff0(&esi_4[0x38], &edi_5[0xe], 0, 0xffffffff)
    
    if (&esi_4[0x50] != &edi_5[0x14])
        sub_401ff0(&esi_4[0x50], &edi_5[0x14], 0, 0xffffffff)
    
    int32_t* eax_14
    eax_14.b = edi_5[0x1a].b
    esi_4[0x68] = eax_14.b
    sub_4bf960(&esi_4[0x6c], &edi_5[0x1b])
    eax = sub_4a6db0(&esi_4[0x78], &edi_5[0x1e])
    arg2 = arg4 - 1

int32_t var_18_5 = arg6
return sub_4da9b0(eax, arg2, arg3, var_4, arg5)
