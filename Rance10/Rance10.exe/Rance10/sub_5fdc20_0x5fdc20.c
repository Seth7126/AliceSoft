// 函数: sub_5fdc20
// 地址: 0x5fdc20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_742350
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_80 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = arg2
int32_t result_1 = result
void* edi = arg1
void* var_64 = edi

if (edi != result)
    void* esi_1 = edi + 0x38
    void* var_54_1 = esi_1
    
    if (esi_1 != result)
        do
            void* ebx_1 = esi_1
            struct sys43vm::CCallFuncCount::VTable* const var_50_1 =
                &sys43vm::CCallFuncCount::`vftable'
            void** esi_2 = esi_1 + 8
            int32_t result_2 = 0xf
            int32_t var_38_1 = 0
            char var_48 = 0
            sub_403590(&var_48, esi_2, 0, 0xffffffff)
            int32_t var_8_1 = 0
            int32_t eax_3 = *(var_54_1 + 0x20)
            void var_2c
            sub_5fe210(&var_2c, var_54_1 + 0x24)
            int32_t ecx_3 = *(var_54_1 + 0x30)
            int32_t eax_6 = *(var_54_1 + 0x34)
            int32_t var_58_1 = eax_6
            int32_t var_8_2 = 1
            int32_t eax_7
            uint32_t edx
            eax_7, edx = __allmul(*(edi + 0x30), *(edi + 0x34), 0x3e8, 0)
            uint32_t eax_8
            int32_t edx_1
            eax_8, edx_1 = __alldiv(eax_7, edx, data_7fcbe8, data_7fcbec)
            int32_t eax_9
            uint32_t edx_2
            eax_9, edx_2 = __allmul(ecx_3, var_58_1, 0x3e8, 0)
            uint32_t eax_10
            int32_t edx_3
            eax_10, edx_3 = __alldiv(eax_9, edx_2, data_7fcbe8, data_7fcbec)
            void* esi_3
            
            if (edx_3 s< edx_1 || (edx_3 s<= edx_1 && eax_10 u<= eax_8))
                int32_t eax_15 = ecx_3
                
                while (true)
                    esi_2 -= 0x38
                    int32_t eax_16
                    uint32_t edx_5
                    eax_16, edx_5 = __allmul(eax_15, var_58_1, 0x3e8, 0)
                    uint32_t eax_17
                    int32_t edx_6
                    eax_17, edx_6 = __alldiv(eax_16, edx_5, data_7fcbe8, data_7fcbec)
                    int32_t eax_18
                    uint32_t edx_7
                    eax_18, edx_7 = __allmul(esi_2[0xa], esi_2[0xb], 0x3e8, 0)
                    uint32_t eax_19
                    int32_t edx_8
                    eax_19, edx_8 = __alldiv(eax_18, edx_7, data_7fcbe8, data_7fcbec)
                    
                    if (edx_6 s< edx_8)
                        break
                    
                    if (edx_6 s<= edx_8 && eax_17 u<= eax_19)
                        break
                    
                    if (ebx_1 + 8 != esi_2)
                        sub_403590(ebx_1 + 8, esi_2, 0, 0xffffffff)
                    
                    *(ebx_1 + 0x20) = esi_2[6]
                    sub_5fe0d0(ebx_1 + 0x24, &esi_2[7])
                    *(ebx_1 + 0x30) = esi_2[0xa]
                    *(ebx_1 + 0x34) = esi_2[0xb]
                    ebx_1 = &esi_2[-2]
                    var_58_1 = eax_6
                    eax_15 = ecx_3
                
                if (ebx_1 + 8 != &var_48)
                    sub_403590(ebx_1 + 8, &var_48, 0, 0xffffffff)
                
                *(ebx_1 + 0x20) = eax_3
                sub_5fe0d0(ebx_1 + 0x24, &var_2c)
                edi = var_64
                esi_3 = var_54_1
                *(ebx_1 + 0x30) = ecx_3
                *(ebx_1 + 0x34) = eax_6
            else
                esi_3 = var_54_1
                edi = var_64
                int32_t var_84_4 = 0.d
                sub_5feb50(esi_3 + 0x38, esi_3, edi, esi_3 + 0x38)
                
                if (edi + 8 != &var_48)
                    sub_403590(edi + 8, &var_48, 0, 0xffffffff)
                
                *(edi + 0x20) = eax_3
                sub_5fe0d0(edi + 0x24, &var_2c)
                *(edi + 0x30) = ecx_3
                *(edi + 0x34) = eax_6
            
            int32_t var_8_3 = 0xffffffff
            struct sys43vm::CCallFuncCount::VTable* const var_50_2 =
                &sys43vm::CCallFuncCount::`vftable'
            sub_471bb0(&var_2c)
            result = result_2
            
            if (result u>= 0x10)
                result = sub_403160(var_48.d, result + 1, 1)
            
            esi_1 = esi_3 + 0x38
            var_54_1 = esi_1
        while (esi_1 != result_1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
