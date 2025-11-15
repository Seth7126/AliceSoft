// 函数: sub_5f61e0
// 地址: 0x5f61e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = 0
int32_t eax = (*(*arg1 + 8))()
int32_t result_2 = 1

if (eax s> 1)
    do
        int32_t* ecx = *(arg2 + 0x24)
        int32_t result_1 = result
        int32_t result_3 = result_2
        
        if (ecx == 0)
            sub_6d090a()
            noreturn
        
        if ((*(*ecx + 8))(&result_3, &result_1) != 0)
            result = result_2
        
        result_2 += 1
    while (result_2 s< eax)

return result
