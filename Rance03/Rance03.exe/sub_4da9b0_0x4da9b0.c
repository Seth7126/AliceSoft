// 函数: sub_4da9b0
// 地址: 0x4da9b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = arg3
int32_t esi = arg2
int32_t var_4 = arg3
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(esi - 1)
int32_t ebp_1 = (eax_1 - edx) s>> 1

while (arg4 s< esi)
    void** edi_2 = ebp_1 * 0x84 + arg3
    
    if (edi_2[0xc] s>= arg5[0xc])
        break
    
    char* esi_2 = esi * 0x84 + arg3
    
    if (esi_2 != edi_2)
        sub_401ff0(esi_2, edi_2, 0, 0xffffffff)
    
    if (&esi_2[0x18] != &edi_2[6])
        sub_401ff0(&esi_2[0x18], &edi_2[6], 0, 0xffffffff)
    
    *(esi_2 + 0x30) = edi_2[0xc]
    *(esi_2 + 0x34) = edi_2[0xd]
    
    if (&esi_2[0x38] != &edi_2[0xe])
        sub_401ff0(&esi_2[0x38], &edi_2[0xe], 0, 0xffffffff)
    
    if (&esi_2[0x50] != &edi_2[0x14])
        sub_401ff0(&esi_2[0x50], &edi_2[0x14], 0, 0xffffffff)
    
    int32_t* eax_8
    eax_8.b = edi_2[0x1a].b
    esi_2[0x68] = eax_8.b
    sub_4bf960(&esi_2[0x6c], &edi_2[0x1b])
    sub_4a6db0(&esi_2[0x78], &edi_2[0x1e])
    arg3 = var_4
    int32_t eax_12
    int32_t edx_1
    edx_1:eax_12 = sx.q(ebp_1 - 1)
    esi = ebp_1
    ebp_1 = (eax_12 - edx_1) s>> 1

void* esi_4 = esi * 0x84 + arg3

if (esi_4 != arg5)
    sub_401ff0(esi_4, arg5, 0, 0xffffffff)

if (esi_4 + 0x18 != &arg5[6])
    sub_401ff0(esi_4 + 0x18, &arg5[6], 0, 0xffffffff)

*(esi_4 + 0x30) = arg5[0xc]
*(esi_4 + 0x34) = arg5[0xd]

if (esi_4 + 0x38 != &arg5[0xe])
    sub_401ff0(esi_4 + 0x38, &arg5[0xe], 0, 0xffffffff)

if (esi_4 + 0x50 != &arg5[0x14])
    sub_401ff0(esi_4 + 0x50, &arg5[0x14], 0, 0xffffffff)

int32_t* eax_18
eax_18.b = arg5[0x1a].b
*(esi_4 + 0x68) = eax_18.b
sub_4bf960(esi_4 + 0x6c, &arg5[0x1b])
return sub_4a6db0(esi_4 + 0x78, &arg5[0x1e])
