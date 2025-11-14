// 函数: sub_414b60
// 地址: 0x414b60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax = arg1[1]
int32_t ecx

if (arg2 u< eax)
    ecx = *arg1

if (arg2 u>= eax || ecx u> arg2)
    if (eax == arg1[2])
        eax = sub_403590(arg1, 1)
    
    char* ecx_4 = arg1[1]
    
    if (ecx_4 != 0)
        eax.b = *arg2
        *ecx_4 = eax.b
else
    if (eax == arg1[2])
        eax = sub_403590(arg1, 1)
    
    char* ecx_2 = arg1[1]
    
    if (ecx_2 != 0)
        int32_t eax_1
        eax_1.b = (arg2 - ecx)[*arg1]
        *ecx_2 = eax_1.b
        arg1[1] += 1
        return eax_1

arg1[1] += 1
return eax
