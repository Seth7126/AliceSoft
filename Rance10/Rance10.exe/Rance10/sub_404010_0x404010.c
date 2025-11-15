// 函数: sub_404010
// 地址: 0x404010
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
void** result = *(arg1 + 4)
void* arg_4
void* edi = arg_4

if (edi s>= result && *(arg1 + 8) s> result)
    int32_t esi_1 = *(arg1 + 0x14)
    void* var_14_1 = arg1
    result = sub_404790(&arg_4, esi_1, *(arg1 + 0x10), &arg_4)
    
    if (result == esi_1)
        return sub_404370(arg1 + 0x10, &arg_4)
    
    if (*result != edi)
        void** var_14_3 = &arg_4
        return sub_404420(arg1 + 0x10, &var_4, result, &arg_4)

return result
