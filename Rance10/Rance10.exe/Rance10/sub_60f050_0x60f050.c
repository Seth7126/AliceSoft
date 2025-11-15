// 函数: sub_60f050
// 地址: 0x60f050
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* result = arg2

while (result != arg3)
    void* edi_1 = *arg1[1]
    int32_t* eax_1 = sub_44b960(edi_1, *(edi_1 + 4), &result[2])
    int32_t eax_2 = arg1[2]
    
    if (0x71c71c6 - eax_2 u< 1)
        sub_6d0927("list<T> too long")
        noreturn
    
    arg1[2] = eax_2 + 1
    *(edi_1 + 4) = eax_1
    *eax_1[1] = eax_1
    void* eax_5 = *arg1[1]
    void* var_14_2 = eax_5
    void* var_8
    sub_60df70(arg1, &var_8, eax_5 + 8)
    result = *arg2
    arg2 = result

return result
