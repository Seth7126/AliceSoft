// 函数: sub_521560
// 地址: 0x521560
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx = arg4
int32_t esi = arg5
char eax = arg1[3].b

if (eax != 0)
    esi = edx

if (eax != 0)
    edx = arg5

int32_t edx_1 = edx + arg1[0x40]

if (arg1[0x40] != edx_1)
    arg1[0x40] = edx_1
    arg1[0x87].b = 1

int32_t eax_2 = arg1[0x41] + esi

if (arg1[0x41] != eax_2)
    arg1[0x41] = eax_2
    arg1[0x87].b = 1

sub_4c2bb0(&arg1[0x11])

if (arg1[0x87].b != 0)
    arg1[0x87].b = 0
    arg1[0x8a] = sub_521bd0(arg1)
    sub_521e80(arg1)
    sub_522030(arg1)
    sub_5221e0(arg1)
    sub_522250(arg1)

sub_521680(arg1, arg3)
int32_t eax_4 = arg1[0x20]
void** esi_1 = arg1[0x1f]
int32_t ebx = 0
uint32_t ecx_10 = (eax_4 - esi_1 + 3) u>> 2

if (esi_1 u> eax_4)
    ecx_10 = 0

if (ecx_10 != 0)
    int32_t eax_5 = arg2
    
    do
        int32_t var_24_1 = arg5
        int32_t var_28_1 = arg4
        sub_4ee2b0(*esi_1, eax_5, eax_5, arg3)
        eax_5 = arg2
        esi_1 = &esi_1[1]
        ebx += 1
    while (ebx != ecx_10)

struct partsengine::IEventArgs::partsengine::SCreatedEventArgs::VTable* const var_c =
    &partsengine::SCreatedEventArgs::`vftable'{for `partsengine::IEventArgs'}
return sub_4cbd50(&arg1[4], &var_c, 0)
