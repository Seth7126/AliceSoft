// 函数: sub_49d210
// 地址: 0x49d210
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7309a0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_50 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_34
int32_t var_54 = var_34
void* ebx = arg1 + 0x1c
void* var_58 = arg1
sub_417d50(*ebx, *(arg1 + 0x20))
*(ebx + 4) = *ebx
HIMC param0 = ImmGetContext(*(arg1 + 0x6c))
uint32_t dwBufLen = ImmGetCandidateListA(param0, 0, nullptr, 0)

if (dwBufLen != 0)
    CANDIDATELIST* lpCandList_1
    sub_431b80(&lpCandList_1, dwBufLen)
    int32_t var_8_1 = 0
    CANDIDATELIST* lpCandList = lpCandList_1
    ImmGetCandidateListA(param0, 0, lpCandList, dwBufLen)
    int32_t i = 0
    
    if (lpCandList->dwCount s> 0)
        void** ebx_1 = &lpCandList->dwOffset
        
        do
            void* edx_2 = *ebx_1 + lpCandList
            int32_t var_18_1 = 0xf
            int32_t var_1c_1 = 0
            char var_2c = 0
            void* eax_4
            
            if (*edx_2 != 0)
                void* eax_5 = edx_2
                void* var_34_1 = eax_5 + 1
                void* ecx_2
                
                do
                    ecx_2.b = *eax_5
                    eax_5 += 1
                while (ecx_2.b != 0)
                eax_4 = eax_5 - var_34_1
            else
                eax_4 = nullptr
            
            sub_403490(&var_2c, edx_2, eax_4)
            var_8_1.b = 1
            sub_431bd0(ebx, &var_2c)
            var_8_1.b = 0
            
            if (var_18_1 u>= 0x10)
                sub_403160(var_2c.d, var_18_1 + 1, 1)
            
            i += 1
            ebx_1 = &ebx_1[1]
        while (i s< lpCandList->dwCount)
    
    int32_t var_38
    sub_403160(lpCandList, var_38 - lpCandList, 1)

int32_t result
result.b = *ebx != *(ebx + 4)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
