// 函数: sub_4366f0
// 地址: 0x4366f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5c7e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_b8
int32_t eax_2 = __security_cookie ^ &var_b8
int32_t __saved_edi
int32_t var_cc = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_d0 = arg1 + 0x78
void* var_d4 = arg1
sub_438160(*(arg1 + 0x78), *(arg1 + 0x7c))
*(arg1 + 0x7c) = *(arg1 + 0x78)
void* edi = *(arg1 + 0x54)
int32_t eax_6
int32_t edx_1
edx_1:eax_6 = muls.dp.d(0x66666667, *(arg1 + 0x58) - edi)
struct advengine::CTokenList::VTable* var_98 = &advengine::CTokenList::`vftable'
int32_t edx_2 = edx_1 s>> 4
struct advengine::CToken::VTable* var_94
sub_438820(&var_94)
void* var_6c = edi
void* ebp = edi + ((edx_2 u>> 0x1f) + edx_2) * 0x28
void* var_68 = edi
int32_t var_60 = 0
int32_t var_5c = 0
int32_t var_58 = 0
int32_t var_4 = 0

while (edi != ebp)
    void* ebp_1 = edi
    edi += 0x28
    
    if (*(ebp_1 + 4) == 1)
        void* eax_8 = ebp_1 + 8
        int32_t ebx_1 = *(eax_8 + 0x10)
        
        if (*(ebp_1 + 0x1c) u>= 0x10)
            eax_8 = *eax_8
        
        int32_t edx_3 = 2
        
        if (ebx_1 u< 2)
            edx_3 = ebx_1
        
        int32_t eax_10
        bool cond:2_1
        
        if (edx_3 == 0)
        label_436843:
            
            if (ebx_1 u>= 2)
                eax_10.b = ebx_1 != 2
            else
                eax_10 = 0xffffffff
            
            cond:2_1 = eax_10 == 0
        else
            void* const esi_4 = &data_6db290
            int32_t i_1 = edx_3 - 4
            
            if (edx_3 u>= 4)
                int32_t i
                
                do
                    if (*eax_8 != *esi_4)
                        goto label_436806
                    
                    eax_8 += 4
                    esi_4 += 4
                    i = i_1
                    i_1 -= 4
                while (i u>= 4)
            
            if (i_1 == 0xfffffffc)
                eax_10 = 0
            else
            label_436806:
                int32_t ecx_4
                ecx_4.b = *eax_8
                char temp1_1 = *esi_4
                
                if (ecx_4.b != temp1_1)
                    eax_10 = sbb.d(eax_8, eax_8, ecx_4.b u< temp1_1) | 1
                else if (i_1 == 0xfffffffd)
                    eax_10 = 0
                else
                    ecx_4.b = *(eax_8 + 1)
                    char temp4_1 = *(esi_4 + 1)
                    
                    if (ecx_4.b != temp4_1)
                        eax_10 = sbb.d(eax_8, eax_8, ecx_4.b u< temp4_1) | 1
                    else if (i_1 == 0xfffffffe)
                        eax_10 = 0
                    else
                        ecx_4.b = *(eax_8 + 2)
                        char temp5_1 = *(esi_4 + 2)
                        
                        if (ecx_4.b != temp5_1)
                            eax_10 = sbb.d(eax_8, eax_8, ecx_4.b u< temp5_1) | 1
                        else if (i_1 == 0xffffffff)
                            eax_10 = 0
                        else
                            eax_8.b = *(eax_8 + 3)
                            char temp6_1 = *(esi_4 + 3)
                            
                            if (eax_8.b == temp6_1)
                                eax_10 = 0
                            else
                                eax_10 = sbb.d(eax_8, eax_8, eax_8.b u< temp6_1) | 1
            
            cond:2_1 = eax_10 == 0
            
            if (eax_10 == 0)
                goto label_436843
        
        eax_10.b = cond:2_1
        eax_10.b = eax_10.b == 0
        
        if (eax_10.b == 0)
            int32_t var_9c_1 = 0xf
            int32_t var_a0_1 = 0
            char var_b0 = eax_10.b
            var_4.b = 1
            sub_437130(&var_98, &var_b0)
            var_4.b = 2
            struct advengine::CToken::VTable* var_50
            sub_437990(arg1 + 0x78, sub_437f20(&var_b0, ebp_1, &var_50, &var_b0))
            char var_28
            int32_t var_14
            
            if (var_14 u>= 0x10)
                j__free(var_28.d)
            
            var_14 = 0xf
            int32_t var_18_1 = 0
            var_28 = 0
            var_50 = &advengine::CToken::`vftable'
            int32_t var_34
            int32_t var_48
            
            if (var_34 u>= 0x10)
                j__free(var_48)
            var_4.b = 0
            
            if (var_9c_1 u>= 0x10)
                j__free(var_b0.d)

sub_4399f0(&var_98)
int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_b8)
return result
