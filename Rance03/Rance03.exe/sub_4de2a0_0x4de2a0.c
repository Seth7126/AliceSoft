// 函数: sub_4de2a0
// 地址: 0x4de2a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_12 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bffe2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = *(arg1 + 0xd0)
void* esi = *(arg1 + 0xd4)
void* var_14 = edi
void* var_18 = esi

if (edi s> 0 && esi s> 0)
    void* eax_3 = sub_4a4020(*(arg1 + 0x5c))
    void* ecx_1 = *(arg1 + 0x64)
    void* ebx_1 = eax_3
    void* var_3c = ebx_1
    void* eax_4 = sub_4a4020(ecx_1)
    sub_4d2240(ebx_1, 1)
    void* var_2c
    
    if (*(arg1 + 0x16c) != 0)
        var_3c = sub_5146e0(arg1 + 0x15c)
        void* eax_62 = sub_5147e0(arg1 + 0x15c)
        bool cond:1_1 = edi s>= var_3c
        void** ecx_30 = &var_3c
        var_2c = eax_62
        
        if (cond:1_1)
            ecx_30 = &var_14
        
        void* esi_1 = *(ebx_1 + 0x34)
        void* edi_1 = *ecx_30
        void** ecx_31 = &var_2c
        
        if (esi s>= eax_62)
            ecx_31 = &var_18
        
        var_14 = *ecx_31
        
        if ((*(**(*(esi_1 + 0x28) + 4) + 8))(eax_2) != 0x12)
            (*(**(*(esi_1 + 0x28) + 4) + 4))()
            struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** eax_69 =
                sub_69adc6(0x50)
            struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** var_10_6 =
                eax_69
            int32_t var_4_10 = 0x42
            struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** ecx_35
            
            if (eax_69 == 0)
                ecx_35 = nullptr
            else
                ecx_35 = sub_4ff5c0(eax_69, *(esi_1 + 0x3c))
            
            int32_t var_4_11 = 0xffffffff
            *(*(esi_1 + 0x28) + 4) = ecx_35
            *(esi_1 + 0x14) = 1
        
        sub_502d60(*(*(esi_1 + 0x28) + 4), edi_1, var_14)
        void* ecx_38 = var_2c
        void* eax_72 = var_3c
        sub_4d22d0(ebx_1, arg1 + 0x15c, 0, 0, eax_72, ecx_38, 0, 0, eax_72, ecx_38, 1, 1)
    else
        void* eax_6 = *(arg1 + 0x12c)
        void* eax_7 = *(arg1 + 0x130)
        int32_t eax_8 = *(arg1 + 0x134)
        var_14 = *(arg1 + 0x138)
        var_18 = *(arg1 + 0x13c)
        int32_t eax_11 = *(arg1 + 0x140)
        var_2c = *(arg1 + 0x144)
        int32_t eax_13 = *(arg1 + 0x148)
        int32_t eax_14 = *(arg1 + 0x14c)
        void* eax_15 = *(ebx_1 + 0x34)
        void* ecx_6
        
        if ((*(**(*(eax_15 + 0x28) + 4) + 8))(eax_2) == 0x12)
            ecx_6 = eax_15
        else
            (*(**(*(eax_15 + 0x28) + 4) + 4))()
            struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** eax_22 =
                sub_69adc6(0x50)
            struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** var_10_1 =
                eax_22
            int32_t var_4 = 6
            struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** edx_1
            
            if (eax_22 == 0)
                edx_1 = nullptr
            else
                edx_1 = sub_4ff5c0(eax_22, *(eax_15 + 0x3c))
            
            ecx_6 = eax_15
            int32_t var_4_1 = 0xffffffff
            *(*(ecx_6 + 0x28) + 4) = edx_1
            *(ecx_6 + 0x14) = 1
        
        sub_502e30(*(*(ecx_6 + 0x28) + 4), edi, esi)
        void* ebx_2 = *(ebx_1 + 0x34)
        int32_t eax_29 = **(*(ebx_2 + 0x28) + 4)
        void* var_60_1
        void* var_5c_2
        int32_t var_58_5
        
        if (*(arg1 + 0x10c) != 0)
            if ((*(eax_29 + 8))() != 0x12)
                (*(**(*(ebx_2 + 0x28) + 4) + 4))()
                struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** eax_39 =
                    sub_69adc6(0x50)
                struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** var_10_3 =
                    eax_39
                int32_t var_4_4 = 0x1e
                struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** ecx_14
                
                if (eax_39 == 0)
                    ecx_14 = nullptr
                else
                    ecx_14 = sub_4ff5c0(eax_39, *(ebx_2 + 0x3c))
                
                int32_t var_4_5 = 0xffffffff
                *(*(ebx_2 + 0x28) + 4) = ecx_14
                *(ebx_2 + 0x14) = 1
            
            var_58_5 = eax_11
            var_5c_2 = var_18
            var_60_1 = var_14
        else
            if ((*(eax_29 + 8))() != 0x12)
                (*(**(*(ebx_2 + 0x28) + 4) + 4))()
                struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** eax_33 =
                    sub_69adc6(0x50)
                struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** var_10_2 =
                    eax_33
                int32_t var_4_2 = 0x12
                struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** ecx_11
                
                if (eax_33 == 0)
                    ecx_11 = nullptr
                else
                    ecx_11 = sub_4ff5c0(eax_33, *(ebx_2 + 0x3c))
                
                int32_t var_4_3 = 0xffffffff
                *(*(ebx_2 + 0x28) + 4) = ecx_11
                *(ebx_2 + 0x14) = 1
            
            var_58_5 = eax_8
            var_5c_2 = eax_7
            var_60_1 = eax_6
        
        sub_503020(*(*(ebx_2 + 0x28) + 4), 0, 0, edi, esi, var_60_1, var_5c_2, var_58_5)
        void* ebx_4 = *(var_3c + 0x34)
        
        if ((*(**(*(ebx_4 + 0x28) + 4) + 8))() != 0x12)
            (*(**(*(ebx_4 + 0x28) + 4) + 4))()
            struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** eax_48 =
                sub_69adc6(0x50)
            struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** var_10_4 =
                eax_48
            int32_t var_4_6 = 0x2a
            struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** ecx_19
            
            if (eax_48 == 0)
                ecx_19 = nullptr
            else
                ecx_19 = sub_4ff5c0(eax_48, *(ebx_4 + 0x3c))
            
            int32_t var_4_7 = 0xffffffff
            *(*(ebx_4 + 0x28) + 4) = ecx_19
            *(ebx_4 + 0x14) = 1
        
        sub_5035e0(*(*(ebx_4 + 0x28) + 4), 1, 1, edi - 2, esi - 2, var_2c, eax_13, eax_14)
        void* ebx_5 = *(var_3c + 0x34)
        
        if ((*(**(*(ebx_5 + 0x28) + 4) + 8))() != 0x12)
            (*(**(*(ebx_5 + 0x28) + 4) + 4))()
            struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** eax_58 =
                sub_69adc6(0x50)
            struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** var_10_5 =
                eax_58
            int32_t var_4_8 = 0x36
            struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** ecx_26
            
            if (eax_58 == 0)
                ecx_26 = nullptr
            else
                ecx_26 = sub_4ff5c0(eax_58, *(ebx_5 + 0x3c))
            
            int32_t var_4_9 = 0xffffffff
            *(*(ebx_5 + 0x28) + 4) = ecx_26
            *(ebx_5 + 0x14) = 1
        
        sub_5035e0(*(*(ebx_5 + 0x28) + 4), 0, 0, edi, esi, var_2c, eax_13, eax_14)
        ebx_1 = var_3c
    sub_503c60(sub_510540(*(ebx_1 + 0x34), 1))
    sub_4d2240(eax_4, 1)
    int32_t edi_3 = (*(*(arg1 - 0x2c) + 0x2c))(1) - *(arg1 + 0xcc)
    sub_502e30(sub_510540(*(eax_4 + 0x34), 1), 1, edi_3)
    int32_t edi_5 = (*(*(arg1 - 0x2c) + 0x2c))(1) - *(arg1 + 0xcc)
    sub_503020(sub_510540(*(eax_4 + 0x34), 1), 0, 0, 1, edi_5, 0, 0, 0)
    sub_503c60(sub_510540(*(eax_4 + 0x34), 1))

void* eax_83 = sub_4a4020(*(arg1 + 0x5c))

if (*(eax_83 + 0x30) != 0)
    *(eax_83 + 0x30) = 0
    *(*(eax_83 + 0x34) + 0x14) = 1

void* eax_85 = sub_4a4020(*(arg1 + 0x64))

if (*(eax_85 + 0x30) != 0)
    *(eax_85 + 0x30) = 0
    *(*(eax_85 + 0x34) + 0x14) = 1

void* eax_87 = sub_4a4020(*(arg1 + 0x60))

if (*(eax_87 + 0x30) != 0)
    *(eax_87 + 0x30) = 0
    *(*(eax_87 + 0x34) + 0x14) = 1

void* result = *(arg1 + 0x5c)

if (*(result + 0x47c) != 1)
    *(result + 0x47c) = 1
    *(result + 0x70) = 1

fsbase->NtTib.ExceptionList = ExceptionList
return result
