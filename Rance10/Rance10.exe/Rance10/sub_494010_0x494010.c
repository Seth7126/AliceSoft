// 函数: sub_494010
// 地址: 0x494010
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** result_1 = arg3
int32_t arg_8 = arg_8
void** esi = arg3
sub_494190(&result_1, &arg_8)
void** result = result_1

if (result != *data_7fcb84)
    void* ecx = result[5]
    
    if (ecx != 0)
        if (esi[5] u>= 0x10)
            esi = *esi
        
        result = (*(*(ecx + 4) + 0x24))(esi)
        
        if (result != 0)
            return (*(*result + 0x1c))(arg4, arg2)

result.b = 0
return result
