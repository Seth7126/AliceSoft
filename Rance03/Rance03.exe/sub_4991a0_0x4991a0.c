// 函数: sub_4991a0
// 地址: 0x4991a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_7 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bbbd9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = *(arg1 + 0x90)
int32_t* eax_4 = *(arg1 + 0x94)
int32_t* eax_5 = *(arg1 + 0x1fc)
void* eax_7 = *(*(arg1 + 0x210) + 8)

if (eax_7 != 0 && sub_48d400(eax_7, arg1 + 0x1b4) != 0)
    void* edi_1 = *(sub_4a4020(*(arg1 + 0x88)) + 0x34)
    
    if ((*(**(*(edi_1 + 0x28) + 4) + 8))(eax_2) != 0x14)
        (*(**(*(edi_1 + 0x28) + 4) + 4))()
        struct partsengine::CSprite::partsengine::CFlatSprite::VTable** eax_15 = sub_69adc6(0x78)
        struct partsengine::CSprite::partsengine::CFlatSprite::VTable** var_28_1 = eax_15
        int32_t var_4 = 8
        struct partsengine::CSprite::partsengine::CFlatSprite::VTable** ecx_6
        
        if (eax_15 == 0)
            ecx_6 = nullptr
        else
            ecx_6 = sub_491950(eax_15, *(edi_1 + 0x34), *(edi_1 + 0x38))
        
        int32_t var_4_1 = 0xffffffff
        *(*(edi_1 + 0x28) + 4) = ecx_6
        *(edi_1 + 0x14) = 1
    
    sub_492050(*(*(edi_1 + 0x28) + 4), arg1 + 0x1b4)
    void* edi_2 = *(sub_4a4020(*(arg1 + 0x88)) + 0x34)
    
    if ((*(**(*(edi_2 + 0x28) + 8) + 8))() != 0x14)
        (*(**(*(edi_2 + 0x28) + 8) + 4))()
        struct partsengine::CSprite::partsengine::CFlatSprite::VTable** eax_25 = sub_69adc6(0x78)
        struct partsengine::CSprite::partsengine::CFlatSprite::VTable** var_28_2 = eax_25
        int32_t var_4_2 = 0x14
        struct partsengine::CSprite::partsengine::CFlatSprite::VTable** ecx_12
        
        if (eax_25 == 0)
            ecx_12 = nullptr
        else
            ecx_12 = sub_491950(eax_25, *(edi_2 + 0x34), *(edi_2 + 0x38))
        
        int32_t var_4_3 = 0xffffffff
        *(*(edi_2 + 0x28) + 8) = ecx_12
        *(edi_2 + 0x14) = 1
    
    sub_492050(*(*(edi_2 + 0x28) + 8), arg1 + 0x1b4)
    void* esi_1 = *(sub_4a4020(*(arg1 + 0x88)) + 0x34)
    
    if ((*(**(*(esi_1 + 0x28) + 0xc) + 8))() != 0x14)
        (*(**(*(esi_1 + 0x28) + 0xc) + 4))()
        struct partsengine::CSprite::partsengine::CFlatSprite::VTable** eax_35 = sub_69adc6(0x78)
        struct partsengine::CSprite::partsengine::CFlatSprite::VTable** var_28_3 = eax_35
        int32_t var_4_4 = 0x20
        struct partsengine::CSprite::partsengine::CFlatSprite::VTable** ecx_18
        
        if (eax_35 == 0)
            ecx_18 = nullptr
        else
            ecx_18 = sub_491950(eax_35, *(esi_1 + 0x34), *(esi_1 + 0x38))
        
        int32_t var_4_5 = 0xffffffff
        *(*(esi_1 + 0x28) + 0xc) = ecx_18
        *(esi_1 + 0x14) = 1
    
    struct IInterface::partsengine::CFlatData::VTable** eax_38 =
        sub_492050(*(*(esi_1 + 0x28) + 0xc), arg1 + 0x1b4)
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_38

int32_t* eax_39

if (*(arg1 + 0x150) u< 0x10)
    eax_39 = arg1 + 0x13c
else
    eax_39 = *(arg1 + 0x13c)

if (sub_44a260(eax_39) != 0)
    sub_498b80(arg1, arg1 + 0x13c, arg1 + 0x1cc, arg1 + 0xa8, 1)
    sub_498b80(arg1, arg1 + 0x13c, arg1 + 0x1cc, arg1 + 0xa8, 2)
    int32_t* eax_41 = sub_498b80(arg1, arg1 + 0x13c, arg1 + 0x1cc, arg1 + 0xa8, 3)
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_41

int32_t* var_4c_9
int32_t ebp_1

if (eax_5 == 0)
    struct partsengine::IAddConstructionPartsProcess::partsengine::CGUIPlainCG::VTable* const 
        var_24 = &partsengine::CGUIPlainCG::`vftable'{for `partsengine::IAddConstructionPartsProcess'}
    char var_20_1 = 0
    int32_t var_1c_1 = 0
    int32_t var_4_6 = 0x24
    int32_t var_18_1 = *(arg1 + 0x9c)
    int32_t var_14_1 = *(arg1 + 0xa0)
    int32_t var_10_1 = *(arg1 + 0xa4)
    char var_20_2 = 1
    int32_t (__stdcall* var_1c_2)(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4) = sub_4d3170
    ebp_1 = eax_3
    sub_498a70(arg1, arg1 + 0x1cc, ebp_1, eax_4, arg1 + 0xa8, 0, &var_24, 1)
    sub_498a70(arg1, arg1 + 0x1cc, ebp_1, eax_4, arg1 + 0xa8, 0, &var_24, 2)
    int32_t var_48_10 = 3
    var_4c_9 = &var_24
else
    ebp_1 = eax_3
    sub_498a70(arg1, arg1 + 0x1cc, ebp_1, eax_4, arg1 + 0xa8, 0, eax_5, 1)
    sub_498a70(arg1, arg1 + 0x1cc, ebp_1, eax_4, arg1 + 0xa8, 0, eax_5, 2)
    int32_t var_48_9 = 3
    var_4c_9 = eax_5

int32_t eax_46 = sub_498a70(arg1, arg1 + 0x1cc, ebp_1, eax_4, arg1 + 0xa8, 0, var_4c_9, 3)
fsbase->NtTib.ExceptionList = ExceptionList
return eax_46
