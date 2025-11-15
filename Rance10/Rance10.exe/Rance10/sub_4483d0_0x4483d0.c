// 函数: sub_4483d0
// 地址: 0x4483d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = arg4
void* var_1c = arg1
int32_t var_4 = 0
*arg3 = sub_436500(&var_8)
sub_447d30(arg1 + 0x20)
int32_t i = 0

if (*(arg1 + 0x14) u> 0)
    do
        if (sub_447d90(arg1 + 0x20, &var_8) == 0)
            return false
        
        if (sub_436eb0(arg2, i, arg1 + 0x20) == 0)
            return false
        
        i += 1
    while (i u< *(arg1 + 0x14))

void* eax_3 = *(arg1 + 0x18)

if (eax_3 != 0)
    *(eax_3 + 0x2d) = 0

void* result = *(arg1 + 0x1c)
*(arg1 + 0x18) = result

if (result != 0)
    *(result + 0x2c) = 1

*(arg2 + 0x2d) = 1
result.b = 1
*(arg1 + 0x1c) = arg2
return result
