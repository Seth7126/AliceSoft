// 函数: sub_65fb30
// 地址: 0x65fb30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cf7cb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_d8
int32_t eax_2 = __security_cookie ^ &var_d8
int32_t __saved_edi
int32_t var_ec = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg2
int32_t* result_1 = result
int32_t* edi = arg1
var_d8 = edi

if (edi != result)
    int32_t* ebx_1 = &edi[0x30]
    
    if (ebx_1 != result)
        do
            int32_t* ebp_1 = ebx_1
            int32_t var_d0
            sub_65b030(&var_d0, ebx_1)
            int32_t var_4 = 0
            int32_t var_bc
            int32_t eax_5 = var_bc
            int32_t var_c0
            int32_t ecx_2 = var_c0
            int32_t esi_2 = edi[4] * edi[5]
            int32_t edx_1 = eax_5 * ecx_2
            
            if (edx_1 s< esi_2)
                goto label_65fc19
            
            int32_t edi_1 = var_d0
            int32_t* edx_2
            
            if (edx_1 s<= esi_2)
                edx_2 = var_d8
            
            if (edx_1 s<= esi_2 && edi_1 s< *edx_2)
                edi = edx_2
            label_65fc19:
                int32_t* result_2 = result_1
                sub_662cc0(&ebx_1[0x30], ebx_1, edi, &ebx_1[0x30])
                result = sub_65dc20(edi, &var_d0)
            else
                int32_t* esi_3 = ebx_1
                
                while (true)
                    int32_t edx_3 = esi_3[-0x2b]
                    esi_3 -= 0xc0
                    int32_t eax_6 = eax_5 * ecx_2
                    int32_t edx_4 = edx_3 * esi_3[4]
                    
                    if (eax_6 s>= edx_4)
                        if (eax_6 s> edx_4)
                            break
                        
                        if (edi_1 s>= *esi_3)
                            break
                    
                    sub_65dc20(ebp_1, esi_3)
                    eax_5 = var_bc
                    ebp_1 = esi_3
                    ecx_2 = var_c0
                    edi_1 = var_d0
                
                result = sub_65dc20(ebp_1, &var_d0)
                edi = var_d8
            
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
        while (ebx_1 != result_1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_d8)
return result
