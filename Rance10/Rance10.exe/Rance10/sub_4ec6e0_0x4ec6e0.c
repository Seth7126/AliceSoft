// 函数: sub_4ec6e0
// 地址: 0x4ec6e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_735a68
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_78 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* ecx = *(arg1 + 0xa0)
*(arg1 + 0x1d4) = 0
void* eax_3 = sub_4efcc0(ecx)
void* eax_4 = sub_4efcc0(*(arg1 + 0xa4))
void* esi = *(arg1 + 0xa8)
sub_4eec50(esi, nullptr, 1)
void* edi = *(esi + 0x74)

if (*(eax_3 + 0x40) != 0)
    *(eax_3 + 0x40) = 0

if (*(eax_4 + 0x40) != 0)
    *(eax_4 + 0x40) = 0

int32_t ecx_3 = *(arg1 + 0x100)
int32_t eax_7 = *(arg1 + 0x104)
int32_t esi_1 = *(arg1 + 0x108)
int32_t eax_9
int32_t edx
edx:eax_9 = sx.q(ecx_3)
int32_t eax_11 = (eax_9 - edx) s>> 1
int32_t var_24 = eax_11
int128_t xmm0 = *(arg1 + 0x14c)
int32_t var_28 = esi_1
int32_t* ecx_4 = &var_28
int32_t esi_2 = *(arg1 + 0x10c)
int32_t var_2c
int32_t* eax_12 = &var_2c

if (esi_1 s>= eax_11)
    ecx_4 = &var_24

float xmm1 = *(arg1 + 0x160)
var_2c = 0
int128_t var_5c = xmm0
struct textsurface::CTextSurfaceProperty::VTable* const var_68 =
    &textsurface::CTextSurfaceProperty::`vftable'

if (*ecx_4 s> 0)
    eax_12 = ecx_4

int32_t var_4c = *(arg1 + 0x15c)
int128_t xmm0_2 = *(arg1 + 0x164)
int32_t* ecx_5 = &var_2c
float var_48 = xmm1
int32_t eax_13 = *eax_12
int32_t eax_15
int32_t edx_1
edx_1:eax_15 = sx.q(eax_7)
var_2c = esi_2
int32_t eax_17 = (eax_15 - edx_1) s>> 1
var_28 = eax_17
int32_t esi_3 = *(arg1 + 0x148)
int32_t* eax_18 = &var_24

if (esi_2 s>= eax_17)
    ecx_5 = &var_28

var_24 = 0
char var_60 = esi_3.b
int128_t var_44 = xmm0_2

if (*ecx_5 s> 0)
    eax_18 = ecx_5

var_28 = *eax_18
int32_t var_64 = *(arg1 + 0x144)
int32_t var_8_1 = 0
var_24 = esi_3

if ((var_60 & 1) != 0)
    var_24 = esi_3 + 1

int32_t eax_22 = int.d(sub_4a78b0(xmm1))

if (eax_22 s< esi_3)
    esi_3 = eax_22

float xmm0_6 = sub_4a78b0(*(arg1 + 0x15c))
int32_t edx_2 = *(arg1 + 0x148)
int32_t ecx_6 = edx_2
int32_t eax_23 = int.d(xmm0_6)

if (eax_23 s< edx_2)
    ecx_6 = eax_23

if (ecx_6 s< esi_3)
    ecx_6 = esi_3

void* eax_27 = arg1 + 0x110
int32_t var_60_1 = edx_2 + eax_7 - (ecx_6 + var_28) * 2 - var_24

if (*(arg1 + 0x124) u>= 0x10)
    eax_27 = *eax_27

bool eax_28 = sub_44c4e0(eax_27)
void* esi_5 = *(eax_3 + 0x44)

if (eax_28 == 0)
    sub_555e00(esi_5, 0x18, 1)
    sub_54b880(*(esi_5 + 0x80), ecx_3 - 0x10, eax_7)
    void* esi_6 = *(eax_3 + 0x44)
    int32_t var_7c_3 = sub_555e00(esi_6, 0x18, 1)
    int32_t var_80_2 = 0xff
    int32_t var_84_1 = 0xff
    int32_t var_88_1 = 0xff
    int32_t var_8c_1 = eax_7
    int32_t var_90_1 = ecx_3 - 0x10
    sub_54bab0(*(esi_6 + 0x80))
else
    sub_555e00(esi_5, 0x18, 1)
    sub_54b920(*(esi_5 + 0x80), arg1 + 0x110)

void* esi_7 = *(eax_3 + 0x44)
sub_555e00(esi_7, 0x18, 1)
sub_54c110(*(esi_7 + 0x80))
void* esi_9 = *(eax_4 + 0x44)
sub_555e00(esi_9, 0x13, 1)
sub_55f4d0(*(esi_9 + 0x80), &var_68)
void* esi_10 = *(eax_4 + 0x44)
sub_555e00(esi_10, 0x13, 1)
sub_55f2e0(*(esi_10 + 0x80), 0, 0, ecx_3 - eax_13 - 0x10, eax_7 - var_28 * 2)
void* esi_11 = *(eax_4 + 0x44)
sub_555e00(esi_11, 0x13, 1)
sub_55d4d0(*(esi_11 + 0x80), arg1 + 0x128)

if (*(edi + 0xa8) != 0x10 || *(edi + 0xac) != eax_7)
    *(edi + 0xa8) = 0x10
    *(edi + 0xac) = eax_7
    *(edi + 0x218) = 1

*(edi + 0x218) = 1
*(edi + 0x208) = arg1 + 0x1dc
*(edi + 0x20c) = arg1 + 0x1f4
*(edi + 0x218) = 1
*(edi + 0x210) = arg1 + 0x20c
*(edi + 0x218) = 1
int32_t esi_12 = *(arg1 + 0x17c)
struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIListBoxView::VTable*
    * eax_43 = sub_4ef320(*(arg1 + 0xac))

if ((eax_43[0x44] != ecx_3 || eax_43[0x46] != esi_12) && ecx_3 s>= 0 && esi_12 s>= 0)
    eax_43[0x44] = ecx_3
    eax_43[0x46] = esi_12
    eax_43[0x62].b = 1

int32_t esi_13 = *(arg1 + 0x178)
struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIListBoxView::VTable*
    * eax_44 = sub_4ef320(*(arg1 + 0xac))
int32_t ecx_27 = 1

if (esi_13 s> 1)
    ecx_27 = esi_13

if (eax_44[0x45] != ecx_27)
    eax_44[0x45] = ecx_27
    eax_44[0x62].b = 1

int32_t esi_14 = *(arg1 + 0x184)
int32_t edi_3 = *(arg1 + 0x180)
struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIListBoxView::VTable*
    * eax_45 = sub_4ef320(*(arg1 + 0xac))

if (eax_45[0x47] != edi_3 || eax_45[0x48] != esi_14)
    eax_45[0x47] = edi_3
    eax_45[0x48] = esi_14
    eax_45[0x62].b = 1

sub_4ffb10(&sub_4ef320(*(arg1 + 0xac))[0x31], arg1 + 0x18c)
int32_t esi_15 = *(arg1 + 0x1d0)
struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIListBoxView::VTable*
    * result = sub_4ef320(*(arg1 + 0xac))

if (result[0x61] != esi_15)
    result[0x61] = esi_15
    result[0x62].b = 1

fsbase->NtTib.ExceptionList = ExceptionList
return result
