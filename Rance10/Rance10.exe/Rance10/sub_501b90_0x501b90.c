// 函数: sub_501b90
// 地址: 0x501b90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx_1 = arg1[0x44] + arg4
int32_t eax_1 = arg1[0x46] + arg5

if ((arg1[0x44] != ecx_1 || arg1[0x46] != eax_1) && ecx_1 s>= 0 && eax_1 s>= 0)
    arg1[0x44] = ecx_1
    arg1[0x46] = eax_1
    arg1[0x62].b = 1

sub_4c2bb0(&arg1[0x12])

if (arg1[0x62].b != 0)
    sub_502400(arg1)

sub_501c80(arg1, arg3)
int32_t eax_2 = arg1[0x21]
void** esi = arg1[0x20]
int32_t ebx = 0
uint32_t ecx_8 = (eax_2 - esi + 3) u>> 2

if (esi u> eax_2)
    ecx_8 = 0

if (ecx_8 != 0)
    do
        int32_t var_20_1 = arg5
        int32_t var_24_1 = arg4
        sub_4ee2b0(*esi, arg2, arg2, arg3)
        ebx += 1
        esi = &esi[1]
    while (ebx != ecx_8)

struct partsengine::IEventArgs::partsengine::SCreatedEventArgs::VTable* const var_4 =
    &partsengine::SCreatedEventArgs::`vftable'{for `partsengine::IEventArgs'}
return sub_4cbd50(&arg1[3], &var_4, 0)
