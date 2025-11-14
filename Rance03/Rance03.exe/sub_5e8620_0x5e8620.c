// 函数: sub_5e8620
// 地址: 0x5e8620
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx
ebx.b = arg2

if (*(arg1 + 0x64) != ebx.b)
    int32_t eax_1
    eax_1.b = ebx.b != 0
    char eax_3 = (**(arg1 + 0xe8))(1, eax_1)
    
    if (eax_3 == 0)
        return eax_3
    
    *(arg1 + 0x64) = ebx.b
    sub_5e52b0(arg1)

int32_t eax
eax.b = 1
return eax
