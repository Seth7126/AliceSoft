// 函数: sub_638cd0
// 地址: 0x638cd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg1
struct std::_Node_base::std::_Node_str<wchar_t>::VTable** eax = sub_6e810c(0x20)
struct std::_Node_base::std::_Node_str<wchar_t>::VTable** var_4 = eax
eax[1] = 6
eax[2] = 0
eax[3] = 0
eax[4] = 0
*eax = &std::_Node_str<wchar_t>::`vftable'{for `std::_Node_base'}
eax[5] = 0
eax[6] = 0
eax[7] = 0
eax[4] = *(arg1 + 4)
int32_t eax_3 = *(*(arg1 + 4) + 0xc)

if (eax_3 != 0)
    eax[3] = eax_3
    *(*(*(arg1 + 4) + 0xc) + 0x10) = eax

void* result = *(arg1 + 4)
*(result + 0xc) = eax
*(arg1 + 4) = eax
return result
