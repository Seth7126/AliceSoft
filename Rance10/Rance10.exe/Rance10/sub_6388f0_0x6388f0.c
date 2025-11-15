// 函数: sub_6388f0
// 地址: 0x6388f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

arg1[3] += 1
struct std::_Node_base::std::_Node_capture::VTable** eax = sub_635b00(&arg1[9], arg1[3])
sub_635940(arg1)
int32_t var_10_2 = sub_635a70(&arg1[9], eax)
sub_6024e0(&arg1[5], arg1[3] + 1)
int32_t edx = eax[5]
int32_t* ecx_8 = arg1[5] + (edx u>> 5 << 2)
int32_t result = *ecx_8 | 1 << ((edx & 0x1f) u% 0x20)
*ecx_8 = result
return result
