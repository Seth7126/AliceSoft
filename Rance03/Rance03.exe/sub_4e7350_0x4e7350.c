// 函数: sub_4e7350
// 地址: 0x4e7350
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edi = data_75d4e0
int32_t var_4 = 0
int32_t var_8 = 0
char eax = sub_46cb80(edi)

if (eax != 0)
    eax = (***(edi + 0xc))(&var_4, &var_8)

int32_t* edx = *(arg1 + 4)

if (*(edx[0x10] + 0x47c) == 0)
    return sub_485c10(arg1 + 0x64, arg2, 0)

if (arg2 == 1)
    bool cond:0_1 = *(arg1 + 0x44) == 0
    *(arg1 + 8) = 0
    
    if (cond:0_1)
        (*(*edx + 0x38))(1)
        return sub_485c10(arg1 + 0x64, arg2, 0)
    
    if (eax != 0)
        sub_485840(arg1 + 0x64, var_4, var_8, arg2, 0)
        (*(**(arg1 + 4) + 0x38))(2)
        sub_4e74c0(arg1)
        *(arg1 + 0x10) = 1
else if ((arg2 == 2 || arg2 == 4) && *(arg1 + 0x44) != 0 && eax != 0)
    sub_485840(arg1 + 0x64, var_4, var_8, arg2, 0)

return sub_485c10(arg1 + 0x64, arg2, 0)
