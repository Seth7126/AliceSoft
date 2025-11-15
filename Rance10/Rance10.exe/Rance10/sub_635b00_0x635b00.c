// 函数: sub_635b00
// 地址: 0x635b00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
struct std::_Node_base::std::_Node_capture::VTable** result = sub_6e810c(0x18)
struct std::_Node_base::std::_Node_capture::VTable** result_1 = result
result[4] = 0
result[1] = 0xd
result[2] = 0
result[3] = 0
*result = &std::_Node_capture::`vftable'{for `std::_Node_base'}
result[5] = arg2
result[4] = *(arg1 + 4)
int32_t eax_2 = *(*(arg1 + 4) + 0xc)

if (eax_2 != 0)
    result[3] = eax_2
    *(*(*(arg1 + 4) + 0xc) + 0x10) = result

*(*(arg1 + 4) + 0xc) = result
*(arg1 + 4) = result
return result
