// 函数: sub_672cf0
// 地址: 0x672cf0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d0208
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_40
int32_t eax_2 = __security_cookie ^ &var_40
int32_t __saved_edi
int32_t var_4c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_2c = 0xf
int32_t var_30 = 0
var_40 = 0
int32_t var_4 = 0
struct _EXCEPTION_REGISTRATION_RECORD** eax_5 = *(arg1 + 0x5c)
void* edx = eax_5[0x38]
char* edx_1

if (edx == 0)
    edx_1 = &var_40
else
    void* ecx = eax_5[0x37]
    
    if (ecx == 0)
        edx_1 = &var_40
    else
        eax_5 = eax_5[0x16]
        
        if (eax_5 == 0)
            sub_6635d0(ecx, &var_40)
        label_672d84:
            edx_1 = var_40.d
            
            if (var_2c u< 0x10)
                edx_1 = &var_40
        else if (eax_5 != 1)
            edx_1 = &var_40
        else
            int32_t ecx_1 = *(edx + 0x70)
            
            if (ecx_1 != 0)
                sub_6685a0(ecx_1, &var_40)
                goto label_672d84
            
            edx_1 = &var_40

int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
void* ecx_2

if (*edx_1 != 0)
    char* ecx_3 = edx_1
    
    do
        eax_5.b = *ecx_3
        ecx_3 = &ecx_3[1]
    while (eax_5.b != 0)
    
    ecx_2 = ecx_3 - &ecx_3[1]
else
    ecx_2 = nullptr

sub_402110(&var_28, edx_1, ecx_2)
char* lParam = &var_28

if (var_14 u>= 0x10)
    lParam = var_28.d

LRESULT result = SendMessageA(*(arg1 + 0x70), 0x401, 0, lParam)

if (var_14 u>= 0x10)
    result = j__free(var_28.d)

if (var_2c u>= 0x10)
    result = j__free(var_40.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_40)
return result
