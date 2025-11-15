// 函数: sub_635a70
// 地址: 0x635a70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct std::_Node_base::std::_Node_end_group::VTable** edi = arg2
void* eax = edi[1]
void* ebx

if (eax == 8)
    ebx = eax + 1
else if (eax != 0xa)
    int32_t ebx_1
    ebx_1.b = eax != 0xb
    ebx = (ebx_1 << 1) + 0xc
else
    ebx = eax + 2

struct std::_Node_base::std::_Node_end_group::VTable** eax_1 = sub_6e810c(0x18)
arg2 = eax_1
eax_1[4] = 0
eax_1[1] = ebx
eax_1[2] = 0
eax_1[3] = 0
*eax_1 = &std::_Node_end_group::`vftable'{for `std::_Node_base'}
eax_1[5] = edi
eax_1[4] = *(arg1 + 4)
int32_t eax_4 = *(*(arg1 + 4) + 0xc)

if (eax_4 != 0)
    eax_1[3] = eax_4
    *(*(*(arg1 + 4) + 0xc) + 0x10) = eax_1

void* result = *(arg1 + 4)
*(result + 0xc) = eax_1
*(arg1 + 4) = eax_1
return result
