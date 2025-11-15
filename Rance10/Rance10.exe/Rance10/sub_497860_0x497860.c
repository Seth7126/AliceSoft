// 函数: sub_497860
// 地址: 0x497860
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_730058
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_60 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct mainsystem::CCmdLineCutter::VTable* const var_48 = &mainsystem::CCmdLineCutter::`vftable'
void* var_44 = nullptr
int32_t var_40 = 0
int32_t var_3c = 0
int32_t var_8_1 = 0
bool cond:0 = *arg2 != 0
int32_t var_1c = 0xf
int32_t var_20 = 0
char var_30 = 0
void* ecx

if (cond:0)
    char* ecx_1 = arg2
    char i
    
    do
        i = *ecx_1
        ecx_1 = &ecx_1[1]
    while (i != 0)
    ecx = ecx_1 - &ecx_1[1]
else
    ecx = nullptr

sub_403490(&var_30, arg2, ecx)
var_8_1.b = 1
var_8_1.b = 0
int32_t ebx
ebx.b = sub_494e10(&var_48, &var_30) == 0

if (var_1c u>= 0x10)
    sub_403160(var_30.d, var_1c + 1, 1)

if (ebx.b == 0)
    void* esi_2 = var_44
    int32_t i_3 = (var_40 - esi_2) s/ 0x30
    int32_t i_2 = i_3
    
    if (i_3 s> 0)
        int32_t* esi_3 = esi_2 + 0x18
        int32_t i_1
        
        do
            int32_t* ecx_6
            
            if (esi_3[-1] u< 0x10)
                ecx_6 = &esi_3[-6]
            else
                ecx_6 = esi_3[-6]
            
            int32_t ebx_1 = esi_3[-2]
            int32_t eax_9 = 1
            
            if (ebx_1 u< 1)
                eax_9 = ebx_1
            
            int32_t eax_10 = sub_406ac0(eax_9, 0x760a40, ecx_6, eax_9)
            
            if (eax_10 != 0 || ebx_1 u< 1 || ebx_1 u> 1)
                int32_t* ecx_9
                
                if (esi_3[-1] u< 0x10)
                    ecx_9 = &esi_3[-6]
                else
                    ecx_9 = esi_3[-6]
                
                int32_t eax_11 = 1
                
                if (ebx_1 u< 1)
                    eax_11 = ebx_1
                
                if (sub_406ac0(eax_11, 0x760a44, ecx_9, eax_11) != 0 || ebx_1 u< 1 || ebx_1 u> 1)
                    if (sub_407560(&esi_3[-6], 0x760a70) == 0)
                        if (sub_407560(&esi_3[-6], 0x760a74) == 0)
                            if (sub_407560(&esi_3[-6], 0x760a78) != 0)
                                data_7fcbdd = 1
                                data_7fcb28 = 1
                        else
                            *(arg1 + 0x208) = 1
                    else
                        int32_t* eax_19
                        
                        if (esi_3[5] u< 0x10)
                            eax_19 = esi_3
                        else
                            eax_19 = *esi_3
                        
                        uint32_t var_50
                        int32_t* var_64_5 = &var_50
                        
                        if (sub_6ca310(eax_19, 0x7942dc) == 1)
                            sub_4060a0(var_50)
                else
                    int32_t* eax_13
                    
                    if (esi_3[5] u< 0x10)
                        eax_13 = esi_3
                    else
                        eax_13 = *esi_3
                    
                    int32_t var_4c
                    int32_t* var_64_4 = &var_4c
                    
                    if (sub_6ca310(eax_13, 0x7942d8) != 1)
                        sub_403360(&var_30, 0x760a48)
                        var_8_1.b = 2
                        sub_6c52e0(&var_30)
                        var_8_1.b = 0
                        
                        if (var_1c u>= 0x10)
                            sub_403160(var_30.d, var_1c + 1, 1)
                    else
                        *(arg1 + 0x184) = var_4c
            else if (arg1 + 0x1b0 != esi_3)
                sub_403590(arg1 + 0x1b0, esi_3, eax_10, 0xffffffff)
            
            esi_3 = &esi_3[0xc]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)

var_48 = &mainsystem::CCmdLineCutter::`vftable'
int32_t result = sub_408f50(&var_44)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
