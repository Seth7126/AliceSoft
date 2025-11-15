// 函数: sub_602600
// 地址: 0x602600
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = arg3
void* eax = sub_602900(arg1, esi, arg5, arg6)
int32_t* ecx = *arg1
arg3 = ecx
int32_t var_10 = 0
void* edx = eax + esi
int32_t* esi_1 = ecx
void* esi_2

if (edx s>= 0 || neg.d(edx) == 0)
    esi_2 = &esi_1[edx u>> 5]
else
    ecx = arg3
    esi_2 = esi_1 + 0xfffffffc - ((0xffffffff - edx) u>> 5 << 2)

void* edx_1 = edx & 0x1f
int32_t var_4 = 0
void* ecx_8

if (eax s>= 0 || neg.d(eax) == 0)
    ecx_8 = &ecx[eax u>> 5]
else
    ecx_8 = arg3 + 0xfffffffc - ((0xffffffff - eax) u>> 5 << 2)

void* var_2c_1 = edx_1
void* esi_4 = eax & 0x1f
sub_602a60(esi_4, edx_1, arg4, nullptr, ecx_8, esi_4, esi_2)
arg6 = 0
int32_t ecx_11 = *arg1

if (eax s< 0 && neg.d(eax) != 0)
    arg2[1] = esi_4
    *arg2 = ecx_11 + 0xfffffffc - ((0xffffffff - eax) u>> 5 << 2)
    return arg2

arg2[1] = esi_4
*arg2 = ecx_11 + (eax u>> 5 << 2)
return arg2
