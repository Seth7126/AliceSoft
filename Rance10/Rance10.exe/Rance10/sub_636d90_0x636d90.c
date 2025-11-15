// 函数: sub_636d90
// 地址: 0x636d90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg1
struct std::_Node_base::std::_Node_endif::VTable** result = sub_6e810c(0x14)
struct std::_Node_base::std::_Node_endif::VTable** result_1 = result
result[4] = 0
result[1] = 0x11
result[2] = 0
result[3] = 0
*result = &std::_Node_endif::`vftable'{for `std::_Node_base'}
result[4] = *(arg1 + 4)
int32_t eax_2 = *(*(arg1 + 4) + 0xc)

if (eax_2 != 0)
    result[3] = eax_2
    *(*(*(arg1 + 4) + 0xc) + 0x10) = result

*(*(arg1 + 4) + 0xc) = result
*(arg1 + 4) = result
struct std::_Node_base::std::_Node_if::VTable** eax_6 = sub_6e810c(0x1c)
struct std::_Node_base::std::_Node_if::VTable** var_4 = eax_6
eax_6[5] = result
eax_6[1] = 0x10
eax_6[2] = 0
eax_6[3] = 0
eax_6[4] = 0
*eax_6 = &std::_Node_if::`vftable'{for `std::_Node_base'}
eax_6[6] = 0
void* ecx = *(arg2 + 0xc)
*(*(ecx + 0x10) + 0xc) = eax_6
eax_6[4] = *(ecx + 0x10)
*(ecx + 0x10) = eax_6
eax_6[3] = ecx
return result
