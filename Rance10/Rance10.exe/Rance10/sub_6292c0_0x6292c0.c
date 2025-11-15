// 函数: sub_6292c0
// 地址: 0x6292c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_737ed6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t eax_3 = *(arg1 + 0x38)

if (eax_3 != 0)
    int32_t ecx_2 = *(eax_3 + 0x28)
    int32_t edi_1
    
    if (ecx_2 != 0xffffffff)
        int32_t var_20
        edi_1 = *sub_6148a0(**(arg1 + 0x24), &var_20, ecx_2, *(arg1 + 0x28), nullptr, 0)
        int32_t var_8_1 = 0
        eax_3 = sub_602c60(&var_20)
        
        if (eax_3.b != 0)
            void* ecx_5 = data_7fcbb4
            int32_t var_18
            
            if (ecx_5 != 0)
                eax_3 = sub_621db0(ecx_5, var_18)
        
        var_20 = 0xffffffff
        int32_t var_8_2 = 0xffffffff
    
    if (ecx_2 == 0xffffffff || edi_1 != 0xffffffff)
        int32_t ecx_6
        
        if (*(arg1 + 0x14) != 0)
            ecx_6 = *(arg1 + 0x10)
        else
            ecx_6 = 0
        
        if (sub_600b40(eax_3, *(arg1 + 0x38) + 0x2c, ecx_6, *(arg1 + 0x24)).b != 0)
            int32_t eax_6 = sub_62a140(arg1)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_6

eax_3.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
