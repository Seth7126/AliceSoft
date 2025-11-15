// 函数: sub_426c70
// 地址: 0x426c70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7297b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t arg_4
uint32_t edi = arg_4
*(arg1 + 0xc) = *(arg1 + 8)

if (sub_4260b0(edi, arg1 + 8) != 0)
    *(arg1 + 0x20) = *(arg1 + 0x1c)
    
    if (sub_4260b0(edi, arg1 + 0x1c) != 0 && sub_6c9790(edi, &arg_4) != 0)
        sub_426de0(arg1 + 0x28)
        uint32_t ebx_1 = arg_4
        int32_t esi_1 = 0
        
        if (ebx_1 s<= 0)
        label_426d8e:
            int32_t* result
            result.b = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
        
        while (true)
            struct advengine::CValueSyntax::VTable* const var_2c =
                &advengine::CValueSyntax::`vftable'
            bool var_28 = false
            int128_t var_24 = zx.o(0)
            int32_t var_8_1 = 0
            
            if (sub_6c9730(edi, &var_28) != 0)
                var_24:4.d = var_24.d
                
                if (sub_4260b0(edi, &var_24) != 0 && sub_6c9600(edi, &arg_4:3, 5) != 0)
                    var_24:0xc.d = zx.d(arg_4:3.b)
                    sub_426e20(arg1 + 0x28, &var_2c)
                    int32_t var_8_2 = 0xffffffff
                    void* ecx_9 = var_24.d
                    
                    if (ecx_9 != 0)
                        sub_403160(ecx_9, (var_24:8.d - ecx_9) s>> 2, 4)
                    
                    esi_1 += 1
                    
                    if (esi_1 s>= ebx_1)
                        goto label_426d8e
                    
                    continue
            
            void* ecx_12 = var_24.d
            
            if (ecx_12 != 0)
                sub_403160(ecx_12, (var_24:8.d - ecx_12) s>> 2, 4)
            
            break

fsbase->NtTib.ExceptionList = ExceptionList
return 0
