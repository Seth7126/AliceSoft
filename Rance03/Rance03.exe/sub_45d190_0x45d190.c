// 函数: sub_45d190
// 地址: 0x45d190
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b8532
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* ebx
void* var_54 = ebx
int32_t __saved_edi
int32_t var_64 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_3c = nullptr
struct exfile::CToken::VTable** var_38 = nullptr
int32_t var_34 = 0
int32_t var_4 = 0
void* eax_3

if (*(arg2 + 0x20) != 0)
    eax_3 = *(arg2 + 0x24)

void* eax_4

if (*(arg2 + 0x20) == 0 || eax_3 == *(arg2 + 0x1c))
    eax_4 = nullptr
else
    eax_4 = eax_3 + 8

void* ecx_1 = sub_45d470(&var_3c, eax_4)
struct exfile::CToken::VTable** esi = var_38
int32_t ebp = 1

while (true)
    if (*(arg2 + 0x20) != 0 && *(arg2 + 0x24) != *(arg2 + 0x1c))
        void* eax_7 = **(arg2 + 0x24)
        *(arg2 + 0x24) = eax_7
        
        if (*(arg2 + 0x20) != 0 && eax_7 != *(arg2 + 0x1c) && eax_7 != 0xfffffff8)
            void* eax_8
            
            if (eax_7 + 8 u< esi)
                eax_8 = var_3c
            
            if (eax_7 + 8 u>= esi || eax_8 u> eax_7 + 8)
                if (esi == var_34)
                    void* var_68_2 = ecx_1
                    ecx_1 = sub_45d4e0(&var_3c)
                    esi = var_38
                
                struct exfile::CToken::VTable** var_40_2 = esi
                struct exfile::CToken::VTable** var_44_2 = esi
                var_4.b = 2
                
                if (esi != 0)
                    *esi = &exfile::CToken::`vftable'
                    esi[6] = 0xf
                    esi[5] = 0
                    esi[1].b = 0
                    ecx_1 = sub_401ff0(&esi[1], eax_7 + 0xc, 0, 0xffffffff)
                    esi[7] = *(eax_7 + 0x24)
                    esi[8] = *(eax_7 + 0x28)
            else
                void* ecx_3 = eax_7 + 8 - eax_8
                
                if (esi == var_34)
                    void* var_68_1 = ecx_3
                    sub_45d4e0(&var_3c)
                    esi = var_38
                
                ecx_1 = var_3c
                struct exfile::CToken::VTable** var_44_1 = esi
                struct exfile::CToken::VTable** var_40_1 = esi
                void* eax_14 = ecx_1 + ecx_3 s/ 0x24 * 0x24
                var_4.b = 1
                
                if (esi != 0)
                    *esi = &exfile::CToken::`vftable'
                    esi[6] = 0xf
                    esi[5] = 0
                    esi[1].b = 0
                    sub_401ff0(&esi[1], eax_14 + 4, 0, 0xffffffff)
                    ecx_1 = eax_14
                    esi[7] = *(ecx_1 + 0x1c)
                    esi[8] = *(ecx_1 + 0x20)
            
            var_4.b = 0
            esi = &esi[9]
            int32_t eax_20 = *(eax_7 + 0x24)
            var_38 = esi
            
            if (eax_20 == 5)
                ebp += 1
            
            if (eax_20 == 6)
                ebp -= 1
            
            if (ebp s> 0)
                continue
            
            struct exfile::CReversePolishNotation::VTable* var_30
            sub_464e50(&var_30, &var_3c)
            var_4.b = 3
            var_4.b = 0
            ebx.b = sub_465690(&var_30, arg1)
            var_30 = &exfile::CReversePolishNotation::`vftable'
            void var_20
            sub_45d550(&var_20)
            void var_2c
            sub_45d550(&var_2c)
            break
    
    ebx.b = 0
    break

int32_t var_4_1 = 0xffffffff
sub_45d550(&var_3c)
int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
