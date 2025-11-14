// 函数: sub_49d1d0
// 地址: 0x49d1d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bc003
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ecx = *(*(arg1 + 0x294) + 8)

if (ecx != 0 && sub_48d400(ecx, arg1 + 0x1d8) != 0)
    void* esi_1 = *(sub_4a4020(*(arg1 + 0x8c)) + 0x34)
    
    if ((*(**(*(esi_1 + 0x28) + 0xc) + 8))(eax_2) != 0x14)
        (*(**(*(esi_1 + 0x28) + 0xc) + 4))()
        struct partsengine::CSprite::partsengine::CFlatSprite::VTable** eax_11 = sub_69adc6(0x78)
        struct partsengine::CSprite::partsengine::CFlatSprite::VTable** var_28_1 = eax_11
        int32_t var_4 = 8
        struct partsengine::CSprite::partsengine::CFlatSprite::VTable** ecx_5
        
        if (eax_11 == 0)
            ecx_5 = nullptr
        else
            ecx_5 = sub_491950(eax_11, *(esi_1 + 0x34), *(esi_1 + 0x38))
        
        int32_t var_4_1 = 0xffffffff
        *(*(esi_1 + 0x28) + 0xc) = ecx_5
        *(esi_1 + 0x14) = 1
    
    struct IInterface::partsengine::CFlatData::VTable** eax_14 =
        sub_492050(*(*(esi_1 + 0x28) + 0xc), arg1 + 0x1d8)
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_14

void* eax_15

if (*(arg1 + 0x144) u< 0x10)
    eax_15 = arg1 + 0x130
else
    eax_15 = *(arg1 + 0x130)

bool eax_16
int32_t* ecx_10
eax_16, ecx_10 = sub_44a260(eax_15)

if (eax_16 != 0)
    void* esi_2 = *(sub_4a4020(*(arg1 + 0x8c)) + 0x34)
    sub_510cf0(esi_2, 0xb, 3)
    struct _EXCEPTION_REGISTRATION_RECORD** eax_18 =
        sub_4fe4a0(*(*(esi_2 + 0x28) + 0xc), arg1 + 0x130, nullptr)
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_18

void** var_24 =
    &partsengine::CGUIPlainCG::`vftable'{for `partsengine::IAddConstructionPartsProcess'}
char var_20 = 0
int32_t var_1c = 0
int32_t var_4_2 = 0xc
int32_t var_18 = *(arg1 + 0xa8)
int32_t var_14 = *(arg1 + 0xac)
int32_t var_10 = *(arg1 + 0xb0)

if (*(arg1 + 0x254) != 0)
    int32_t (__stdcall* var_1c_2)(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4) = sub_4d2fd0
else
    int32_t (__stdcall* var_1c_1)(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4) = sub_4d2fd0

char var_20_1 = 1
int32_t var_40_5 = 3
int32_t* eax_22 = sub_49cc70(arg1, ecx_10, &var_24)
fsbase->NtTib.ExceptionList = ExceptionList
return eax_22
