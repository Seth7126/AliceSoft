// 函数: sub_48fe10
// 地址: 0x48fe10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_c = arg1
int32_t result = 0
int32_t* i = *(arg1 + 8)

while (i != *(arg1 + 0xc))
    void* eax_1 = *i
    int32_t eax_2
    
    if (*(eax_1 + 8) == 3)
        if (sub_4877d0(arg2, eax_1 + 0x24) != 0)
            eax_2 = sub_48fe10(arg2)
        else
            eax_2 = 1
    else
        eax_2 = 0
    
    i = &i[1]
    result += eax_2

return result
