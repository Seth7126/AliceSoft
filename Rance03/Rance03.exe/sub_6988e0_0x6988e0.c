// 函数: sub_6988e0
// 地址: 0x6988e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* Msg = arg2

if (Msg == 0x81)
    int32_t ebx_1 = *arg4
    
    if (ebx_1 == 0)
        return DefWindowProcA(arg1, 0x81, arg3, arg4)
    
    int32_t* ecx
    *sub_698be0(ecx, &arg1) = ebx_1

sub_698ea0(&arg2, &arg1)
int32_t* eax_3 = arg2

if (eax_3 != data_75dd14)
    int32_t* ebx_2 = eax_3[5]
    
    if (Msg == 2)
        sub_698c60(&arg2, eax_3)
        *ebx_2 = 0
    
    int32_t* ecx_1 = ebx_2[0x21]
    
    if (ecx_1 != 0)
        return (**ecx_1)(arg1, Msg, arg3, arg4)

return DefWindowProcA(arg1, Msg, arg3, arg4)
