// 函数: sub_642ad0
// 地址: 0x642ad0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** result = *arg1
void** result_1 = result[1]

while (*(result_1 + 0xd) == 0)
    char eax_1 = sub_643940(&result_1[5], arg2 + 4)
    char eax_2
    char eax_3
    
    if (eax_1 == 0)
        eax_2 = sub_6439e0(&result_1[5], arg2 + 4)
        
        if (eax_2 == 0)
            eax_3 = sub_413c90(&result_1[0x12], arg2 + 0x38)
    
    if (eax_1 != 0 || (eax_2 == 0 && eax_3 != 0))
        result_1 = result_1[2]
    else
        result = result_1
        result_1 = *result_1

return result
