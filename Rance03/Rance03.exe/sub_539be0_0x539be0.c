// 函数: sub_539be0
// 地址: 0x539be0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 == arg2)
    return arg4

void* ebp = arg4
void* ebx = arg3 + 0x40
void* var_8 = ebx
arg4 = ebp

do
    int32_t* edi_1 = ebx - 0x34
    int32_t* esi_1 = ebp + 8
    int32_t j_1 = 3
    int32_t j
    
    do
        *esi_1 = *(esi_1 + ebx - ebp - 0x40)
        sub_4a6db0(&esi_1[1], edi_1)
        edi_1 = &edi_1[5]
        esi_1 = &esi_1[5]
        j = j_1
        j_1 -= 1
    while (j != 1)
    int32_t* ebx_2 = var_8
    *(arg4 + 0x40) = *ebx_2
    *(arg4 + 0x44) = ebx_2[1]
    ebx = &ebx_2[0x13]
    *(arg4 + 0x48) = ebx_2[2]
    ebp = arg4 + 0x4c
    arg4 = ebp
    var_8 = ebx
while (ebx - 0x40 != arg2)

return ebp
