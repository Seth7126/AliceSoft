// 函数: sub_4b22a0
// 地址: 0x4b22a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx = 0x18

if (arg1[0x55].b == 0)
    ecx = arg1[0x3b]

void* esi_1 = arg5 + ecx
int32_t var_c
void* edx = &var_c
int32_t ecx_2 = arg1[0x3a] + arg4
bool cond:0 = ecx_2 s>= arg1[0x3f]
var_c = ecx_2
void* ecx_3 = &arg1[0x3d]

if (cond:0)
    edx = &arg1[0x3f]

void* var_8 = esi_1

if (*ecx_3 s< *edx)
    ecx_3 = edx

void* edx_1 = &var_8

if (esi_1 s>= arg1[0x40])
    edx_1 = &arg1[0x40]

int32_t ebx = *ecx_3
void* ecx_4 = &arg1[0x3e]

if (arg1[0x3e] s< *edx_1)
    ecx_4 = edx_1

int32_t eax_4 = *ecx_4

if (arg1[0x3a] != ebx || arg1[0x3b] != eax_4)
    arg1[0x3a] = ebx
    arg1[0x3b] = eax_4
    *(arg1 + 0x156) = 1

sub_4c2bb0(&arg1[0x10])

if (*(arg1 + 0x156) != 0)
    sub_4b2b10(arg1)

sub_4b2410(arg1, arg3)
void** esi_2 = arg1[0x1e]
int32_t ebx_1 = 0
uint32_t ebp_3 = (arg1[0x1f] - esi_2 + 3) u>> 2

if (esi_2 u> arg1[0x1f])
    ebp_3 = 0

if (ebp_3 != 0)
    int32_t eax_5 = arg2
    struct partsengine::IEventArgs::partsengine::SClosingEventArgs::VTable* const edi_1 = arg5
    
    do
        struct partsengine::IEventArgs::partsengine::SClosingEventArgs::VTable* const var_20_1 =
            edi_1
        int32_t var_24_1 = arg4
        sub_4ee2b0(*esi_2, eax_5, eax_5, arg3)
        eax_5 = arg2
        esi_2 = &esi_2[1]
        ebx_1 += 1
    while (ebx_1 != ebp_3)

int32_t eax_6 = arg1[0x39]

if (eax_6 == 1)
    arg5 = &partsengine::SClosingEventArgs::`vftable'{for `partsengine::IEventArgs'}
    sub_4cbd50(&arg1[3], &arg5, 0)
    arg1[0x39] = 2
else if (eax_6 == 2)
    void* eax_7 = arg1[0x56]
    arg1[0x39] = 0
    *(eax_7 + 0xaa) = 0

var_8 = &partsengine::SCreatedEventArgs::`vftable'{for `partsengine::IEventArgs'}
return sub_4cbd50(&arg1[3], &var_8, 0)
