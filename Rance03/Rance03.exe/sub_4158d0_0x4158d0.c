// 函数: sub_4158d0
// 地址: 0x4158d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax = arg1[1]
int32_t ecx

if (arg2 u< eax)
    ecx = *arg1

if (arg2 u>= eax || ecx u> arg2)
    if (eax == arg1[2])
        eax = sub_415950(arg1, 1)
    
    int32_t* ecx_4 = arg1[1]
    
    if (ecx_4 != 0)
        eax = *arg2
        *ecx_4 = eax
else
    if (eax == arg1[2])
        eax = sub_415950(arg1, 1)
    
    int32_t* ecx_2 = arg1[1]
    
    if (ecx_2 != 0)
        int32_t eax_2 = *(*arg1 + ((arg2 - ecx) s>> 2 << 2))
        *ecx_2 = eax_2
        arg1[1] += 4
        return eax_2

arg1[1] += 4
return eax
