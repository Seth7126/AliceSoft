// 函数: sub_5eaf60
// 地址: 0x5eaf60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx = *(arg1 + 4)

if (ecx != 0)
    (*(*ecx + 4))()
    *(arg1 + 4) = 0

int32_t* ecx_1 = data_75d50c

if (ecx_1 != 0)
    (*(*ecx_1 + 4))()
    data_75d50c = 0

if (sub_5deb20(arg2) != 0)
    int32_t* eax_4 = data_75d50c
    *(arg1 + 4) = eax_4
    
    if (eax_4 != 0)
        (**eax_4)()
        int32_t result
        result.b = 1
        return result
    
    sub_64b530(0x6eb808)

return 0
