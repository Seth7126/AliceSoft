// 函数: sub_49e580
// 地址: 0x49e580
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x260) != 0)
    *(arg1 + 0x260) = 0

int32_t* ecx = *(arg2 + 0x10)

if (ecx == 0)
    sub_69a52d()
    noreturn

char result = (*(*ecx + 8))()

if (result == 0)
    return result

void* ecx_1

if (arg1 == 0)
    ecx_1 = nullptr
else
    ecx_1 = arg1 + 0x2c

if (*(arg1 + 0x260) != ecx_1)
    *(arg1 + 0x260) = ecx_1
    
    if (ecx_1 != 0)
        (**ecx_1)()

int32_t* ecx_2 = *(arg1 + 0x260)

if (ecx_2 != 0)
    (**ecx_2)()

return 1
