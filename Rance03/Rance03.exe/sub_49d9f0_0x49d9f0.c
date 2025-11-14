// 函数: sub_49d9f0
// 地址: 0x49d9f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6bc091
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = sub_4a4020(*(arg1 + 0x64))
void* eax_4 = sub_4a4020(*(arg1 + 0x60))

if (*(eax_3 + 0x30) != 0)
    void* ecx_2 = *(eax_3 + 0x34)
    *(eax_3 + 0x30) = 0
    *(ecx_2 + 0x14) = 1

if (*(eax_4 + 0x30) != 0)
    *(eax_4 + 0x30) = 0
    *(*(eax_4 + 0x34) + 0x14) = 1

void* eax_6 = *(arg1 + 0x60)

if (*(eax_6 + 0x47c) != 1)
    *(eax_6 + 0x47c) = 1
    *(eax_6 + 0x70) = 1

void* eax_7 = *(arg1 + 0x64)

if (*(eax_7 + 0x47c) != 1)
    *(eax_7 + 0x47c) = 1
    *(eax_7 + 0x70) = 1

eax_7.b = *(arg1 + 0x78)

if (eax_7.b != 0)
    sub_49d390(arg1 - 0x2c)
    sub_49d550(arg1 - 0x2c)
    sub_49d710(arg1 - 0x2c)
else
    sub_49ce10(arg1 - 0x2c)
    sub_49d010(arg1 - 0x2c)
    sub_49d1d0(arg1 - 0x2c)

char result = *(arg1 + 0x228)

if (result == 0)
    int32_t var_20
    struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** var_1c
    result =
        sub_498850(arg1 + 0x88, arg1 + 0x20c, &var_20, &var_1c, *(arg1 + 0x22c), *(arg1 + 0x230))
    
    if (var_20 s> 0)
        struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** ebp_1 = var_1c
        
        if (ebp_1 s> 0)
            sub_4d2240(eax_3, 1)
            void* esi_1 = *(eax_3 + 0x34)
            
            if ((*(**(*(esi_1 + 0x28) + 4) + 8))(eax_2) != 0x12)
                (*(**(*(esi_1 + 0x28) + 4) + 4))()
                struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** eax_14 =
                    sub_69adc6(0x50)
                var_1c = eax_14
                int32_t var_c_1 = 6
                struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** ecx_13
                
                if (eax_14 == 0)
                    ecx_13 = nullptr
                else
                    ecx_13 = sub_4ff5c0(eax_14, *(esi_1 + 0x3c))
                
                int32_t var_c_2 = 0xffffffff
                *(*(esi_1 + 0x28) + 4) = ecx_13
                *(esi_1 + 0x14) = 1
            
            sub_502d60(*(*(esi_1 + 0x28) + 4), var_20, ebp_1)
            void* esi_2 = *(eax_3 + 0x34)
            
            if ((*(**(*(esi_2 + 0x28) + 4) + 8))() != 0x12)
                (*(**(*(esi_2 + 0x28) + 4) + 4))()
                struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** eax_23 =
                    sub_69adc6(0x50)
                var_1c = eax_23
                int32_t var_c_3 = 0x12
                struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** ecx_18
                
                if (eax_23 == 0)
                    ecx_18 = nullptr
                else
                    ecx_18 = sub_4ff5c0(eax_23, *(esi_2 + 0x3c))
                
                int32_t var_c_4 = 0xffffffff
                *(*(esi_2 + 0x28) + 4) = ecx_18
                *(esi_2 + 0x14) = 1
            
            sub_503440(*(*(esi_2 + 0x28) + 4), 0, 0, var_20, ebp_1, 0)
            sub_4d23c0(eax_3, 0, 0, arg1 + 0x20c, arg1 + 0x88, *(arg1 + 0x22c), *(arg1 + 0x230), 1)
            void* esi_3 = *(eax_3 + 0x34)
            
            if ((*(**(*(esi_3 + 0x28) + 4) + 8))() != 0x12)
                (*(**(*(esi_3 + 0x28) + 4) + 4))()
                struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** eax_34 =
                    sub_69adc6(0x50)
                var_1c = eax_34
                int32_t var_c_5 = 0x1e
                struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** ecx_24
                
                if (eax_34 == 0)
                    ecx_24 = nullptr
                else
                    ecx_24 = sub_4ff5c0(eax_34, *(esi_3 + 0x3c))
                
                int32_t var_c_6 = 0xffffffff
                *(*(esi_3 + 0x28) + 4) = ecx_24
                *(esi_3 + 0x14) = 1
            
            result = sub_503c60(*(*(esi_3 + 0x28) + 4))

fsbase->NtTib.ExceptionList = ExceptionList
var_4
return result
