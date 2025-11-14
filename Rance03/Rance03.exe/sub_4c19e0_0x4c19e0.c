// 函数: sub_4c19e0
// 地址: 0x4c19e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4_1 = arg3
int32_t ebx = arg2
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(ebx - 1)
int32_t eax_3 = (eax_1 - edx) s>> 1
int32_t var_4 = eax_3

while (arg4 s< ebx)
    int32_t* esi_1 = eax_3 * 0x5c
    
    if (*(esi_1 + arg3 + 8) s>= arg5[2])
        break
    
    int32_t* ebx_2 = ebx * 0x5c + arg3
    *ebx_2 = *(esi_1 + arg3)
    ebx_2[1] = *(esi_1 + arg3 + 4)
    ebx_2[2] = *(esi_1 + arg3 + 8)
    ebx_2[3] = *(esi_1 + arg3 + 0xc)
    void** eax_10 = arg3 + 0x10 + esi_1
    
    if (&ebx_2[4] != eax_10)
        sub_401ff0(&ebx_2[4], eax_10, 0, 0xffffffff)
    
    int32_t* eax_12 = arg3 + 0x28 + esi_1
    
    if (&ebx_2[0xa] != eax_12)
        sub_401ff0(&ebx_2[0xa], eax_12, 0, 0xffffffff)
    
    eax_12.b = *(esi_1 + arg3 + 0x40)
    ebx_2[0x10].b = eax_12.b
    sub_4bf960(&ebx_2[0x11], arg3 + 0x44 + esi_1)
    sub_4a6db0(&ebx_2[0x14], arg3 + 0x50 + esi_1)
    ebx = var_4
    int32_t eax_19
    int32_t edx_1
    edx_1:eax_19 = sx.q(var_4 - 1)
    eax_3 = (eax_19 - edx_1) s>> 1
    var_4 = eax_3

void* esi_3 = ebx * 0x5c + arg3
*esi_3 = *arg5
*(esi_3 + 4) = arg5[1]
*(esi_3 + 8) = arg5[2]
*(esi_3 + 0xc) = arg5[3]

if (esi_3 + 0x10 != &arg5[4])
    sub_401ff0(esi_3 + 0x10, &arg5[4], 0, 0xffffffff)

if (esi_3 + 0x28 != &arg5[0xa])
    sub_401ff0(esi_3 + 0x28, &arg5[0xa], 0, 0xffffffff)

void* eax_26
eax_26.b = arg5[0x10].b
*(esi_3 + 0x40) = eax_26.b
sub_4bf960(esi_3 + 0x44, &arg5[0x11])
return sub_4a6db0(esi_3 + 0x50, &arg5[0x14])
