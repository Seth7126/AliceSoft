// 函数: sub_490d70
// 地址: 0x490d70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
int32_t arg_4
int32_t ebp = arg_4
int32_t edi = ebp << 1

if ((*(arg1 + 0x14) - *(arg1 + 0xc)) s>> 2 u< edi)
    if (edi u> 0x3fffffff)
        sub_6d0927("vector<T> too long")
        noreturn
    
    sub_490e30(arg1 + 0xc, edi)

arg_4 = *(arg1 + 4)
*(arg1 + 0x10) = *(arg1 + 0xc)
sub_490e90(arg1 + 0xc, &var_4, *(arg1 + 0xc), edi, &arg_4)
*(arg1 + 0x1c) = ebp
*(arg1 + 0x18) = ebp - 1
return ebp - 1
