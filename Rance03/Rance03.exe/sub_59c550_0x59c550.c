// 函数: sub_59c550
// 地址: 0x59c550
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1

for (int32_t* i = *(arg1 + 4); i != *(arg1 + 8); i = &i[1])
    int32_t* ecx = *i
    
    if (ecx != 0)
        sub_53a360(ecx)

*(arg1 + 8) = *(arg1 + 4)
var_4 = nullptr
return sub_420c80(arg1 + 4, arg2, &var_4)
