// 函数: sub_470070
// 地址: 0x470070
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void** edi_1 = *arg3
void** esi = edi_1
void** var_10 = edi_1
void** eax = edi_1[1]
void** edx = eax

if (*(edx + 0xd) == 0)
    do
        if (edx[4] u>= *arg2)
            esi = edx
            edx = *edx
        else
            edx = edx[2]
    while (*(edx + 0xd) == 0)
    
    var_10 = esi

while (*(eax + 0xd) == 0)
    if (*arg2 u>= eax[4])
        eax = eax[2]
    else
        edi_1 = eax
        eax = *eax

if (esi != edi_1)
    if (*(arg1 + 8) s> 0)
        void** var_14 = esi
        
        do
            if ((*(**(esi[5] + 4) + 0x18))() != 0 && (*(**(esi[5] + 4) + 0x20))() u< *(arg1 + 8))
                sub_46f9b0(arg1, 0)
                goto label_470153
            
            sub_418380(&var_14)
            esi = var_14
        while (esi != edi_1)
        
        esi = var_10
    
    if (*(arg1 + 0xc) == 0)
        sub_46f9b0(arg1, esi[5])
        (*(**(esi[5] + 4) + 0x14))()
        return esi[5]

sub_46f9b0(arg1, 0)
int32_t var_24_2 = 0
struct kiwi::CSoundChannel::VTable** result = sub_4730b0(*(arg1 + 4))

if (result == 0)
label_470153:
    return 0

struct kiwi::CSoundChannel::VTable** result_1 = result
var_10 = *arg2
int32_t* eax_14
int32_t ecx_13
eax_14, ecx_13 = sub_442a00(&var_10)
int32_t* var_24_4 = eax_14
void* var_28 = &eax_14[4]
sub_470430(arg3, &var_10, ecx_13)
return result
