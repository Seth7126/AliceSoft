// 函数: sub_468590
// 地址: 0x468590
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b9248
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_68
int32_t eax_2 = __security_cookie ^ &var_68
int32_t __saved_edi
int32_t var_7c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_28
char* ebp = sub_468250(arg2, &var_28)
int32_t var_4 = 0
char var_40
char* ecx_2 = sub_468250(arg1, &var_40)
int32_t edx = *(ebp + 0x10)

if (*(ebp + 0x14) u>= 0x10)
    ebp = *ebp

int32_t esi = *(ecx_2 + 0x10)

if (*(ecx_2 + 0x14) u>= 0x10)
    ecx_2 = *ecx_2

int32_t eax_8 = edx

if (esi u< edx)
    eax_8 = esi

int32_t eax_9 = sub_405190(eax_8, ebp, ecx_2, eax_8)
bool cond:3 = eax_9 == 0

if (eax_9 == 0)
    if (esi u>= edx)
        eax_9.b = esi != edx
    else
        eax_9 = 0xffffffff
    
    cond:3 = eax_9 == 0

eax_9.b = cond:3
bool var_61 = eax_9.b == 0
int32_t var_2c

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t var_4_1 = 0xffffffff
int32_t var_2c_1 = 0xf
int32_t var_30 = 0
var_40 = 0
int32_t var_14

if (var_14 u>= 0x10)
    j__free(var_28)

int32_t* result

if (var_61 == 0)
    result = *(arg2 + 0x1c)
    
    if (result != 0)
        *(arg1 + 0x1c) = result
        *(arg2 + 0x1c) = 0
    
    int32_t* esi_1 = *(arg2 + 0x20)
    int32_t edi_1 = *(arg2 + 0x24)
    
    if (esi_1 == edi_1)
    label_468780:
        result.b = 1
    else
        while (true)
            void* ebp_1 = *esi_1
            
            if (ebp_1 != 0)
                void** var_58
                sub_468250(ebp_1, &var_58)
                int32_t var_4_2 = 1
                int32_t* eax_11 = sub_468810(&var_58, *(arg1 + 0x24), *(arg1 + 0x20), &var_58)
                int32_t edx_3 = *(arg1 + 0x24)
                eax_11.b = edx_3 != eax_11
                int32_t var_44
                
                if (*(ebp_1 + 0x1c) != 0)
                label_468736:
                    
                    if (eax_11.b == 0)
                        goto label_468741
                    
                    void** eax_15 = &var_58
                    
                    if (var_44 u>= 0x10)
                        eax_15 = var_58
                    
                    void** var_80_11 = eax_15
                    var_4_2.b = 2
                    sub_403110(arg3, sub_4691f0(&var_28, 0x6dcf08), nullptr, 0xffffffff)
                    
                    if (var_14 u>= 0x10)
                        j__free(var_28)
                    
                    goto label_4687f2
                
                if (eax_11.b != 0)
                    if (*(arg1 + 0x1c) != 0)
                        goto label_468736
                    
                    int32_t* eax_13 = sub_468810(&var_58, edx_3, *(arg1 + 0x20), &var_58)
                    
                    if (eax_13 != *(arg1 + 0x24))
                        *eax_13
                    
                    goto label_46874d
                
            label_468741:
                sub_4682e0(arg1, &var_58)
            label_46874d:
                
                if (sub_468590(ebp_1, arg3).b == 0)
                label_4687f2:
                    
                    if (var_44 u>= 0x10)
                        j__free(var_58)
                    
                    result.b = 0
                    break
                
                int32_t var_4_3 = 0xffffffff
                
                if (var_44 u>= 0x10)
                    j__free(var_58)
            
            esi_1 = &esi_1[1]
            
            if (esi_1 == edi_1)
                goto label_468780
else
    sub_4057c0(arg3, 0x6dceec, 0x1b)
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_68)
return result
