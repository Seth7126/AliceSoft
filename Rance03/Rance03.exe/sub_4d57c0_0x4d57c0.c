// 函数: sub_4d57c0
// 地址: 0x4d57c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x44) != 0)
    *(arg1 + 0x44) = 0

int32_t* ecx = *(arg2 + 0x10)

if (ecx == 0)
    sub_69a52d()
    noreturn

int32_t result = (*(*ecx + 8))()

if (result.b == 0)
    return result

if (arg3 != 0)
    *(arg1 + 0x3c) = *(arg1 + 0x38)

void* ecx_1

if (arg1 == 0)
    ecx_1 = nullptr
else
    ecx_1 = arg1 + 0x2c

if (*(arg1 + 0x44) != ecx_1)
    *(arg1 + 0x44) = ecx_1
    
    if (ecx_1 != 0)
        (**ecx_1)()

int32_t* ecx_2 = *(arg1 + 0x44)

if (ecx_2 != 0)
    (**ecx_2)()

result.b = 1
return result
