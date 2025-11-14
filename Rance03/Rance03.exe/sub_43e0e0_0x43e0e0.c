// 函数: sub_43e0e0
// 地址: 0x43e0e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* eax_1 = **(data_75d4c4 + 8)

if (arg3 s> 0)
    int32_t i
    
    do
        eax_1 = *eax_1
        i = arg3
        arg3 -= 1
    while (i != 1)

int32_t eax_2 = eax_1[6]
int32_t ecx = arg2 * 3
int32_t* edx = eax_2 + (ecx << 3)

if (*(eax_2 + (ecx << 3) + 0x14) u>= 0x10)
    edx = *edx

return (*(*arg4 + 4))(edx)
