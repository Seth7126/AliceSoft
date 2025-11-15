// 函数: sub_405a20
// 地址: 0x405a20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = arg1[2]
int32_t esi = arg1[1]
void* result = ebx - esi

if (result u>= arg2)
    return result

int32_t edx_1 = *arg1

if (edx_1 - esi - 1 u< arg2)
    sub_6d0927("vector<T> too long")
    noreturn

int32_t ebx_1 = ebx - edx_1
int32_t esi_2 = esi - edx_1 + arg2
uint32_t eax_5 = ebx_1 u>> 1
int32_t edx_2 = 0

if (not.d(eax_5) u>= ebx_1)
    edx_2 = eax_5 + ebx_1

if (edx_2 u>= esi_2)
    esi_2 = edx_2

return sub_405a80(arg1, esi_2)
