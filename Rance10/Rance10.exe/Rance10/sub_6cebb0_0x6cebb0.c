// 函数: sub_6cebb0
// 地址: 0x6cebb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* Msg = arg2

if (Msg == 0x81)
    int32_t ebx_1 = *arg4
    
    if (ebx_1 == 0)
        return DefWindowProcA(arg1, 0x81, arg3, arg4)
    
    int32_t* var_8
    int32_t* ecx
    sub_6cf360(ecx, &var_8, &arg1)
    var_8[5] = ebx_1

sub_6cee80(&arg2, &arg1)
int32_t* eax_3 = arg2

if (eax_3 != data_7fd4c4)
    int32_t* ebx_2 = eax_3[5]
    
    if (Msg == 2)
        sub_6ceee0(&arg2, eax_3)
        *ebx_2 = 0
    
    int32_t* ecx_1 = ebx_2[0x21]
    
    if (ecx_1 != 0)
        return (**ecx_1)(arg1, Msg, arg3, arg4)

return DefWindowProcA(arg1, Msg, arg3, arg4)
