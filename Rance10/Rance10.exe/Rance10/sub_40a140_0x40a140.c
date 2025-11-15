// 函数: sub_40a140
// 地址: 0x40a140
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
var_4.b = 0
void* var_14 = var_4
sub_40a380(arg3, *(arg1 + 4), &arg3[1], arg3)
void* edi = *(arg1 + 4)

for (int32_t* i = edi - 4; i != edi; i = &i[1])
    int32_t* ecx_1 = *i
    
    if (ecx_1 != 0)
        (**ecx_1)(1)

*(arg1 + 4) -= 4
*arg2 = arg3
return arg2
