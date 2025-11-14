// 函数: sub_5bf170
// 地址: 0x5bf170
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4 = arg1
int32_t* esi = arg1[0x37]
var_4 = esi
int32_t edi = *esi

if (esi != edi)
    int32_t* arg_4
    int32_t* ebx_1 = arg_4
    
    do
        arg_4 = esi
        sub_418580(&arg_4)
        
        if (arg_4[4] s<= ebx_1)
            arg_4 = esi
            sub_418580(&arg_4)
            return arg1[0x15] + arg_4[5] * 0x48
        
        sub_418580(&var_4)
        esi = var_4
    while (esi != edi)

return 0
