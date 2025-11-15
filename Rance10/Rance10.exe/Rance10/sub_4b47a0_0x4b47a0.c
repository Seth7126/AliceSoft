// 函数: sub_4b47a0
// 地址: 0x4b47a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx_1 = arg1[0x2a] + arg4
int32_t eax_1 = arg1[0x2b] + arg5

if (arg1[0x2a] != ecx_1 || arg1[0x2b] != eax_1)
    arg1[0x2a] = ecx_1
    arg1[0x2b] = eax_1
    arg1[0x34].b = 1

sub_4c2bb0(&arg1[0x10])

if (arg1[0x34].b != 0)
    sub_4b4aa0(arg1)

sub_4b4880(arg1, arg3)
void** esi = arg1[0x1e]
int32_t ebx = 0
uint32_t ecx_8 = (arg1[0x1f] - esi + 3) u>> 2

if (esi u> arg1[0x1f])
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
