// 函数: sub_638970
// 地址: 0x638970
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg1
struct std::_Node_base::std::_Node_class<wchar_t, class std::regex_traits<wchar_t> >::VTable** 
    eax = sub_6e810c(0x2c)
struct std::_Node_base::std::_Node_class<wchar_t, class std::regex_traits<wchar_t> >::VTable** 
    var_4 = eax
eax[4] = 0
eax[1] = 7
eax[2] = 0
eax[3] = 0
*eax =
    &std::_Node_class<wchar_t, class std::regex_traits<wchar_t> >::`vftable'{for `std::_Node_base'}
__builtin_memset(&eax[5], 0, 0x12)
eax[0xa] = 0
eax[4] = *(arg1 + 4)
int32_t eax_3 = *(*(arg1 + 4) + 0xc)

if (eax_3 != 0)
    eax[3] = eax_3
    *(*(*(arg1 + 4) + 0xc) + 0x10) = eax

void* result = *(arg1 + 4)
*(result + 0xc) = eax
*(arg1 + 4) = eax
return result
