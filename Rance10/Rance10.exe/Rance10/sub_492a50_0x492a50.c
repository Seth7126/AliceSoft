// 函数: sub_492a50
// 地址: 0x492a50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = data_7fcb78
int32_t* var_14 = arg1
int32_t eax = *(edi + 4)

if (arg1 s>= eax && *(edi + 8) s> eax)
    int32_t* var_28_1 = arg1
    int32_t* eax_2 = sub_404790(&var_14, *(edi + 0x14), *(edi + 0x10), &var_14)
    
    if (eax_2 != *(edi + 0x14) && *eax_2 == arg1)
        sub_6feca0(eax_2, &eax_2[1], *(edi + 0x14) - &eax_2[1])
        *(edi + 0x14) -= 4

int32_t* result = sub_492c40(arg1)

if (arg2 == 0)
    return result

int32_t ecx_5 = (**arg2)()
var_14 = arg1
int32_t* var_28_3 = var_14
int32_t* var_10_1 = arg2
int32_t* var_2c_3 = &var_14
int32_t* var_c
return sub_494820(data_7fcb84, &var_c, ecx_5)
