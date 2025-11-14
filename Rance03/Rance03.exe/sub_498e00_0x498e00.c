// 函数: sub_498e00
// 地址: 0x498e00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bbb93
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = *(arg1 + 0x90)
int32_t* eax_4 = *(arg1 + 0x94)
int32_t* eax_5 = *(arg1 + 0x1f4)
void* eax_7 = *(*(arg1 + 0x210) + 8)

if (eax_7 != 0 && sub_48d400(eax_7, arg1 + 0x184) != 0)
    void* esi_1 = *(sub_4a4020(*(arg1 + 0x88)) + 0x34)
    
    if ((*(**(*(esi_1 + 0x28) + 8) + 8))(eax_2) != 0x14)
        (*(**(*(esi_1 + 0x28) + 8) + 4))()
        struct partsengine::CSprite::partsengine::CFlatSprite::VTable** eax_15 = sub_69adc6(0x78)
        struct partsengine::CSprite::partsengine::CFlatSprite::VTable** var_28_1 = eax_15
        int32_t var_4 = 8
        struct partsengine::CSprite::partsengine::CFlatSprite::VTable** ecx_6
        
        if (eax_15 == 0)
            ecx_6 = nullptr
        else
            ecx_6 = sub_491950(eax_15, *(esi_1 + 0x34), *(esi_1 + 0x38))
        
        int32_t var_4_1 = 0xffffffff
        *(*(esi_1 + 0x28) + 8) = ecx_6
        *(esi_1 + 0x14) = 1
    
    struct IInterface::partsengine::CFlatData::VTable** eax_18 =
        sub_492050(*(*(esi_1 + 0x28) + 8), arg1 + 0x184)
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_18

int32_t* eax_19

if (*(arg1 + 0x120) u< 0x10)
    eax_19 = arg1 + 0x10c
else
    eax_19 = *(arg1 + 0x10c)

if (sub_44a260(eax_19) != 0)
    int32_t* eax_21 = sub_498b80(arg1, arg1 + 0x10c, arg1 + 0x1cc, arg1 + 0xa8, 2)
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_21

int32_t* eax_22 = eax_5

if (eax_22 == 0)
    struct partsengine::IAddConstructionPartsProcess::partsengine::CGUIPlainCG::VTable* const 
        var_24 = &partsengine::CGUIPlainCG::`vftable'{for `partsengine::IAddConstructionPartsProcess'}
    char var_20_1 = eax_22.b
    int32_t* var_1c_1 = eax_22
    int32_t var_4_2 = 0xc
    int32_t var_18_1 = *(arg1 + 0x9c)
    int32_t var_14_1 = *(arg1 + 0xa0)
    int32_t var_10_1 = *(arg1 + 0xa4)
    char var_20_2 = 1
    int32_t (__stdcall* var_1c_2)(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4) = sub_4d2fb0
    eax_22 = &var_24

int32_t eax_26 = sub_498a70(arg1, arg1 + 0x1cc, eax_3, eax_4, arg1 + 0xa8, 1, eax_22, 2)
fsbase->NtTib.ExceptionList = ExceptionList
return eax_26
