// 函数: sub_475a50
// 地址: 0x475a50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_84 = 0xffffffff
int32_t (* var_88)(void* arg1) = sub_72e040
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_80
int32_t eax_2 = __security_cookie ^ &var_80
int32_t var_ac = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* esi = sub_46de30(arg2, &var_80)
int32_t var_84_1 = 0
char var_38
char* eax_5 = sub_46de30(arg1, &var_38)
bool cond:0 = *(esi + 0x14) u< 0x10
void* edx = &esi[0x10]
int32_t* ecx_2 = eax_5
void* var_9c = edx

if (not(cond:0))
    esi = *esi

void* eax_6 = &ecx_2[4]

if (ecx_2[5] u>= 0x10)
    ecx_2 = *ecx_2

int32_t edx_1 = *edx
int32_t eax_7 = edx_1

if (*eax_6 u< edx_1)
    eax_7 = *eax_6

int32_t esi_1 = sub_406ac0(eax_7, esi, ecx_2, eax_7)

if (esi_1 == 0)
    void* esi_2 = var_9c
    int32_t eax_9 = *esi_2
    int32_t ecx_3 = *eax_6
    bool c_1 = eax_9 u< ecx_3
    
    if (eax_9 == ecx_3 || c_1)
        esi_1 = neg.d(sbb.d(esi_2, esi_2, c_1))
    else
        esi_1 = 0xffffffff

int32_t var_24

if (var_24 u>= 0x10)
    sub_403160(var_38.d, var_24 + 1, 1)

int32_t var_84_2 = 0xffffffff
int32_t var_24_1 = 0xf
int32_t var_28 = 0
var_38 = 0
int32_t var_6c

if (var_6c u>= 0x10)
    sub_403160(var_80, var_6c + 1, 1)

int32_t* result

if (esi_1 == 0)
    result = *(arg2 + 0x1c)
    
    if (result != 0)
        *(arg1 + 0x1c) = result
        *(arg2 + 0x1c) = 0
    
    int32_t* esi_4 = *(arg2 + 0x20)
    int32_t edi_1 = *(arg2 + 0x24)
    
    if (esi_4 == edi_1)
    label_475c26:
        result.b = 1
    else
        while (true)
            int32_t ebx_3 = *esi_4
            
            if (ebx_3 != 0)
                void* var_20
                sub_46de30(ebx_3, &var_20)
                int32_t var_84_3 = 1
                char eax_14 = sub_4755f0(arg1, &var_20)
                int32_t* var_c
                
                if (*(ebx_3 + 0x1c) != 0)
                label_475bda:
                    
                    if (eax_14 == 0)
                        goto label_475be5
                    
                    void* eax_19 = &var_20
                    
                    if (var_c u>= 0x10)
                        eax_19 = var_20
                    
                    var_9c = eax_19
                    void* var_68
                    sub_403360(&var_68, 0x75fb7c)
                    var_84_3.b = 2
                    var_84_3.b = 3
                    char var_50
                    sub_4055a0(arg3, sub_409240(&var_9c, &var_68, &var_50, &var_9c), 0, 0xffffffff)
                    int32_t var_3c
                    
                    if (var_3c u>= 0x10)
                        sub_403160(var_50.d, var_3c + 1, 1)
                    
                    int32_t var_3c_1 = 0xf
                    int32_t var_40_1 = 0
                    var_50 = 0
                    int32_t var_54
                    
                    if (var_54 u>= 0x10)
                        sub_403160(var_68, var_54 + 1, 1)
                    
                    goto label_475ccf
                
                if (eax_14 != 0)
                    if (*(arg1 + 0x1c) != 0)
                        goto label_475bda
                    
                    sub_475520(arg1, &var_20)
                    goto label_475bf0
                
            label_475be5:
                sub_475360(arg1, &var_20)
            label_475bf0:
                
                if (sub_475a50(ebx_3, arg3) == 0)
                label_475ccf:
                    
                    if (var_c u>= 0x10)
                        sub_403160(var_20, var_c + 1, 1)
                    
                    result.b = 0
                    break
                
                int32_t var_84_4 = 0xffffffff
                
                if (var_c u>= 0x10)
                    sub_403160(var_20, var_c + 1, 1)
            
            esi_4 = &esi_4[1]
            
            if (esi_4 == edi_1)
                goto label_475c26
else
    sub_407430(arg3, 0x75fba8, 0x1b)
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &var_80)
return result
