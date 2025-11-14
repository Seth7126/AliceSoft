// 函数: sub_660980
// 地址: 0x660980
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cf86b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_e0
int32_t eax_2 = __security_cookie ^ &var_e0
int32_t __saved_edi
int32_t var_f4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg2
int32_t* result_1 = result
int32_t* edi = arg1
int32_t* var_d4 = edi

if (edi != result)
    int32_t* ebx_1 = &edi[0x30]
    int32_t* var_dc_1 = ebx_1
    
    if (ebx_1 != result)
        do
            var_e0 = ebx_1
            int32_t var_d0
            sub_65b030(&var_d0, ebx_1)
            int32_t var_4 = 0
            int32_t eax_5 = edi[9]
            int32_t var_ac
            int32_t edx = var_ac
            int32_t esi_1 = edi[0xa]
            int32_t edi_1 = edi[0xb]
            int32_t var_a8
            int32_t var_a4
            int32_t eax_6
            int32_t ecx_1
            
            if (edx s>= eax_5)
                eax_6 = var_a4
                ecx_1 = var_a8
            
            if (edx s>= eax_5 && (edx s> eax_5 || (ecx_1 s>= esi_1 &&
                    (ecx_1 s> esi_1 || (eax_6 s>= edi_1 && (eax_6 s> edi_1 || var_d0 s>= *edi))))))
                int32_t* esi_2 = ebx_1
                
                while (true)
                    int32_t ebp_2 = esi_2[-0x27]
                    esi_2 -= 0xc0
                    int32_t ebx_2 = esi_2[0xa]
                    int32_t edi_2 = esi_2[0xb]
                    
                    if (edx s>= ebp_2)
                        if (edx s> ebp_2)
                            break
                        
                        if (ecx_1 s>= ebx_2)
                            if (ecx_1 s> ebx_2)
                                break
                            
                            if (eax_6 s>= edi_2)
                                if (eax_6 s> edi_2)
                                    break
                                
                                if (var_d0 s>= *esi_2)
                                    break
                    
                    sub_65dc20(var_e0, esi_2)
                    eax_6 = var_a4
                    ecx_1 = var_a8
                    edx = var_ac
                    var_e0 = esi_2
                
                result = sub_65dc20(var_e0, &var_d0)
                ebx_1 = var_dc_1
                edi = var_d4
            else
                int32_t* result_2 = result_1
                edi = var_d4
                sub_662cc0(&ebx_1[0x30], ebx_1, edi, &ebx_1[0x30])
                result = sub_65dc20(edi, &var_d0)
            
            int32_t var_4_1 = 0xffffffff
            struct dpparts::CListItem::VTable* const var_2c_1 = &dpparts::CListItem::`vftable'
            char var_64
            int32_t var_50
            
            if (var_50 u>= 0x10)
                result = j__free(var_64.d)
            
            var_50 = 0xf
            int32_t var_54_1 = 0
            var_64 = 0
            int32_t var_68
            int32_t var_7c
            
            if (var_68 u>= 0x10)
                result = j__free(var_7c)
            ebx_1 = &ebx_1[0x30]
            var_dc_1 = ebx_1
        while (ebx_1 != result_1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_e0)
return result
