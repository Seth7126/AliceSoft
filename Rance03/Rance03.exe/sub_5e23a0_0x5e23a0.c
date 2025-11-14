// 函数: sub_5e23a0
// 地址: 0x5e23a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6cacf0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_4c
int32_t eax_2 = __security_cookie ^ &var_4c
int32_t __saved_edi
int32_t var_5c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg1 + 0x1c
sub_4107c0(*edi, *(arg1 + 0x20))
*(edi + 4) = *edi
HIMC param0 = ImmGetContext(*(arg1 + 0x6c))
uint32_t dwBufLen = ImmGetCandidateListA(param0, 0, nullptr, 0)

if (dwBufLen != 0)
    CANDIDATELIST* lpCandList_1
    sub_448e90(&lpCandList_1, dwBufLen)
    int32_t var_c_1 = 0
    CANDIDATELIST* lpCandList = lpCandList_1
    ImmGetCandidateListA(param0, 0, lpCandList, dwBufLen)
    int32_t i = 0
    
    if (lpCandList->dwCount s> 0)
        void* edi_1 = &lpCandList->dwOffset
        
        do
            void* edx_2 = *edi_1 + lpCandList
            int32_t var_20_1 = 0xf
            int32_t var_24_1 = 0
            char var_34 = 0
            void* eax_6
            
            if (*edx_2 != 0)
                void* eax_7 = edx_2
                void* var_48_1 = eax_7 + 1
                void* ecx_1
                
                do
                    ecx_1.b = *eax_7
                    eax_7 += 1
                while (ecx_1.b != 0)
                eax_6 = eax_7 - var_48_1
            else
                eax_6 = nullptr
            
            sub_402110(&var_34, edx_2, eax_6)
            var_c_1.b = 1
            sub_412d60(edi, &var_34)
            var_c_1.b = 0
            
            if (var_20_1 u>= 0x10)
                j__free(var_34.d)
            
            i += 1
            edi_1 += 4
        while (i s< lpCandList->dwCount)
    
    j__free(lpCandList)

int32_t result
result.b = *edi != *(edi + 4)
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_4c)
return result
