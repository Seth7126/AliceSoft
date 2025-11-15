// 函数: sub_4c2bb0
// 地址: 0x4c2bb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* eax = *(arg1 + 0x48)
int32_t edx = *(arg1 + 0x4c)
int32_t ebx

if (eax == edx)
label_4c2bd2:
    ebx.b = 0
else
    while (*eax == 0xffffffff)
        eax = &eax[1]
        
        if (eax == edx)
            goto label_4c2bd2
    
    ebx.b = 1

void* edi = data_7fcb64
int32_t var_18 = 0
int32_t var_14 = 0
char result = sub_47d5a0(edi)

if (result != 0)
    result = (***(edi + 0xc))(&var_18, &var_14)

struct partsengine::IEventArgs::partsengine::SMouseEnterEventArgs::VTable* const var_10

if (ebx.b == 0)
    if (*(arg1 + 0x44) == 0xffffffff)
        return result
    
    int32_t var_c_3 = var_18
    int32_t var_8_3 = var_14
    *(arg1 + 0x44) = 0xffffffff
    var_10 = &partsengine::SMouseLeaveEventArgs::`vftable'{for `partsengine::IEventArgs'}
    return sub_4cbd50(arg1 + 4, &var_10, 0)

if (*(arg1 + 0x44) == 0xffffffff)
    int32_t var_c_1 = var_18
    int32_t var_8_1 = var_14
    *(arg1 + 0x44) = 0
    var_10 = &partsengine::SMouseEnterEventArgs::`vftable'{for `partsengine::IEventArgs'}
    sub_4cbd50(arg1 + 4, &var_10, 0)

int32_t* ecx_3 = *(arg1 + 0x48)
int32_t ebx_1 = 0
int32_t edi_1 = 0
uint32_t ebp_3 = (*(arg1 + 0x4c) - ecx_3 + 3) u>> 2

if (ecx_3 u> *(arg1 + 0x4c))
    ebp_3 = 0

if (ebp_3 != 0)
    do
        int32_t eax_4 = *ecx_3
        ecx_3 = &ecx_3[1]
        int32_t edx_1 = 0
        
        if (eax_4 s> 0)
            edx_1 = eax_4
        
        edi_1 += 1
        ebx_1 += edx_1
    while (edi_1 != ebp_3)

int32_t var_c_2 = var_18
int32_t var_8_2 = var_14
int32_t eax_8 = *(arg1 + 0x44) + ebx_1
var_10 = &partsengine::SMouseOnCursorEventArgs::`vftable'{for `partsengine::IEventArgs'}
int32_t var_4 = eax_8
return sub_4cbd50(arg1 + 4, &var_10, 0)
