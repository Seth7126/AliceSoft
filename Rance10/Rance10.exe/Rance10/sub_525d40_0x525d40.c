// 函数: sub_525d40
// 地址: 0x525d40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 0x1e3) == 0 || arg2 == 0)
    return 

void* eax_2 = *(*arg2 + 0x50)
void* ecx = *(eax_2 + 0x7c)
int32_t ebp_1

if (ecx == 0)
    ebp_1 = *(eax_2 + 0x40)
else
    ebp_1 = sub_4f03d0(ecx)

long double x87_r0
long double x87_r1
float eax_4 = sub_63cd60(arg3, x87_r0, x87_r1)
long double x87_r2
float var_14_1 = sub_63cd60(arg4, x87_r1, x87_r2)
struct partsengine::IEventArgs::partsengine::SDroppedEventArgs::VTable* const var_20 =
    &partsengine::SDroppedEventArgs::`vftable'{for `partsengine::IEventArgs'}
int32_t var_1c_1 = ebp_1
float var_18_1 = eax_4
sub_4cbd50(&arg1[0x79], &var_20, 0)
void* ebx_1 = *(*arg1 + 0x50)
void* ecx_4 = *(ebx_1 + 0x7c)
int32_t ebx_2

if (ecx_4 == 0)
    ebx_2 = *(ebx_1 + 0x40)
else
    ebx_2 = sub_4f03d0(ecx_4)

long double x87_r3
float eax_8 = sub_63cd60(arg3, x87_r2, x87_r3)
long double x87_r4
float var_4_1 = sub_63cd60(arg4, x87_r3, x87_r4)
struct partsengine::IEventArgs::partsengine::SDraggedEventArgs::VTable* const var_10 =
    &partsengine::SDraggedEventArgs::`vftable'{for `partsengine::IEventArgs'}
int32_t var_c_1 = ebx_2
float var_8_1 = eax_8
sub_4cbd50(&arg2[0x79], &var_10, 0)
