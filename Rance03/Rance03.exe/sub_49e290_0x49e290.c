// 函数: sub_49e290
// 地址: 0x49e290
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t i = arg2
arg2 = i

if (i == 0)
    return 

int32_t edx_1 = *(arg1 + 0x278)
int32_t* eax = *(arg1 + 0x274)

if (eax == edx_1)
    sub_412de0(arg1 + 0x274, &arg2)
    return 

while (*eax != i)
    eax = &eax[1]
    
    if (eax == edx_1)
        break

if (eax == edx_1)
    sub_412de0(arg1 + 0x274, &arg2)
