// 函数: sub_452de0
// 地址: 0x452de0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b77b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_44
int32_t eax_2 = __security_cookie ^ &var_44
int32_t __saved_edi
int32_t var_58 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_4 = 0
void* ebx

if (sub_468c20(arg2, &var_2c, 4) == 0)
labelid_b:
    ebx.b = 0
else
    uint32_t var_38
    
    if (sub_40c250(&var_2c, "JDG2") == 0)
    label_452f66:
        ebx.b = 0
    else
        uint32_t var_3c
        
        if (sub_468b20(arg2, &var_38) == 0)
        label_452f66_1:
            ebx.b = 0
        else if (sub_468b20(arg2, &var_3c) == 0)
        label_452f66_2:
            ebx.b = 0
        else
            int32_t edi_1 = *(arg1 + 0x64)
            
            for (int32_t* i = *(arg1 + 0x60); i != edi_1; i = &i[4])
                (**i)(0)
            
            uint32_t edi_2 = var_3c
            *(arg1 + 0x64) = *(arg1 + 0x60)
            sub_455390(arg1 + 0x60, edi_2)
            int32_t esi_1 = 0
            var_44 = 0
            
            if (edi_2 s> 0)
                ebx = nullptr
                
                do
                    uint32_t var_40
                    
                    if (sub_468b20(arg2, &var_40) == 0)
                        goto label_452f66_2
                    
                    int32_t edi_3 = 0
                    
                    if (var_40 s> 0)
                        while (true)
                            struct IDebugFileVarSource::debugfile::CVarSource::VTable** eax_8 =
                                sub_69adc6(0x80)
                            struct IDebugFileVarSource::debugfile::CVarSource::VTable** esi_2
                            
                            if (eax_8 == 0)
                                esi_2 = nullptr
                            else
                                esi_2 = sub_454f70(eax_8)
                            
                            if (sub_455180(esi_2, var_38, arg2) == 0)
                                if (esi_2 != 0)
                                    (*esi_2)->vFunc_15(1)
                                
                                break
                            
                            int32_t var_30 = esi_2
                            sub_412de0(*(arg1 + 0x60) + 4 + ebx, &var_30)
                            edi_3 += 1
                            
                            if (edi_3 s>= var_40)
                                esi_1 = var_44
                                goto label_452f43
                        
                        goto label_452f66_2
                    
                label_452f43:
                    esi_1 += 1
                    ebx += 0x10
                    var_44 = esi_1
                while (esi_1 s< var_3c)
            
            ebx.b = 1

if (var_18 u>= 0x10)
    j__free(var_2c.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return ebx.b
