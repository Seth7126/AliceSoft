// 函数: sub_60b530
// 地址: 0x60b530
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4 = arg1
int32_t* esi = arg1[0x3d]
var_4 = esi
int32_t edi = *esi

if (esi != edi)
    int32_t* arg_4
    int32_t* ebx_1 = arg_4
    
    do
        arg_4 = esi
        sub_429da0(&arg_4)
        
        if (arg_4[4] u<= ebx_1)
            arg_4 = esi
            sub_429da0(&arg_4)
            return arg_4[5] * 0x6c + arg1[0xd]
        
        sub_429da0(&var_4)
        esi = var_4
    while (esi != edi)

return 0
