// 函数: sub_5c8af0
// 地址: 0x5c8af0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4 = arg1

if (*(*arg1 + 0x174) != 0 && arg1[0x93] != arg1[0x94])
    __Smtx_lock_shared(&arg1[2])
    int32_t* ebp_1 = arg1[1]
    __Smtx_unlock_shared(&arg1[2])
    int32_t* i = arg1[0x93]
    
    for (int32_t edi_1 = arg1[0x94]; i != edi_1; i = &i[1])
        if (sub_5d8550(*i, ebp_1).b == 0)
            goto label_5c8b94

void* result

if (*(*arg1 + 0x168) != 0)
    __Smtx_lock_shared(&arg1[2])
    int32_t edi_2 = arg1[1]
    __Smtx_unlock_shared(&arg1[2])
    
    if ((*arg1[0x15b])(6, &arg1[3], edi_2).b == 0)
    label_5c8b94:
        result.b = 0
        return result

result.b = 1
return result
