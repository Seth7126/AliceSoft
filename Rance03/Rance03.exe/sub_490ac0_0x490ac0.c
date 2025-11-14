// 函数: sub_490ac0
// 地址: 0x490ac0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x48) != 0)
    return 

int32_t* i = *(arg1 + 0x28)

if (i == *(arg1 + 0x2c))
    return 

int32_t ebx_1 = arg2

do
    void* ecx = *i
    int32_t var_4 = ebx_1
    arg2.b = 0
    char var_5 = 0
    sub_492dc0(ecx, &var_4, &arg2, &var_5)
    
    if (arg2.b != 0)
        *(arg1 + 0x4c) = var_4
    else if (var_5 != 0)
        *(arg1 + 0x48) = 1
    
    i = &i[1]
while (i != *(arg1 + 0x2c))
