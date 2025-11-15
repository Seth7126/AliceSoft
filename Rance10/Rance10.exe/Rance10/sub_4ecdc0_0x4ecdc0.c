// 函数: sub_4ecdc0
// 地址: 0x4ecdc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72b728
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_1 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403590(&var_2c, arg1 + 0x128, 0, 0xffffffff)
int32_t var_8_1 = 0
int32_t eax_4 = *(arg1 + 0x1cc)
int32_t esi = *(arg1 + 0x17c)
int32_t edi = *(arg1 + 0x100)
struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIListBoxView::VTable*
    * eax_5 = sub_4ef320(*(arg1 + 0xac))

if ((eax_5[0x44] != edi || eax_5[0x46] != esi) && edi s>= 0 && esi s>= 0)
    eax_5[0x44] = edi
    eax_5[0x46] = esi
    eax_5[0x62].b = 1

int32_t esi_1 = *(arg1 + 0x178)
struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIListBoxView::VTable*
    * eax_6 = sub_4ef320(*(arg1 + 0xac))
int32_t ecx_3 = 1

if (esi_1 s> 1)
    ecx_3 = esi_1

if (eax_6[0x45] != ecx_3)
    eax_6[0x45] = ecx_3
    eax_6[0x62].b = 1

int32_t esi_2 = *(arg1 + 0x184)
int32_t edi_1 = *(arg1 + 0x180)
struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIListBoxView::VTable*
    * eax_7 = sub_4ef320(*(arg1 + 0xac))

if (eax_7[0x47] != edi_1 || eax_7[0x48] != esi_2)
    eax_7[0x47] = edi_1
    eax_7[0x48] = esi_2
    eax_7[0x62].b = 1

int32_t edi_2 = *(arg1 + 0x188)
struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIListBoxView::VTable*
    * eax_8 = sub_4ef320(*(arg1 + 0xac))
int32_t var_58 = edi_2
sub_4f7c10(&sub_4ef140(eax_8[0x2d])[0x33])

if (eax_8[0x4f] != edi_2)
    eax_8[0x4f] = edi_2
    eax_8[0x62].b = 1

sub_4ffb10(&sub_4ef320(*(arg1 + 0xac))[0x31], arg1 + 0x18c)
int32_t esi_4 = *(arg1 + 0x1cc)
struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIListBoxView::VTable*
    * eax_11 = sub_4ef320(*(arg1 + 0xac))
int32_t var_58_2 = esi_4
eax_11[0x66].b = 1
sub_4ffbc0(&eax_11[0x31])
int32_t ecx_13 = eax_11[0x60]
eax_11[0x10] = esi_4
struct partsengine::IEventArgs::partsengine::SSelectedEventArgs::VTable* const var_34 =
    &partsengine::SSelectedEventArgs::`vftable'{for `partsengine::IEventArgs'}
sub_4cbd50(&eax_11[3], &var_34, 0)
int32_t esi_5 = *(arg1 + 0x1d0)
struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIListBoxView::VTable*
    * eax_12 = sub_4ef320(*(arg1 + 0xac))

if (eax_12[0x61] != esi_5)
    eax_12[0x61] = esi_5
    eax_12[0x62].b = 1

struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIListBoxView::VTable*
    * eax_13
int32_t ecx_17
eax_13, ecx_17 = sub_4ef320(*(arg1 + 0xac))
int32_t var_58_3 = ecx_13
int32_t var_5c_1 = ecx_17
sub_417d50(eax_13[0x5d], eax_13[0x5e])
eax_13[0x5e] = eax_13[0x5d]
eax_13[0x62].b = 1
int32_t esi_7 = 0
int32_t eax_15
int32_t edx_1
edx_1:eax_15 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x1c4) - *(arg1 + 0x1c0))
int32_t var_3c = 0
int32_t edx_2 = edx_1 s>> 2
int32_t eax_18 = (edx_2 u>> 0x1f) + edx_2

if (eax_18 s> 0)
    int32_t var_38_1 = 0
    
    do
        int32_t eax_19
        int32_t edx_3
        edx_3:eax_19 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x1c4) - *(arg1 + 0x1c0))
        int32_t edx_4 = edx_3 s>> 2
        void* edi_5
        
        if ((edx_4 u>> 0x1f) + edx_4 s<= esi_7 || esi_7 s< 0)
            edi_5 = arg1 + 0xb4
        else
            edi_5 = *(arg1 + 0x1c0) + var_38_1
        
        struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIListBoxView::VTable
            ** eax_23 = sub_4ef320(*(arg1 + 0xac))
        sub_424db0(&eax_23[0x5d], edi_5)
        var_38_1 += 0x18
        eax_23[0x62].b = 1
        esi_7 = var_3c + 1
        var_3c = esi_7
    while (esi_7 s< eax_18)

int32_t var_58_5 = eax_4
sub_4e8dc0(arg1 + 0xb0)
struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIListBoxView::VTable*
    * eax_24 = sub_4ef320(*(arg1 + 0xac))
int32_t var_58_6 = eax_4
eax_24[0x66].b = 1
sub_4ffbc0(&eax_24[0x31])
int32_t edx_5 = eax_24[0x60]
eax_24[0x10] = eax_4
var_34 = &partsengine::SSelectedEventArgs::`vftable'{for `partsengine::IEventArgs'}
int32_t var_30_2 = edx_5
sub_4cbd50(&eax_24[3], &var_34, 0)
sub_4e8a30(arg1 + 0xb0, &var_2c)
int32_t result = result_1

if (result u>= 0x10)
    result = sub_403160(var_2c.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
