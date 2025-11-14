// 函数: sub_4e2670
// 地址: 0x4e2670
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6c0353
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_f4
int32_t eax_2 = __security_cookie ^ &var_f4
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_5 = sub_4a4020(*(arg1 + 0x8c))

if (*(eax_5 + 0x30) != 0)
    void* ecx_1 = *(eax_5 + 0x34)
    *(eax_5 + 0x30) = 0
    *(ecx_1 + 0x14) = 1

void* ecx_2 = *(*(arg1 + 0x2d4) + 8)
char eax_8

if (ecx_2 != 0)
    eax_8 = sub_48d400(ecx_2, arg1 + 0x1e4)

if (ecx_2 == 0 || eax_8 == 0)
    void* eax_18 = arg1 + 0x16c
    
    if (*(arg1 + 0x180) u>= 0x10)
        eax_18 = *eax_18
    
    if (sub_44a260(eax_18) == 0)
        int32_t esi_4 = *(arg1 + 0xe8) - *(arg1 + 0xf4) - *(arg1 + 0xf0)
        bool eax_19 = *(arg1 + 0x30)
        int32_t var_ec_2 = esi_4
        int32_t var_e8_1
        
        if (eax_19 == 0)
            var_e8_1 = esi_4
        else
            var_e8_1 = *(arg1 + 0xec)
        
        if (eax_19 == 0)
            esi_4 = *(arg1 + 0xec)
            var_ec_2 = esi_4
        
        void* eax_21 = *(eax_5 + 0x34)
        void* ecx_16
        
        if ((*(**(*(eax_21 + 0x28) + 4) + 8))(eax_4) == 0x12)
            ecx_16 = eax_21
        else
            (*(**(*(eax_21 + 0x28) + 4) + 4))()
            struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** eax_28 =
                sub_69adc6(0x50)
            struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** var_e4_1 =
                eax_28
            int32_t var_c_3 = 0x12
            struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** edx_1
            
            if (eax_28 == 0)
                edx_1 = nullptr
            else
                edx_1 = sub_4ff5c0(eax_28, *(eax_21 + 0x3c))
            
            ecx_16 = eax_21
            int32_t var_c_4 = 0xffffffff
            *(*(ecx_16 + 0x28) + 4) = edx_1
            *(ecx_16 + 0x14) = 1
        
        sub_502e30(*(*(ecx_16 + 0x28) + 4), var_e8_1, esi_4)
        void* esi_5 = *(eax_5 + 0x34)
        
        if ((*(**(*(esi_5 + 0x28) + 4) + 8))() != 0x12)
            (*(**(*(esi_5 + 0x28) + 4) + 4))()
            struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** eax_38 =
                sub_69adc6(0x50)
            struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** var_e4_2 =
                eax_38
            int32_t var_c_5 = 0x1e
            struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** ecx_21
            
            if (eax_38 == 0)
                ecx_21 = nullptr
            else
                ecx_21 = sub_4ff5c0(eax_38, *(esi_5 + 0x3c))
            
            *(*(esi_5 + 0x28) + 4) = ecx_21
            *(esi_5 + 0x14) = 1
        
        void* esi_6 = *(*(esi_5 + 0x28) + 4)
        struct partsengine::CConstructionProcess::VTable* var_e0
        sub_47f050(&var_e0)
        int32_t var_c_6 = 0x24
        int32_t var_b4_1 = var_e8_1
        int32_t var_b0_1 = var_ec_2
        int32_t var_dc_1 = 4
        int32_t var_c4_1 = 0
        int32_t var_c0_1 = 0
        int128_t var_ac_1 = data_709320
        sub_481250(esi_6 + 0x2c, &var_e0)
        int32_t var_c_7 = 0xffffffff
        sub_47f160(&var_e0)
        void* esi_7 = *(eax_5 + 0x34)
        
        if ((*(**(*(esi_7 + 0x28) + 4) + 8))() != 0x12)
            (*(**(*(esi_7 + 0x28) + 4) + 4))()
            struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** eax_49 =
                sub_69adc6(0x50)
            struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** var_e4_3 =
                eax_49
            int32_t var_c_8 = 0x2b
            struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** ecx_28
            
            if (eax_49 == 0)
                ecx_28 = nullptr
            else
                ecx_28 = sub_4ff5c0(eax_49, *(esi_7 + 0x3c))
            
            int32_t var_c_9 = 0xffffffff
            *(*(esi_7 + 0x28) + 4) = ecx_28
            *(esi_7 + 0x14) = 1
        
        sub_503c60(*(*(esi_7 + 0x28) + 4))
    else
        void* esi_1 = *(eax_5 + 0x34)
        sub_510cf0(esi_1, 0xb, 1)
        sub_4fe4a0(*(*(esi_1 + 0x28) + 4), arg1 + 0x16c, nullptr)
else
    void* esi = *(eax_5 + 0x34)
    
    if ((*(**(*(esi + 0x28) + 4) + 8))(eax_4) != 0x14)
        (*(**(*(esi + 0x28) + 4) + 4))()
        struct partsengine::CSprite::partsengine::CFlatSprite::VTable** eax_14 = sub_69adc6(0x78)
        struct partsengine::CSprite::partsengine::CFlatSprite::VTable** var_ec_1 = eax_14
        int32_t var_c_1 = 8
        struct partsengine::CSprite::partsengine::CFlatSprite::VTable** ecx_6
        
        if (eax_14 == 0)
            ecx_6 = nullptr
        else
            ecx_6 = sub_491950(eax_14, *(esi + 0x34), *(esi + 0x38))
        
        int32_t var_c_2 = 0xffffffff
        *(*(esi + 0x28) + 4) = ecx_6
        *(esi + 0x14) = 1
    
    sub_492050(*(*(esi + 0x28) + 4), arg1 + 0x1e4)

void* result = *(arg1 + 0x8c)

if (*(result + 0x47c) != 1)
    *(result + 0x47c) = 1
    *(result + 0x70) = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_f4)
return result
