// 函数: sub_4a30d0
// 地址: 0x4a30d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b2a38
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
float var_30
int32_t eax_2 = __security_cookie ^ &var_30
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
float ebx = arg1
var_30 = ebx
void* ebp = ebx i+ 0x6c
sub_4b93c0(ebp, arg2, arg3)
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
int32_t var_4 = 0

if (sub_4b9680(ebp, &var_28) != 0)
    struct partsengine::CSprite::partsengine::CFlatSprite::VTable** eax_7 =
        (*(*sub_4a4020(ebx) + 0x3c))(eax_4)
    void* esi_1 = *(sub_4a4020(var_30) + 0x34)
    sub_510cf0(esi_1, 0xb, eax_7)
    struct _EXCEPTION_REGISTRATION_RECORD** edi_1 = *(*(*(esi_1 + 0x28) + (eax_7 << 2)) + 0x20)
    void* esi_2 = *(sub_4a4020(var_30) + 0x34)
    sub_510cf0(esi_2, 0xb, eax_7)
    sub_4fe4a0(*(*(esi_2 + 0x28) + (eax_7 << 2)), &var_28, edi_1)
    ebx = var_30

if (*(ebp + 0x1c4) != *(ebp + 0x1c8) && *(ebp + 0x1e0) != *(ebp + 0x1e4))
    float xmm0_1 = sub_4be050(ebp + 0x1c0, *(ebp + 0xa0))
    var_30 = sub_4be050(ebp + 0x1dc, *(ebp + 0xa0))
    *(ebp + 4) = 1
    struct partsengine::CSprite::partsengine::CHGaugeSprite::VTable** eax_15 =
        (*(*sub_4a4020(ebx) + 0x3c))(eax_4)
    void* ecx_16 = sub_510300(*(sub_4a4020(ebx) + 0x34), eax_15)
    float xmm1_1 = var_30
    float xmm0_3 = *(ecx_16 + 0x20)
    xmm0_3 - xmm0_1
    void* eax_17
    eax_17:1.b = (xmm0_3 == xmm0_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_3, xmm0_1) ? 1 : 0) << 2
        | (xmm0_3 < xmm0_1 ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    bool p_4
    
    if (not(p_2))
        float xmm0_4 = *(ecx_16 + 0x24)
        xmm0_4 - xmm1_1
        eax_17:1.b = (xmm0_4 == xmm1_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_4, xmm1_1) ? 1 : 0) << 2
            | (xmm0_4 < xmm1_1 ? 1 : 0)
        p_4 = unimplemented  {test ah, 0x44}
    
    if (p_2 || p_4)
        *(ecx_16 + 0x20) = xmm0_1
        *(ecx_16 + 0x24) = xmm1_1
        *(ecx_16 + 0x58) = 1

if (*(ebp + 0x1fc) != *(ebp + 0x200) && *(ebp + 0x218) != *(ebp + 0x21c))
    float xmm0_5 = sub_4be050(ebp + 0x1f8, *(ebp + 0xa0))
    var_30 = sub_4be050(ebp + 0x214, *(ebp + 0xa0))
    *(ebp + 4) = 1
    struct partsengine::CSprite::partsengine::CVGaugeSprite::VTable** eax_21 =
        (*(*sub_4a4020(ebx) + 0x3c))(eax_4)
    void* ecx_23 = sub_5103a0(*(sub_4a4020(ebx) + 0x34), eax_21)
    float xmm1_2 = var_30
    float xmm0_7 = *(ecx_23 + 0x20)
    xmm0_7 - xmm0_5
    void* eax_23
    eax_23:1.b = (xmm0_7 == xmm0_5 ? 1 : 0) << 6 | (is_unordered.d(xmm0_7, xmm0_5) ? 1 : 0) << 2
        | (xmm0_7 < xmm0_5 ? 1 : 0)
    bool p_6 = unimplemented  {test ah, 0x44}
    bool p_8
    
    if (not(p_6))
        float xmm0_8 = *(ecx_23 + 0x24)
        xmm0_8 - xmm1_2
        eax_23:1.b = (xmm0_8 == xmm1_2 ? 1 : 0) << 6 | (is_unordered.d(xmm0_8, xmm1_2) ? 1 : 0) << 2
            | (xmm0_8 < xmm1_2 ? 1 : 0)
        p_8 = unimplemented  {test ah, 0x44}
    
    if (p_6 || p_8)
        *(ecx_23 + 0x20) = xmm0_5
        *(ecx_23 + 0x24) = xmm1_2
        *(ecx_23 + 0x58) = 1

int32_t result = *(ebp + 0x234)

if (result != *(ebp + 0x238))
    int32_t eax_24 = sub_4bd610(ebp + 0x230, *(ebp + 0xa0))
    *(ebp + 4) = 1
    struct partsengine::CSprite::partsengine::CNumeralSprite::VTable** eax_26 =
        (*(*sub_4a4020(ebx) + 0x3c))(eax_4)
    void* eax_28 = sub_510440(*(sub_4a4020(ebx) + 0x34), eax_26)
    *(eax_28 + 0x2b0) = eax_24
    result = sub_50d490(eax_28)

if (var_14 u>= 0x10)
    result = j__free(var_28.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_30)
return result
