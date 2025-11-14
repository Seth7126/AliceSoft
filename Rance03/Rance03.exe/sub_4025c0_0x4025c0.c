// 函数: sub_4025c0
// 地址: 0x4025c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg2 == 0)
    bool cond:0 = *(arg1 + 0x18) u< 0x10
    void** result = arg1 + 4
    result[4] = arg2
    
    if (not(cond:0))
        result = *result
    
    *result = nullptr
    return result

if (*arg2 == 0)
    return sub_402110(arg1 + 4, arg2, nullptr)

char* ecx_1 = arg2
char i

do
    i = *ecx_1
    ecx_1 = &ecx_1[1]
while (i != 0)
return sub_402110(arg1 + 4, arg2, ecx_1 - &ecx_1[1])
