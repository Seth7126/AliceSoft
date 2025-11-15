// 函数: sub_493dc0
// 地址: 0x493dc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

arg5 = arg5
void** esi = arg3
void** result_2
sub_494190(&result_2, &arg5)
void** result = result_2

if (result != *data_7fcb84)
    void* ecx = result[5]
    
    if (ecx != 0)
        if (esi[5] u>= 0x10)
            esi = *esi
        
        result = (*(*(ecx + 4) + 0x28))(esi)
        
        if (result != 0)
            void** result_1 = result
            int32_t xmm3
            int32_t var_14_2 = xmm3
            result = (*(*result + 0x14))(arg2, arg4)
            long double x87_r0
            arg5 = fconvert.s(x87_r0)

return result
