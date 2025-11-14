// 函数: sub_603f40
// 地址: 0x603f40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ccaa0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_38
int32_t eax_2 = __security_cookie ^ &var_38
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_34 = nullptr
int32_t var_30 = 0
int32_t var_2c = 0
int32_t var_4 = 0
char* edx = (**arg1)(eax_4)
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
void* ecx

if (*edx != 0)
    char* ecx_2 = edx
    char* eax_6
    
    do
        eax_6.b = *ecx_2
        ecx_2 = &ecx_2[1]
    while (eax_6.b != 0)
    ecx = ecx_2 - &edx[1]
else
    ecx = nullptr

sub_402110(&var_28, edx, ecx)
var_4.b = 1
sub_605cc0(&var_28, &var_34)
var_4.b = 0

if (var_14 u>= 0x10)
    j__free(var_28.d)

int32_t* ebp = var_34
var_38 = (var_30 - ebp) s/ 0x18
int32_t* result
int32_t* ebx

if ((*(*arg2 + 0x30))(&var_38, 1).b == 0)
label_60406e:
    ebx.b = 0
else
    int32_t edi_1 = 0
    
    if (var_38 s> 0)
        void* esi_2 = ebp
        
        do
            result = (*(*arg2 + 0x18))(edi_1)
            
            if (result == 0)
                goto label_60406e
            
            void* edx_4
            
            if (*(esi_2 + 0x14) u< 0x10)
                edx_4 = esi_2
            else
                edx_4 = *esi_2
            
            (*(*result + 4))(edx_4)
            edi_1 += 1
            esi_2 += 0x18
        while (edi_1 s< var_38)
    
    ebx.b = 1

if (ebp != 0)
    int32_t* esi_3 = ebp
    
    if (ebp != var_30)
        do
            if (esi_3[5] u>= 0x10)
                j__free(*esi_3)
            
            esi_3[5] = 0xf
            esi_3[4] = 0
            *esi_3 = 0
            esi_3 = &esi_3[6]
        while (esi_3 != var_30)
    
    j__free(ebp)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_38)
return result
