// 函数: sub_4c1e90
// 地址: 0x4c1e90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1[0x73].b != 0)
    arg1[0x73].b = 0
    sub_4c17e0(arg1)
    sub_4c1970(arg1)
    sub_4c1cd0(arg1)

sub_4c1f40(arg1, arg3)
void** esi = arg1[0x1e]
int32_t ebx = 0
uint32_t ecx_6 = (arg1[0x1f] - esi + 3) u>> 2

if (esi u> arg1[0x1f])
    ecx_6 = 0

if (ecx_6 != 0)
    int32_t eax_1 = arg2
    
    do
        int32_t var_24_1 = arg5
        int32_t var_28_1 = arg4
        sub_4ee2b0(*esi, eax_1, eax_1, arg3)
        eax_1 = arg2
        esi = &esi[1]
        ebx += 1
    while (ebx != ecx_6)

sub_4c2bb0(&arg1[0x10])
struct partsengine::IEventArgs::partsengine::SCreatedEventArgs::VTable* const var_c =
    &partsengine::SCreatedEventArgs::`vftable'{for `partsengine::IEventArgs'}
return sub_4cbd50(&arg1[3], &var_c, 0)
