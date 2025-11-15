// 函数: sub_4ec150
// 地址: 0x4ec150
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx_1 = arg1[0x40] + arg4
int32_t eax_1 = arg1[0x41] + arg5

if (arg1[0x40] != ecx_1 || arg1[0x41] != eax_1)
    arg1[0x40] = ecx_1
    arg1[0x41] = eax_1
    arg1[0x75].b = 1

if (arg1[0x75].b != 0)
    sub_4ec6e0(arg1)

sub_4ec250(arg1, arg3)
int32_t* esi = arg1[0x1e]
int32_t ebx = 0
uint32_t ecx_7 = (arg1[0x1f] - esi + 3) u>> 2

if (esi u> arg1[0x1f])
    ecx_7 = 0

if (ecx_7 != 0)
    do
        int32_t var_20_1 = arg5
        int32_t var_24_1 = arg4
        sub_4ee2b0(*esi, arg2, arg2, arg3)
        ebx += 1
        esi = &esi[1]
    while (ebx != ecx_7)

int32_t eax_3 = sub_4ef320(arg1[0x2b])[0x4f]

if (arg1[0x62] != eax_3)
    arg1[0x62] = eax_3
    arg1[0x75].b = 1

sub_4c2bb0(&arg1[0x10])
struct partsengine::IEventArgs::partsengine::SCreatedEventArgs::VTable* const var_4 =
    &partsengine::SCreatedEventArgs::`vftable'{for `partsengine::IEventArgs'}
return sub_4cbd50(&arg1[3], &var_4, 0)
