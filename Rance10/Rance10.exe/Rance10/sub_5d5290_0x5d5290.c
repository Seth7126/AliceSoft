// 函数: sub_5d5290
// 地址: 0x5d5290
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_741360
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
bool cond:0 = *arg3 != 0
int32_t var_1c = 0
char var_2c = 0
void* ecx

if (cond:0)
    char* ecx_1 = arg3
    char i
    
    do
        i = *ecx_1
        ecx_1 = &ecx_1[1]
    while (i != 0)
    ecx = ecx_1 - &ecx_1[1]
else
    ecx = nullptr

int32_t ecx_3 = sub_403490(&var_2c, arg3, ecx)
int32_t var_68_1 = 1
int32_t var_8_1 = 0
char var_4c = 0x2e
char* var_68_2 = &var_2c
int32_t* var_50
int32_t* var_6c_2 = &var_50
int32_t* ebx

if (sub_42cb30(&var_2c, &var_4c, ecx_3) != 0xffffffff)
    var_50 = nullptr
    
    if (sub_5d5000(arg1, var_6c_2, var_68_2).b != 0)
        char* edx_1 = &var_2c
        
        if (var_18 u>= 0x10)
            edx_1 = var_2c.d
        
        ebx.b = (*(*var_50 + 0xc))(arg2, edx_1).b
    else
        ebx.b = 0
else
    sub_5d4880(arg1 + 0x24, var_6c_2, var_68_2)
    int32_t* esi_1 = var_50
    
    if (esi_1 != *(arg1 + 0x24))
        __Smtx_lock_shared(&esi_1[0xb])
        int32_t ebx_1 = esi_1[0xa]
        __Smtx_unlock_shared(&esi_1[0xb])
        int32_t ebx_2 = neg.d(ebx_1)
        ebx = sbb.d(ebx_2, ebx_2, ebx_1 != 0) & (ebx_1 + 4)
        int32_t* eax_6 = (*(*ebx + 0x14))(eax_2)
        int32_t* esi_2 = arg2
        var_50 = eax_6
        (*(*esi_2 + 0x44))(eax_6)
        int32_t edi_4 = 0
        
        if (var_50 s<= 0)
        label_5d53dc:
            ebx.b = 1
        else
            while (true)
                struct IString::common::CStringWrapper::VTable* var_48 =
                    &common::CStringWrapper::`vftable'{for `IString'}
                void*** var_30_1 = 0xf
                int32_t var_34_1 = 0
                char var_44_1 = 0
                var_8_1.b = 1
                
                if ((*(*ebx + 0x1c))(&var_48, edi_4) != 0
                        && (*(*esi_2 + 0x34))(edi_4, var_48->__offset(0x0).d()) != 0)
                    var_8_1.b = 0
                    sub_404c60(&var_48)
                    esi_2 = arg2
                    edi_4 += 1
                    
                    if (edi_4 s>= var_50)
                        goto label_5d53dc
                    
                    continue
                
                var_48 = &common::CStringWrapper::`vftable'{for `IString'}
                
                if (var_30_1 u>= 0x10)
                    sub_403160(var_44_1.d, var_30_1 + 1, 1)
                
                ebx.b = 0
                break
    else
        ebx.b = 0

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

void*** result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
