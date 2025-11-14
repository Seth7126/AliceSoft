// 函数: sub_50d490
// 地址: 0x50d490
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c1a43
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CLLSprite::VTable** var_48
int32_t eax_2 = __security_cookie ^ &var_48
int32_t __saved_edi
int32_t var_5c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

for (int32_t* i = *(arg1 + 0x2c8); i != *(arg1 + 0x2cc); i = &i[1])
    int32_t* ecx = *i
    
    if (ecx != 0)
        (**ecx)(1)

*(arg1 + 0x2cc) = *(arg1 + 0x2c8)
*(arg1 + 0x2d4) = 0
*(arg1 + 0x2d8) = 0
int32_t* var_34 = nullptr
int32_t var_30 = 0
int32_t var_2c = 0
int32_t var_4 = 0
sub_50d820(arg1, &var_34)
void* eax_7 = arg1 + 0x158

if (*(arg1 + 0x2ac) == 0)
    eax_7 = arg1 + 0x38

int32_t* ecx_2 = var_34
int32_t* esi = ecx_2

if (ecx_2 != var_30)
    void* ebx_1 = arg1 + 0x2c8
    
    do
        int32_t ebp_1 = 0
        
        if (*esi s< 0xc)
            ebp_1 = *esi
        
        struct partsengine::CLLSprite::VTable** eax_8 = sub_69adc6(0x1c)
        var_48 = eax_8
        var_4.b = 1
        struct partsengine::CLLSprite::VTable** edx_1
        
        if (eax_8 == 0)
            edx_1 = nullptr
            var_48 = nullptr
        else
            struct partsengine::CLLSprite::VTable** eax_9 = sub_505680(eax_8)
            edx_1 = eax_9
            var_48 = eax_9
        
        var_4.b = 0
        int32_t eax_10 = *(arg1 + 0x28)
        struct partsengine::CRect::VTable* const var_28
        
        if (eax_10 == 0)
            void* eax_11 = arg1 + 0x10
            
            if (*(arg1 + 0x24) u>= 0x10)
                eax_11 = *eax_11
            
            int32_t var_60_1 = ebp_1
            int32_t** eax_12 = sub_4691f0(&var_28, eax_11)
            var_4.b = 2
            sub_5058d0(var_48, eax_12)
            var_4.b = 0
            int32_t var_14
            
            if (var_14 u>= 0x10)
                j__free(var_28)
        else if (eax_10 == 1)
            int32_t edx_2 = 0
            int32_t i_1 = 0
            
            if (ebp_1 s> 0)
                while (i_1 s< (*(arg1 + 0x30) - *(arg1 + 0x2c)) s>> 2)
                    edx_2 += *(*(arg1 + 0x2c) + (i_1 << 2))
                    i_1 += 1
                    
                    if (i_1 s>= ebp_1)
                        break
                
                ebx_1 = arg1 + 0x2c8
            
            int32_t ecx_5 = 0
            
            if (*esi s< (*(arg1 + 0x30) - *(arg1 + 0x2c)) s>> 2)
                ecx_5 = *(*(arg1 + 0x2c) + (ebp_1 << 2))
            
            var_28 = &partsengine::CRect::`vftable'
            int32_t var_24_1 = edx_2
            int32_t var_20_1 = 0
            int32_t var_1c_1 = ecx_5
            int32_t var_18_1 = 0xffff
            var_4.b = 3
            sub_505c40(var_48, arg1 + 0x10, &var_28)
            var_4.b = 0
        else if (eax_10 == 2)
            void* ecx_7 = data_75d4cc
            char var_41_1 = 0xff
            char var_3d_1 = 0xff
            *(ecx_7 + 0x194) = *(arg1 + 0x27c)
            *(ecx_7 + 0x198) = *(arg1 + 0x280)
            char var_43_1 = *(arg1 + 0x288)
            char var_42_1 = *(arg1 + 0x28c)
            *(ecx_7 + 0x19c) = (*(arg1 + 0x284)).d
            *(ecx_7 + 0x1a4) = *(arg1 + 0x298)
            char var_3f_1 = *(arg1 + 0x2a0)
            char var_3e_1 = *(arg1 + 0x2a4)
            *(ecx_7 + 0x1a8) = (*(arg1 + 0x29c)).d
            *(ecx_7 + 0x1a0) = *(arg1 + 0x294)
            sub_506a20(edx_1, eax_7 + ebp_1 * 0x18)
        struct partsengine::CLLSprite::VTable** eax_35 = var_48
        void* ecx_10 = eax_35[1]
        
        if (ecx_10 != 0)
            ecx_10 = *(ecx_10 + 0x18)
        
        *(arg1 + 0x2d4) += ecx_10
        void* ecx_11 = eax_35[1]
        int32_t edx_3
        
        if (ecx_11 != 0)
            edx_3 = *(ecx_11 + 0x1c)
        else
            edx_3 = 0
        
        if (*(arg1 + 0x2d8) s< edx_3)
            if (ecx_11 != 0)
                ecx_11 = *(ecx_11 + 0x1c)
            
            *(arg1 + 0x2d8) = ecx_11
        
        int32_t ecx_12 = *(ebx_1 + 4)
        struct partsengine::CLLSprite::VTable** var_3c = eax_35
        int32_t edx_4
        
        if (&var_3c u< ecx_12)
            edx_4 = *ebx_1
        
        void** ecx_15
        
        if (&var_3c u>= ecx_12 || edx_4 u> &var_3c)
            if (ecx_12 == *(ebx_1 + 8))
                int32_t var_60_7 = ecx_12
                sub_412f20(ebx_1)
                eax_35 = var_48
            
            ecx_15 = *(ebx_1 + 4)
            
            if (ecx_15 != 0)
                *ecx_15 = eax_35
        else
            if (ecx_12 == *(ebx_1 + 8))
                int32_t var_60_6 = ecx_12
                sub_412f20(ebx_1)
            
            ecx_15 = *(ebx_1 + 4)
            
            if (ecx_15 != 0)
                *ecx_15 = *(*ebx_1 + ((&var_3c - edx_4) s>> 2 << 2))
        *(ebx_1 + 4) += 4
        esi = &esi[1]
    while (esi != var_30)
    
    ecx_2 = var_34

int32_t eax_39 = ((*(arg1 + 0x2cc) - *(arg1 + 0x2c8)) s>> 2) - 1
*(arg1 + 0x2f0) = 1
int32_t result = eax_39 * *(arg1 + 0x2b8)
*(arg1 + 0x2d4) += result

if (ecx_2 != 0)
    result = j__free(ecx_2)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_48)
return result
