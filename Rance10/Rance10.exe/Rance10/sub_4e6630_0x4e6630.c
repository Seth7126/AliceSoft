// 函数: sub_4e6630
// 地址: 0x4e6630
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx_1 = arg1[0x3a] + arg4
int32_t eax_1 = arg1[0x3b] + arg5

if (arg1[0x3a] != ecx_1 || arg1[0x3b] != eax_1)
    arg1[0x3a] = ecx_1
    arg1[0x3b] = eax_1
    arg1[0x7b].b = 1

sub_4c2bb0(&arg1[0x1e])

if (arg1[0x7b].b != 0)
    sub_4e7c10(arg1)

sub_4e6710(arg1, arg3)
int32_t eax_2 = arg1[0x2d]
void** esi = arg1[0x2c]
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
