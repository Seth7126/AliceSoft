// 函数: sub_54be30
// 地址: 0x54be30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

bool cond:0 = *(arg1 + 0x28) u< 0x10
*(arg1 + 0x24) = 0
int32_t* result

if (cond:0)
    result = arg1 + 0x14
else
    result = *(arg1 + 0x14)

*result = 0
int32_t* ecx = *(arg1 + 0x10)

if (ecx != 0)
    sub_54c280(ecx)
    *(arg1 + 0x10) = 0

if (arg3[4] != 0)
    result = sub_58dea0(*(arg1 + 0x2c), arg2, arg3)
    *(arg1 + 0x10) = result
    
    if (result == 0)
        result.b = 0
        return result
    
    if (arg1 + 0x14 != arg3)
        sub_401ff0(arg1 + 0x14, arg3, 0, 0xffffffff)

result.b = 1
return result
