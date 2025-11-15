// 函数: sub_68ff40
// 地址: 0x68ff40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_4_1 = arg3
char eax_2 = (*(*arg14 + 0x5c))()
int32_t esi = *arg2
*arg2 = esi + 1
int32_t esi_2

if (eax_2 == 0)
    (*(*arg13 + 0x20))()
    *(arg3 + (esi << 2)) = fconvert.s(arg4)
    int32_t esi_3 = *arg2
    *arg2 = esi_3 + 1
    (*(*arg13 + 0x24))()
    *(arg3 + (esi_3 << 2)) = fconvert.s(arg5)
    esi_2 = *arg2
    *arg2 = esi_2 + 1
    (*(*arg13 + 0x28))()
else
    (*(*arg12 + 0x54))()
    *(arg3 + (esi << 2)) = fconvert.s(arg4)
    int32_t esi_1 = *arg2
    *arg2 = esi_1 + 1
    (*(*arg12 + 0x58))()
    *(arg3 + (esi_1 << 2)) = fconvert.s(arg5)
    esi_2 = *arg2
    *arg2 = esi_2 + 1
    (*(*arg12 + 0x5c))()

*(arg3 + (esi_2 << 2)) = fconvert.s(arg6)
int32_t esi_4 = *arg2
*arg2 = esi_4 + 1
(*(*arg13 + 0x40))()
*(arg3 + (esi_4 << 2)) = fconvert.s(arg7)
int32_t esi_5 = *arg2
*arg2 = esi_5 + 1
(*(*arg13 + 0x30))()
*(arg3 + (esi_5 << 2)) = fconvert.s(arg8)
int32_t esi_6 = *arg2
*arg2 = esi_6 + 1
(*(*arg13 + 0x34))()
*(arg3 + (esi_6 << 2)) = fconvert.s(arg9)
int32_t esi_7 = *arg2
*arg2 = esi_7 + 1
(*(*arg13 + 0x38))()
*(arg3 + (esi_7 << 2)) = fconvert.s(arg10)
int32_t esi_8 = *arg2
*arg2 = esi_8 + 1
int32_t result = (*(*arg13 + 0x3c))()
*(arg3 + (esi_8 << 2)) = fconvert.s(arg11)
return result
