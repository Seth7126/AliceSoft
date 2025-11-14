// 函数: sub_660020
// 地址: 0x660020
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cf7cb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* result_1
int32_t eax_2 = __security_cookie ^ &result_1
int32_t __saved_edi
int32_t var_ec = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg2
result_1 = result
int32_t* esi = arg1
int32_t* var_d4 = esi

if (esi != result)
    int32_t* ebx_1 = &esi[0x30]
    
    if (ebx_1 != result)
        do
            int32_t* ebp_1 = ebx_1
            int32_t var_d0
            sub_65b030(&var_d0, ebx_1)
            int32_t var_4 = 0
            int32_t ecx_2 = esi[7]
            int32_t var_b4
            int32_t eax_5 = var_b4
            int32_t edi_1
            
            if (eax_5 s>= ecx_2)
                edi_1 = var_d0
            
            if (eax_5 s>= ecx_2 && (eax_5 s> ecx_2 || edi_1 s>= *esi))
                int32_t* esi_1 = ebx_1
                int32_t edi_2 = edi_1
                
                while (true)
                    int32_t edx = esi_1[-0x29]
                    esi_1 -= 0xc0
                    
                    if (eax_5 s>= edx)
                        if (eax_5 s> edx)
                            break
                        
                        if (edi_2 s>= *esi_1)
                            break
                    
                    sub_65dc20(ebp_1, esi_1)
                    eax_5 = var_b4
                    ebp_1 = esi_1
                    edi_2 = var_d0
                
                result = sub_65dc20(ebp_1, &var_d0)
                esi = var_d4
            else
                int32_t* result_2 = result_1
                sub_662cc0(&ebx_1[0x30], ebx_1, esi, &ebx_1[0x30])
                result = sub_65dc20(esi, &var_d0)
            
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
sub_69a5bc(eax_2 ^ &result_1)
return result
