// 函数: sub_4c1760
// 地址: 0x4c1760
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = arg3
int32_t edi = arg2
int32_t var_4 = arg3
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(edi - 1)
int32_t ebp_1 = (eax_1 - edx) s>> 1

while (arg4 s< edi)
    int32_t* esi_2 = ebp_1 * 0x5c + arg3
    
    if (esi_2[2] s>= arg5[2])
        break
    
    int32_t* edi_2 = edi * 0x5c + arg3
    *edi_2 = *esi_2
    edi_2[1] = esi_2[1]
    edi_2[2] = esi_2[2]
    edi_2[3] = esi_2[3]
    
    if (&edi_2[4] != &esi_2[4])
        sub_401ff0(&edi_2[4], &esi_2[4], 0, 0xffffffff)
    
    if (&edi_2[0xa] != &esi_2[0xa])
        sub_401ff0(&edi_2[0xa], &esi_2[0xa], 0, 0xffffffff)
    
    void* eax_9
    eax_9.b = esi_2[0x10].b
    edi_2[0x10].b = eax_9.b
    sub_4bf960(&edi_2[0x11], &esi_2[0x11])
    sub_4a6db0(&edi_2[0x14], &esi_2[0x14])
    arg3 = var_4
    int32_t eax_13
    int32_t edx_1
    edx_1:eax_13 = sx.q(ebp_1 - 1)
    edi = ebp_1
    ebp_1 = (eax_13 - edx_1) s>> 1

void* esi_4 = edi * 0x5c + arg3
*esi_4 = *arg5
*(esi_4 + 4) = arg5[1]
*(esi_4 + 8) = arg5[2]
*(esi_4 + 0xc) = arg5[3]

if (esi_4 + 0x10 != &arg5[4])
    sub_401ff0(esi_4 + 0x10, &arg5[4], 0, 0xffffffff)

if (esi_4 + 0x28 != &arg5[0xa])
    sub_401ff0(esi_4 + 0x28, &arg5[0xa], 0, 0xffffffff)

int32_t* eax_20
eax_20.b = arg5[0x10].b
*(esi_4 + 0x40) = eax_20.b
sub_4bf960(esi_4 + 0x44, &arg5[0x11])
return sub_4a6db0(esi_4 + 0x50, &arg5[0x14])
